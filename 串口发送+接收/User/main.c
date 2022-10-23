#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "Serial.h"
#include <stdio.h>
#include <string.h>
#define DEBUG_UARTx										USART1;
#define DEBUG_UART_CLK      					RCC_APB2Periph_USART1
#define DEBUG_UART_APBxClkCmd					RCC_APB2PeriphClockCmd
#define DEBUG_UART_BAUDRATE						115200

//USART GPIO 引脚宏定义
#define DEBUG_USART_GPIO_CLK				  (RCC_APB2Periph_GPIOA)
#define DEBUG_USART_GPIO_APBxClkCmd		RCC_APB2PeriphClockCmd
#define DEBUG_USART_TX_GPIO_PORT			GPIOA
#define DEBUG_USART_TX_GPIO_PIN       GPIO_Pin_9
#define DEBUG_USART_RX_GPIO_PORT			GPIOA
#define DEBUG_USART_RX_GPIO_PIN				GPIO_Pin_10

#define DEBUG_USART_IRQ								USART1_IRQn
#define DEBUG_USART_IRQHandler				USART1_IRQHandler

uint8_t USART_RX_BUF[100];
// 接收状态标记位
uint16_t USART_RX_FLAG=0;

//串口中断服务函数
void DEBUG_USART_IRQHandler(void)
{
	uint8_t temp;
	//接收中断
	if(USART_GetFlagStatus(USART1, USART_IT_RXNE) != RESET)
	{
		// 读取接收的数据
		temp = USART_ReceiveData(USART1);
		//接收未完成
		if((USART_RX_FLAG & 0x8000)==0)
		{
			//接收到了0x0d
			if(USART_RX_FLAG & 0x4000)
			{
				// 接收错误,重新开始
				if(temp != 0x0a) USART_RX_FLAG=0;
				// 接收完成
				else USART_RX_FLAG |= 0x8000;
			}
			// 还未接收到0x0d
			else
			{
				if(temp == 0x0d)
				{
					USART_RX_FLAG |= 0x4000;
				}
				else
				{
					USART_RX_BUF[USART_RX_FLAG & 0x3FFF]=temp;
					USART_RX_FLAG++;
					//接收数据错误，重新开始接收
					if(USART_RX_FLAG > 99) USART_RX_FLAG=0;
				}
			}
		}
	}
}


int main(void)
{
	uint16_t tag=0;
	uint8_t len=0;
	uint8_t i=0;
	// USART初始化
	Serial_Init();
	while(1)
	{
		if(USART_RX_FLAG & 0x8000)
		{
			// 获取接收到的数据长度
			len = USART_RX_FLAG & 0x3FFF;
			
			for(i=0; i<len;i++)
			{
				// 向串口发送数据
				USART_SendData(USART1, USART_RX_BUF[i]);
				//等待发送结束
				while(USART_GetFlagStatus(USART1, USART_FLAG_TC)!=SET);
			}
			
			if(strcmp((char *)USART_RX_BUF,"Stop,stm32!")==0)
			{
				Serial_SendString("stm32已停止发送\r\n");
				tag = 1;
				
			}else if (strcmp((char *)USART_RX_BUF,"go,stm32!")==0){
				Serial_SendString("stm32已开始发送\r\n");
			tag = 0;
			}
			USART_RX_FLAG=0;
			memset(USART_RX_BUF,0,sizeof(USART_RX_BUF));
		}
		if (tag == 0)
		{
			Serial_SendString("hello windows!\r\n");
			Delay_ms(800);
		}
	}
}


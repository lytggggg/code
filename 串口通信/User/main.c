/*#include "stm32f10x.h"                  // Device header
#include "Delay.h"
int main(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin=GPIO_Pin_All;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_InitStructure);
	
  while(1){
			GPIO_Write(GPIOA,~0x0001);
			Delay_ms(100);
			GPIO_Write(GPIOA,~0x0002);
			Delay_ms(100);
			GPIO_Write(GPIOA,~0x0004);
			Delay_ms(100);
			GPIO_Write(GPIOA,~0x0008);
			Delay_ms(100);
			GPIO_Write(GPIOA,~0x0010);
			Delay_ms(100);
			GPIO_Write(GPIOA,~0x0020);
			Delay_ms(100);
		

	}
 
}
*/
#include "stm32f10x.h"
#include "usart.h"
u16 USART_RX_STA=0;							//接收状态标记
static u16 fac_ms = 0;
void delay_init(void);
void delay_ms(u16 nms);
int main(void)
{	

	MyUSART_Init();
	delay_init();
	while(1)
	{
		Usart_SendString( USART1,"Hello,windows!\r\n");
		delay_ms(500);
	}	
}

void delay_init()
{
	SysTick_CLKSourceConfig(SysTick_CLKSource_HCLK_Div8);
	fac_ms = (u16)(SystemCoreClock/8000);
}

void delay_ms(u16 nms)
{	 		  	  
	u32 temp;		   
	SysTick->LOAD=(u32)nms*fac_ms;				//时间加载(SysTick->LOAD为24bit)
	SysTick->VAL =0x00;							//清空计数器
	SysTick->CTRL|=SysTick_CTRL_ENABLE_Msk ;	//开始倒数  
	do
	{
		temp=SysTick->CTRL;
	}while((temp&0x01)&&!(temp&(1<<16)));		//等待时间到达   
	SysTick->CTRL&=~SysTick_CTRL_ENABLE_Msk;	//关闭计数器
	SysTick->VAL =0X00;       					//清空计数器	  	    
}






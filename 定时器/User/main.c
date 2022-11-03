#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "Timer.h"
#include "Serial.h"

uint16_t Num;

int main(void)
{
	
	
	OLED_Init();
		Timer_Init2();

	Timer_Init3();
	Serial_Init();
	OLED_ShowString(1, 1, "Num:");
	
	while (1)
	{
		
	}
}

void ledshow(){
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
	
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	GPIO_ResetBits(GPIOA, GPIO_Pin_0);
	Delay_ms(5);
	GPIO_SetBits(GPIOA, GPIO_Pin_0);
}
void TIM3_IRQHandler(void)
{
	if (TIM_GetITStatus(TIM3, TIM_IT_Update) == SET)
	{
		Num ++;
		ledshow();
		//Serial_SendString("asdasd\r\n");
		TIM_ClearITPendingBit(TIM3, TIM_IT_Update);
	}
}
void TIM2_IRQHandler(void)
{
	if (TIM_GetITStatus(TIM2, TIM_IT_Update) == SET)
	{
		Num ++;
		Serial_SendString("hello windows£¡\r\n");
		TIM_ClearITPendingBit(TIM2, TIM_IT_Update);
	}
}

#include<stdio.h>
#include"led.h"
#include"systemClock.h"
#include"stm32f446xx.h"

int main(void)
{
	sysClockConfig();
	led_init(1,4);   //input PA1, output PA4
	
	while(1){	
		uint32_t in = GPIOA->IDR;
		
		if((in>>1)&1) 
			led_on(4);
		
		else
			led_off(4);
		
	}
	
}
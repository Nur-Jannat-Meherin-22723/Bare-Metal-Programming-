#include <stdint.h>
#include"systemClock.h"
#include"stm32f446xx.h"


/***********System Clock Configuration********/
void sysClockConfig(void){
	
	uint32_t *pwr_cr = (uint32_t *)0x40007000;
  uint32_t *flash_acr = (uint32_t *)0x40023C00;


	//1.enable HSE and wait for HSE to become ready
	RCC->CR |= (1<<16);
	while(!(RCC->CR & (1<<17)))
		
	//2.set the POWER ENABLE CLOCK and VOLTAGE REGULATOR
	RCC->APB1ENR |= (1<<28);
	*pwr_cr |= (3<<14);
	
	//3.configure the FLASH PREFETCH and the LATENCY related settings
	*flash_acr = (1 << 9) | (1 << 10) | (1 << 8) | (5 << 0);

	//4.configure the PRESCALARS HCLK, PCLK1, PCLK2
	//AHB PR
	RCC->CFGR = 0U;
	//APB1 PR
	RCC->CFGR |= (5<<10);
	//APB2 PR
	RCC->CFGR |= (4<<13);
	
	//5.configure the main PLL
	RCC->PLLCFGR = (PLL_M<<0) | (PLL_N<<6) | (PLL_P<<16) | (1<<22);
	
	//6.enable the PLL and wait for it to become ready
	RCC->CR |= (1<<24);
	while(!(RCC->CR & (1<<25)));
	
	//7.select the CLOCK SOURCE and wait for it to be set
	RCC->CFGR |= (2<<0);
	while((RCC->CFGR & (3<<2)) != (2<<2));

}
/*
* Data Structure for Reset and Clock Control Registers (RCC), Address Range: 0x4002 3800 - 0x4002 3BFF */
typedef struct
{
uint32_t volatile CR; 				/* Offset: 0x00 (R/W) Clock Control Register */
uint32_t volatile PLLCFGR; 			/* Offset: 0x04 (R/W) PLL Configuration Register */
uint32_t volatile CFGR; 			/* Offset: 0x08 (R/W) Clock Configuration Register */
uint32_t volatile CIR; 				/* Offset: 0x0C (R/W) Clock Interrupt Register */
uint32_t volatile AHB1RSTR; 		/* Offset: 0x10 (R/W) AHB1 Peripheral Reset Register */
uint32_t volatile AHB2RSTR; 		/* Offset: 0x14 (R/W) AHB2 Peripheral Reset Register */
uint32_t volatile AHB3RSTR; 		/* Offset: 0x18 (R/W) AHB3 Peripheral Reset Register */
uint32_t volatile reserved0;
uint32_t volatile APB1RSTR; 		/* Offset: 0x20 (R/W) APB1 Peripheral Reset Register */
uint32_t volatile APB2RSTR; 		/* Offset: 0x24 (R/W) APB2 Peripheral Reset Register */
uint32_t reserved1[2];
uint32_t volatile AHB1ENR; 			/* Offset: 0x30 (R/W) AHB1 Peripheral Clock Enable Register */
uint32_t volatile AHB2ENR; 			/* Offset: 0x34 (R/W) AHB2 Peripheral Clock Enable Register */
uint32_t volatile AHB3ENR; 			/* Offset: 0x38 (R/W) AHB3 Peripheral Clock Enable Register */
uint32_t reserved2;
uint32_t volatile APB1ENR; 			/* Offset: 0x40 (R/W) APB1 Peripheral Clock Enable Register */
uint32_t volatile APB2ENR; 			/* Offset: 0x44 (R/W) APB1 Peripheral Clock Enable Register */
uint32_t reserved3[2];
uint32_t volatile AHB1LPENR; 		/* Offset: 0x50 (R/W) AHB1 Peripheral Clock Enable Lower Power Mode Register */
uint32_t volatile AHB2LPENR; 		/* Offset: 0x54 (R/W) AHB2 Peripheral Clock Enable Lower Power Mode Register */
uint32_t volatile AHB3LPENR; 		/* Offset: 0x58 (R/W) AHB3 Peripheral Clock Enable Lower Power Mode Register */
uint32_t reserved4;
uint32_t volatile APB1LPENR; 		/* Offset: 0x60 (R/W) APB1 Peripheral Clock Enable Lower Power Mode Register */
uint32_t volatile APB2LPENR; 		/* Offset: 0x64 (R/W) APB2 Peripheral Clock Enable Lower Power Mode Register */
uint32_t reserved5[2];
uint32_t volatile BDCR; 			/* Offset: 0x70 (R/W) Backup Domain Control Register */
uint32_t volatile CSR; 				/* Offset: 0x74 (R/W) Clock Control & Status Register */
uint32_t reserved6[2];
uint32_t volatile SSCGR; 			/* Offset: 0x80 (R/W) Spread Spectrum Clock Generation Register */
uint32_t volatile PLLI2SCFGR; 		/* Offset: 0x84 (R/W) PLLI2S Configuration Register */
uint32_t volatile PLLSAICFGR; 		/* Offset: 0x88 (R/W) PLLSAI Configuration Register */
uint32_t volatile DCKCFGR; 			/* Offset: 0x8C (R/W) Dedicated Clocks Configuration Register */
uint32_t volatile CKGATENR; 		/* Offset: 0x90 (R/W) Clocks Gated Enabled Register */
uint32_t volatile DCKCFGR2; 		/* Offset: 0x94 (R/W) Dedicated Clocks Configuration Register 2 */
} RCC_t;
#define RCC ((RCC_t *)0x40023800)


/*
* Data Structure for GPIO port
*/
typedef struct
{
uint32_t volatile MODER; /* Offset: 0x00 (R/W) Mode Register */
uint32_t volatile OTYPER; /* Offset: 0x04 (R/W) Output Type Register */
uint32_t volatile OSPEEDR; /* Offset: 0x08 (R/W) Output Speed Register */
uint32_t volatile PUPDR; /* Offset: 0x0C (R/W) Pull-up/Pull-down Register */
uint32_t volatile IDR; /* Offset: 0x10 (R/W) Input Data Register */
uint32_t volatile ODR; /* Offset: 0x14 (R/W) Output Data Register */
uint32_t volatile BSRR; /* Offset: 0x18 (R/W) Bit Set/Reset Register */
uint32_t volatile LCKR; /* Offset: 0x1C (R/W) Configuration Lock Register */
uint32_t volatile AFRL; /* Offset: 0x20 (R/W) Alternate Function Low Register */
uint32_t volatile AFRH; /* Offset: 0x24 (R/W) Alternate Function High Register */
} GPIO_t;


#define GPIOA ((GPIO_t *)0x40020000)
#define GPIOB ((GPIO_t *)0x40020400)
#define GPIOC ((GPIO_t *)0x40020800)
#define GPIOD ((GPIO_t *)0x40020C00)
#define GPIOE ((GPIO_t *)0x40021000)
#define GPIOF ((GPIO_t *)0x40021400)
#define GPIOG ((GPIO_t *)0x40021800)
#define GPIOH ((GPIO_t *)0x40021C00)
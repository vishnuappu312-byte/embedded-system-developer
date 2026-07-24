/*
 * stm32f401xx.h
 *
 *  Created on: 20-Jun-2026
 *      Author: vishnu
 */


#ifndef INC_STM32F401XX_H_
#define INC_STM32F401XX_H_

#include <stdint.h>

#define           __vo 					  volatile


/*
 * Memory Base Address
 * STEP-1
 */
/***************************************************************/
#define FLASH_BASEADDR   					0x08000000UL
#define ROM_BASEADDR     					0x1FFF0000UL
#define SRAM_BASEADDR   					0x20000000UL

/*
 * NVIC REGISTERS BASE ADDRESS
 */

#define NVIC_ISER0    						((__vo uint32_t *)0xE000E100)
#define NVIC_ISER1    						((__vo uint32_t *)0xE000E104)
#define NVIC_ISER2    						((__vo uint32_t *)0xE000E108)
#define NVIC_ISER3    						((__vo uint32_t *)0xE000E10C)
#define NVIC_ISER4    						((__vo uint32_t *)0xE000E110)
#define NVIC_ISER5    						((__vo uint32_t *)0xE000E114)
#define NVIC_ISER6    						((__vo uint32_t *)0xE000E118)
#define NVIC_ISER7    						((__vo uint32_t *)0xE000E11C)


#define NVIC_ICPR0    						((__vo uint32_t *)0xE000E280)
#define NVIC_ICPR1    						((__vo uint32_t *)0xE000E284)
#define NVIC_ICPR2    						((__vo uint32_t *)0xE000E288)
#define NVIC_ICPR3    						((__vo uint32_t *)0xE000E28C)
#define NVIC_ICPR4    						((__vo uint32_t *)0xE000E290)
#define NVIC_ICPR5    						((__vo uint32_t *)0xE000E294)
#define NVIC_ICPR6    						((__vo uint32_t *)0xE000E298)
#define NVIC_ICPR7    						((__vo uint32_t *)0xE000E29C)

#define NVIC_ISPR0    						((__vo uint32_t *)0xE000E200)
#define NVIC_ISPR1    						((__vo uint32_t *)0xE000E204)
#define NVIC_ISPR2    						((__vo uint32_t *)0xE000E208)
#define NVIC_ISPR3    						((__vo uint32_t *)0xE000E20C)
#define NVIC_ISPR4    						((__vo uint32_t *)0xE000E210)
#define NVIC_ISPR5    						((__vo uint32_t *)0xE000E214)
#define NVIC_ISPR6    						((__vo uint32_t *)0xE000E218)
#define NVIC_ISPR7    						((__vo uint32_t *)0xE000E21C)

#define NVIC_ICPR0    						((__vo uint32_t *)0xE000E280)
#define NVIC_ICPR1    						((__vo uint32_t *)0xE000E284)
#define NVIC_ICPR2    						((__vo uint32_t *)0xE000E288)
#define NVIC_ICPR3    						((__vo uint32_t *)0xE000E28C)
#define NVIC_ICPR4    						((__vo uint32_t *)0xE000E290)
#define NVIC_ICPR5    						((__vo uint32_t *)0xE000E294)
#define NVIC_ICPR6    						((__vo uint32_t *)0xE000E298)
#define NVIC_ICPR7    						((__vo uint32_t *)0xE000E29C)

#define NVIC_IABR0    						((__vo uint32_t *)0xE000E300)
#define NVIC_IABR1    						((__vo uint32_t *)0xE000E304)
#define NVIC_IABR2    						((__vo uint32_t *)0xE000E308)
#define NVIC_IABR3    						((__vo uint32_t *)0xE000E30C)
#define NVIC_IABR4    						((__vo uint32_t *)0xE000E310)
#define NVIC_IABR5    						((__vo uint32_t *)0xE000E314)
#define NVIC_IABR6    						((__vo uint32_t *)0xE000E318)
#define NVIC_IABR7    						((__vo uint32_t *)0xE000E31C)

#define NVIC_IPR0     						((__vo uint32_t *)0xE000E400)
#define NVIC_IPR1     						((__vo uint32_t *)0xE000E404)
#define NVIC_IPR2     						((__vo uint32_t *)0xE000E408)
#define NVIC_IPR3     						((__vo uint32_t *)0xE000E40C)
#define NVIC_IPR4     						((__vo uint32_t *)0xE000E410)
#define NVIC_IPR5     						((__vo uint32_t *)0xE000E414)
#define NVIC_IPR6     						((__vo uint32_t *)0xE000E418)
#define NVIC_IPR7     						((__vo uint32_t *)0xE000E41C)
#define NVIC_IPR8     						((__vo uint32_t *)0xE000E420)
#define NVIC_IPR9     						((__vo uint32_t *)0xE000E424)
#define NVIC_IPR10    						((__vo uint32_t *)0xE000E428)
#define NVIC_IPR11    						((__vo uint32_t *)0xE000E42C)
#define NVIC_IPR12    						((__vo uint32_t *)0xE000E430)
#define NVIC_IPR13    						((__vo uint32_t *)0xE000E434)
#define NVIC_IPR14    						((__vo uint32_t *)0xE000E438)
#define NVIC_IPR15    						((__vo uint32_t *)0xE000E43C)
#define NVIC_IPR16    						((__vo uint32_t *)0xE000E440)
#define NVIC_IPR17    						((__vo uint32_t *)0xE000E444)
#define NVIC_IPR18    						((__vo uint32_t *)0xE000E448)
#define NVIC_IPR19    						((__vo uint32_t *)0xE000E44C)
#define NVIC_IPR20    						((__vo uint32_t *)0xE000E450)
#define NVIC_IPR21    						((__vo uint32_t *)0xE000E454)
#define NVIC_IPR22    						((__vo uint32_t *)0xE000E458)
#define NVIC_IPR23    						((__vo uint32_t *)0xE000E45C)
#define NVIC_IPR24    						((__vo uint32_t *)0xE000E460)
#define NVIC_IPR25    						((__vo uint32_t *)0xE000E464)
#define NVIC_IPR26    						((__vo uint32_t *)0xE000E468)
#define NVIC_IPR27    						((__vo uint32_t *)0xE000E46C)
#define NVIC_IPR28    						((__vo uint32_t *)0xE000E470)
#define NVIC_IPR29    						((__vo uint32_t *)0xE000E474)
#define NVIC_IPR30    						((__vo uint32_t *)0xE000E478)
#define NVIC_IPR31    						((__vo uint32_t *)0xE000E47C)
#define NVIC_IPR32    						((__vo uint32_t *)0xE000E480)
#define NVIC_IPR33    						((__vo uint32_t *)0xE000E484)
#define NVIC_IPR34    						((__vo uint32_t *)0xE000E488)
#define NVIC_IPR35    						((__vo uint32_t *)0xE000E48C)
#define NVIC_IPR36    						((__vo uint32_t *)0xE000E490)
#define NVIC_IPR37    						((__vo uint32_t *)0xE000E494)
#define NVIC_IPR38    						((__vo uint32_t *)0xE000E498)
#define NVIC_IPR39    						((__vo uint32_t *)0xE000E49C)
#define NVIC_IPR40    						((__vo uint32_t *)0xE000E4A0)
#define NVIC_IPR41    						((__vo uint32_t *)0xE000E4A4)
#define NVIC_IPR42    						((__vo uint32_t *)0xE000E4A8)
#define NVIC_IPR43    						((__vo uint32_t *)0xE000E4AC)
#define NVIC_IPR44    						((__vo uint32_t *)0xE000E4B0)
#define NVIC_IPR45    						((__vo uint32_t *)0xE000E4B4)
#define NVIC_IPR46    						((__vo uint32_t *)0xE000E4B8)
#define NVIC_IPR47    						((__vo uint32_t *)0xE000E4BC)
#define NVIC_IPR48    						((__vo uint32_t *)0xE000E4C0)
#define NVIC_IPR49    						((__vo uint32_t *)0xE000E4C4)
#define NVIC_IPR50    						((__vo uint32_t *)0xE000E4C8)
#define NVIC_IPR51    						((__vo uint32_t *)0xE000E4CC)
#define NVIC_IPR52    						((__vo uint32_t *)0xE000E4D0)
#define NVIC_IPR53    						((__vo uint32_t *)0xE000E4D4)
#define NVIC_IPR54    						((__vo uint32_t *)0xE000E4D8)
#define NVIC_IPR55    						((__vo uint32_t *)0xE000E4DC)
#define NVIC_IPR56    						((__vo uint32_t *)0xE000E4E0)
#define NVIC_IPR57    						((__vo uint32_t *)0xE000E4E4)
#define NVIC_IPR58    						((__vo uint32_t *)0xE000E4E8)
#define NVIC_IPR59    						((__vo uint32_t *)0xE000E4EC)


#define NVIC_STIR    						((__vo uint32_t *)0xE000EF00)

#define NVIC_PR_BASE_ADDR 					 NVIC_IPR0

#define NO_PR_BITS_IMPLEMENTED				4

/*
 * peripheral address
 */

#define PERIPH_BASEADDR   					0x40000000UL
#define APB1_BASEADDR   					PERIPH_BASEADDR
#define APB2_BASEADDR   					0x40010000UL
#define AHB1_BASEADDR   					0x40020000UL
#define AHB2_BASEADDR   					0x50000000UL

/*
 *  AHBI PERIPHERAL ADDRESS
 */

/*
 * GPIO ADDRESSES
 */
#define GPIOA_BASEADDR						(AHB1_BASEADDR + 0X0000)
#define GPIOB_BASEADDR						(AHB1_BASEADDR + 0X0400)
#define GPIOC_BASEADDR						(AHB1_BASEADDR + 0X0800)
#define GPIOD_BASEADDR						(AHB1_BASEADDR + 0X0C00)
#define GPIOE_BASEADDR						(AHB1_BASEADDR + 0X1000)
#define GPIOH_BASEADDR						(AHB1_BASEADDR + 0X1C00)

#define CRC_BASEADDR						(AHB1_BASEADDR + 0X3000)
#define RCC_BASEADDR						(AHB1_BASEADDR + 0X3800)
#define FLASHI_BASEADDR						(AHB1_BASEADDR + 0X3C00)
#define DMA1_BASEADDR						(AHB1_BASEADDR + 0X6000)
#define DMA2_BASEADDR						(AHB1_BASEADDR + 0X6400)

/*
 * AHB2 PERIPHERAL ADDRESS
 */
#define USB_OTG_FS_BASEADDR				    (AHB2_BASEADDR + 0X0000)

/*
 * APB2 BASE ADDRESS
 */

#define TIMER1_BASEADDR						(APB2_BASEADDR + 0X0000)
#define USART1_BASEADDR						(APB2_BASEADDR + 0X1000)
#define USART6_BASEADDR						(APB2_BASEADDR + 0X1400)
#define ADC1_BASEADDR						(APB2_BASEADDR + 0X2000)
#define SDIO_BASEADDR						(APB2_BASEADDR + 0X2C00)
#define SPI1_BASEADDR						(APB2_BASEADDR + 0X3000)
#define SPI4_BASEADDR						(APB2_BASEADDR + 0X3400)
#define SYSCFG_BASEADDR						(APB2_BASEADDR + 0X3800)
#define EXTI_BASEADDR						(APB2_BASEADDR + 0X3C00)
#define TIMER9_BASEADDR					    (APB2_BASEADDR + 0X4000)
#define TIMER10_BASEADDR					(APB2_BASEADDR + 0X4400)
#define TIMER11_BASEADDR					(APB2_BASEADDR + 0X4800)

/*
 * APB1 BASE ADDRESS
 */

#define TIM2_BASEADDR      					(APB1_BASEADDR + 0x0000)
#define TIM3_BASEADDR      					(APB1_BASEADDR + 0x0400)
#define TIM4_BASEADDR      					(APB1_BASEADDR + 0x0800)
#define TIM5_BASEADDR     					(APB1_BASEADDR + 0x0C00)
#define RTC_BKP_BASEADDR    				(APB1_BASEADDR + 0x2800)
#define WWDG_BASEADDR       				(APB1_BASEADDR + 0x2C00)
#define IWDG_BASEADDR        				(APB1_BASEADDR + 0x3000)
#define I2S2EXT_BASEADDR     				(APB1_BASEADDR + 0x3400)
#define SPI2_BASEADDR       				(APB1_BASEADDR + 0x3800)
#define SPI3_BASEADDR       				(APB1_BASEADDR + 0x3C00)
#define I2S3EXT_BASEADDR     				(APB1_BASEADDR + 0x4000)
#define USART2_BASEADDR      				(APB1_BASEADDR + 0x4400)
#define I2C1_BASEADDR        				(APB1_BASEADDR + 0x5400)
#define I2C2_BASEADDR        				(APB1_BASEADDR + 0x5800)
#define I2C3_BASEADDR        				(APB1_BASEADDR + 0x5C00)
#define PWR_BASEADDR         				(APB1_BASEADDR + 0x7000)

/**********************************************************************************************************************************/


/*
 * STEP-2
 * BASE ADDRESS OF GPIO REGISTERS
 * CREATE STRUCTURE DEFINITIONS
 * AHB1 PERIPHERALS
 */

typedef struct

{
	__vo uint32_t MODER;
	__vo uint32_t OTYPER;
	__vo uint32_t OSPEEDR;
	__vo uint32_t PUPDR;
	__vo uint32_t IDR;
	__vo uint32_t ODR;
	__vo uint32_t BSRR;
	__vo uint32_t LCKR;
	__vo uint32_t AFR[2];

}GPIO_RegDef_t;

typedef struct
{
		__vo uint32_t  	CR;
		__vo uint32_t  	PLLCFGR;
		__vo uint32_t  	CFGR;
		__vo uint32_t  	CIR;
		__vo uint32_t  	AHB1RSTR;
		__vo uint32_t  	AHB2RSTR;
			 uint32_t  	Reserved0[2];
		__vo uint32_t  	APB1RSTR;
		__vo uint32_t  	APB2RSTR ;
			 uint32_t  	Reserved1[2];
		__vo uint32_t  	AHB1ENR;
		__vo uint32_t  	AHB2ENR ;
			 uint32_t  	Reserved2[2];
         __vo uint32_t  APB1ENR;
         __vo uint32_t  APB2ENR;
              uint32_t  Reserved3[2];
         __vo uint32_t  AHB1LPENR;
         __vo uint32_t  AHB2LPENR;
              uint32_t  Reserved4[2];
         __vo uint32_t  APB1LPENR;
         __vo uint32_t  APB2LPENR ;
              uint32_t  Reserved5[2];
         __vo uint32_t  BDCR;
         __vo uint32_t  CSR ;
              uint32_t  Reserved6[2];
         __vo uint32_t  SSCGR;
         __vo uint32_t  PLLI2SCFGR;
              uint32_t  Reserved7;
         __vo uint32_t  DCKCFGR;

}RCC_RegDef_t;


typedef struct

{

	__vo uint32_t				DR;
	__vo uint32_t               IDR;
	__vo uint32_t				CR;


}CRC_RegDef_t;

typedef struct
{
	__vo uint32_t				ACR;
	__vo uint32_t				KEYR;
	__vo uint32_t				OPTKEYR;
	__vo uint32_t				SR;
	__vo uint32_t				CR;
	__vo uint32_t				OPTCR;

}FLASHI_RegDef_t;



typedef struct
{
    __vo uint32_t CR;
    __vo uint32_t NDTR;
    __vo uint32_t PAR;
    __vo uint32_t M0AR;
    __vo uint32_t M1AR;
    __vo uint32_t FCR;

} DMA_Stream_RegDef_t;

typedef struct
{
    __vo uint32_t LISR;
    __vo uint32_t HISR;
    __vo uint32_t LIFCR;
    __vo uint32_t HIFCR;

    DMA_Stream_RegDef_t STREAM[8];

} DMA_RegDef_t;


typedef struct

{
	__vo uint32_t				CR[2];
	__vo uint32_t				SMCR;
	__vo uint32_t				DIER;
	__vo uint32_t				SR;
	__vo uint32_t				EGR;
	__vo uint32_t				CCMR[2];
	__vo uint32_t				CCER;
	__vo uint32_t				CNT;
	__vo uint32_t				PSC;
	__vo uint32_t				ARR;
	__vo uint32_t				RCR;
	__vo uint32_t				CCR[4];
	__vo uint32_t				BDTR;
	__vo uint32_t				DCR;
	__vo uint32_t				DMAR;

}TIMER1_RegDef_t;


typedef struct

{
	__vo uint32_t			SR;
	__vo uint32_t 			DR;
	__vo uint32_t			BRR;
	__vo uint32_t			CR[3];
	__vo uint32_t			GTPR;


}USART_RegDef_t;

typedef struct
{
    __vo uint32_t			 	SR;
    __vo uint32_t 				CR[2];
    __vo uint32_t 				SMPR[2];
    __vo uint32_t 				JOFR[4];
    __vo uint32_t 				HTR;
    __vo uint32_t 				LTR;
    __vo uint32_t 				SQR[3];
    __vo uint32_t 				JSQR;
    __vo uint32_t 				JDR[4];
    __vo uint32_t 				DR;

} ADC_RegDef_t;


typedef struct
{
	    __vo uint32_t			 	POWER;
	    __vo uint32_t 				CLKCR;
	    __vo uint32_t 				ARG;
	    __vo uint32_t 				CMD;
	    __vo uint32_t 				RESPCMD;
	    __vo uint32_t 				RESP[4];
	    __vo uint32_t 				DTIMER;
	    __vo uint32_t 				DLEN;
	    __vo uint32_t 				DCTRL;
	    __vo uint32_t 				DCOUNT;
	    __vo uint32_t 				STA;
	    __vo uint32_t 				ICR;
	    __vo uint32_t 				MASK;
	         uint32_t			    Reserved0[2];
	    __vo uint32_t 				FIFCNT;
	         uint32_t				Reseved1[13];
	    __vo uint32_t 				FIFO;

}SDIO_RegDef_t;


typedef struct

{
	        __vo uint32_t			 	CR[2];
		    __vo uint32_t 				SR;
		    __vo uint32_t 				DR;
		    __vo uint32_t 				CRCPR;
		    __vo uint32_t 				RXCRCR;
		    __vo uint32_t 				TXCRCR;
		    __vo uint32_t               I2SCFGR;
		    __vo uint32_t 				I2SPR;



}SPI_RegDef_t;


typedef struct

{
	        __vo uint32_t			 	MEMRMP;
		    __vo uint32_t 				PMC;
		    __vo uint32_t 				EXTICR[4];
		         uint32_t 				RESERVED[2];
		    __vo uint32_t               CMPCR;


}SYSCFG_RegDef_t;



typedef struct

{
	        __vo uint32_t			 	IMR;
		    __vo uint32_t 				EMR;
		    __vo uint32_t 				RTSR;
		    __vo uint32_t 				FTSR;
		    __vo uint32_t 				SWIER;
		    __vo uint32_t 				PR;



}EXTI_RegDef_t;



typedef struct

{
	__vo uint32_t				CR1;
	     uint32_t			    Reserved0;
	__vo uint32_t				SMCR;
	__vo uint32_t				DIER;
	__vo uint32_t				SR;
	__vo uint32_t				EGR;
	__vo uint32_t				CCMR1;
	     uint32_t				Rserved1;
	__vo uint32_t				CCER;
	__vo uint32_t				CNT;
	__vo uint32_t				PSC;
	__vo uint32_t				ARR;
	     uint32_t				Reserved2;
	__vo uint32_t				CCR[2];
	     uint32_t				Reserved3[2];

}TIMER9_RegDef_t;


typedef struct

{
	__vo uint32_t				CR1;
         uint32_t			    Reserved0;
	__vo uint32_t				SMCR;
	__vo uint32_t				DIER;
	__vo uint32_t				SR;
	__vo uint32_t				EGR;
	__vo uint32_t				CCMR1;
	     uint32_t				Rserved1;
	__vo uint32_t				CCER;
	__vo uint32_t				CNT;
	__vo uint32_t				PSC;
	__vo uint32_t				ARR;
	     uint32_t				Reserved2;
	__vo uint32_t				CCR1;
	     uint32_t				Reserved3[2];
	__vo uint32_t				OR;

}TIMER10_11_RegDef_t;


typedef struct

{
	__vo uint32_t				CR[2];
	__vo uint32_t				SMCR;
	__vo uint32_t				DIER;
	__vo uint32_t				SR;
	__vo uint32_t				EGR;
	__vo uint32_t				CCMR[2];
	__vo uint32_t				CCER;
	__vo uint32_t				CNT;
	__vo uint32_t				PSC;
	__vo uint32_t				ARR;
	     uint32_t				Reserved0;
	__vo uint32_t				CCR[4];
	     uint32_t				Reserved1;
	__vo uint32_t				DCR;
	__vo uint32_t				DMAR;
	__vo uint32_t				OR;

}TIMER2_5_RegDef_t;




typedef struct

{
	__vo uint32_t				TR;
	__vo uint32_t				DR;
	__vo uint32_t				CR;
	__vo uint32_t				ISR;
	__vo uint32_t				PRER;
	__vo uint32_t				WUTR;
	__vo uint32_t				CALIBR;
	__vo uint32_t				ALRMAR;
	__vo uint32_t				ALRMBR;
	__vo uint32_t				WPR;
	__vo uint32_t				SSR;
	__vo uint32_t				TSTR;
	__vo uint32_t				TSSSR;
	__vo uint32_t				CALR;
	__vo uint32_t				TAFCR;
	__vo uint32_t				ALRMASSR;
	__vo uint32_t				ALRMBSSR;
         uint32_t				Reseved0;
	__vo uint32_t				BKP[20];

}RTC_RegDef_t;



typedef struct

{
	        __vo uint32_t			 	CR;
		    __vo uint32_t 				CFR;
		    __vo uint32_t 				SR;


}WWDG_RegDef_t;


typedef struct

{
	        __vo uint32_t			 	KR;
		    __vo uint32_t 				PR;
		    __vo uint32_t 				RLR;
		    __vo uint32_t 				SR;

}IWDG_RegDef_t;



typedef struct

{
	__vo uint32_t				CR[2];
	__vo uint32_t				OAR[2];
	__vo uint32_t				DR;
	__vo uint32_t				SR[2];
	__vo uint32_t				CCR;
	__vo uint32_t				TRISE;
	__vo uint32_t				FLTR;

}I2C_RegDef_t;




typedef struct

{
	        __vo uint32_t			 	CR;
	        __vo uint32_t 				CSR;


}PWR_RegDef_t;

typedef struct

{
	__vo uint32_t  								GOTGCTL;
	__vo uint32_t  								GOTGINT;
	__vo uint32_t  								GAHBCFG;
	__vo uint32_t  								GUSBCFG;
	__vo uint32_t  								GRSTCTL;
	__vo uint32_t  								GINTSTS;
	__vo uint32_t  								GINTMSK;
	__vo uint32_t  								GRXSTSR; // HOST MODE AND DEVICE MODE SAME REGISTER NAME
	__vo uint32_t  								GRXSTSP; // HOST MODE AND DEVICE MODE SAME REGISTER NAME
	__vo uint32_t  								GRXFSIZ;
	__vo uint32_t  								DIEPTXF0_HNPTXFSIZ;
	__vo uint32_t  							    HNPTXSTS;
	     uint32_t 							    RESERVED0[2];
	__vo uint32_t  							    GCCFG;
	__vo uint32_t  							    CID;
	     uint32_t 								RESERVED1[48];
	__vo uint32_t  							    HPTXFSIZ;
	__vo uint32_t  							    DIEPTXF1;
	__vo uint32_t  							    DIEPTXF2;
	__vo uint32_t  							    DIEPTXF3;
	     uint32_t 								RESERVED2[64];
	__vo uint32_t  							    HCFG;
	__vo uint32_t  							    HFIR;
	__vo uint32_t  							    HFNUM;
    	 uint32_t 								RESERVED3;
	__vo uint32_t  							    HPTXSTS;
	__vo uint32_t  							    HAINT;
	__vo uint32_t  							    HAINTMSK;
         uint32_t 								RESERVED4[9];
	__vo uint32_t  							    HPRT;
	     uint32_t 								RESERVED5[47];
	__vo uint32_t  							    HCCHAR0;
	     uint32_t 								RESERVED6;
	__vo uint32_t  							    HCINT0;
	__vo uint32_t  							    HCINTMSK0;
	__vo uint32_t  							    HCTSIZ0;
		 uint32_t 								RESERVED7[3];
	__vo uint32_t 								HCCHAR1;
		 uint32_t 								RESERVED8;
	__vo uint32_t 								HCINT1;
	__vo uint32_t 								HCINTMSK1;
	__vo uint32_t 								HCTSIZ1;
		 uint32_t 								RESERVED9[3];
    __vo uint32_t 								HCCHAR2;
		 uint32_t                               RESERVED10;
	__vo uint32_t 								HCINT2;
    __vo uint32_t                               HCINTMSK2;
    __vo uint32_t                               HCTSIZ2;
		 uint32_t 								RESERVED11[3];
	__vo uint32_t                               HCCHAR3;
		 uint32_t                               RESERVED12;
	__vo uint32_t 								HCINT3;
	__vo uint32_t 								HCINTMSK3;
	__vo uint32_t 								HCTSIZ3;
		 uint32_t 								RESERVED13[3];
	__vo uint32_t                               HCCHAR4;
		 uint32_t                               RESERVED14;
	__vo uint32_t                               HCINT4;
	__vo uint32_t                               HCINTMSK4;
	__vo uint32_t 								HCTSIZ4;
		 uint32_t 								RESERVED15[3];
	__vo uint32_t                               HCCHAR5;
		 uint32_t                               RESERVED16;
	__vo uint32_t                               HCINT5;
	__vo uint32_t                               HCINTMSK5;
	__vo uint32_t                               HCTSIZ5;
		 uint32_t                               RESERVED17[3];
    __vo uint32_t                               HCCHAR6;
		 uint32_t                               RESERVED18;
	__vo uint32_t                               HCINT6;
	__vo uint32_t                               HCINTMSK6;
	__vo uint32_t                               HCTSIZ6;
		 uint32_t                               RESERVED19[3];
	__vo uint32_t                               HCCHAR7;
		 uint32_t                               RESERVED20;
	__vo uint32_t                               HCINT7;
	__vo uint32_t                               HCINTMSK7;
	__vo uint32_t                               HCTSIZ7;
		 uint32_t                               RESERVED21[3];
		 uint32_t 								RESERVED22[128];
	__vo uint32_t  							    DCFG;
	__vo uint32_t  							    DCTL;
	__vo uint32_t  							    DSTS;
		 uint32_t 								RESERVED23;
	__vo uint32_t  							    DIEPMSK;
	__vo uint32_t  							    DOEPMSK;
	__vo uint32_t  							    DAINT;
	__vo uint32_t  							    DAINTMSK;
		 uint32_t 								RESERVED24[2];
	__vo uint32_t  							    DVBUSDIS;
	__vo uint32_t  							    DVBUSPULSE;
		 uint32_t 								RESERVED25;
	__vo uint32_t  							    DIEPEMPMSK;
	__vo uint32_t 								DIEPCTL0;
	     uint32_t                               RESERVED26;
	__vo uint32_t 								DIEPINT0;
		 uint32_t 								RESERVED27;
	__vo uint32_t                               DIEPTSIZ0;
	__vo uint32_t                               DIEPDMA0;
	__vo uint32_t                               DTXFSTS0;
	     uint32_t                               RESERVED28;
	__vo uint32_t                               DIEPCTL1;
	     uint32_t                               RESERVED29;
	__vo uint32_t                               DIEPINT1;
	     uint32_t                               RESERVED30;
	__vo uint32_t                               DIEPTSIZ1;
	__vo uint32_t                               DIEPDMA1;
	__vo uint32_t                               DTXFSTS1;
	     uint32_t                               RESERVED31;
	__vo uint32_t                               DIEPCTL2;
	     uint32_t                               RESERVED32;
	__vo uint32_t                               DIEPINT2;
	     uint32_t                               RESERVED33;
	__vo uint32_t                               DIEPTSIZ2;
	__vo uint32_t                               DIEPDMA2;
	__vo uint32_t                               DTXFSTS2;
	     uint32_t                               RESERVED34;
	__vo uint32_t                               DIEPCTL3;
	     uint32_t                               RESERVED35;
	__vo uint32_t                               DIEPINT3;
	     uint32_t 								RESERVED36;
	__vo uint32_t 								DIEPTSIZ3;
	__vo uint32_t 								DIEPDMA3;
	__vo uint32_t 								DTXFSTS3;
		 uint32_t 								RESERVED37;
	__vo uint32_t                               DOEPCTL0;
		 uint32_t                               RESERVED38;
	__vo uint32_t 								DOEPINT0;
		 uint32_t 								RESERVED39;
	__vo uint32_t 								DOEPTSIZ0;
	__vo uint32_t 								DOEPDMA0;
		 uint32_t 								RESERVED40[2];
	__vo uint32_t 								DOEPCTL1;
		 uint32_t 								RESERVED41;
	__vo uint32_t 								DOEPINT1;
		 uint32_t 								RESERVED42;
	__vo uint32_t 								DOEPTSIZ1;
	__vo uint32_t 								DOEPDMA1;
		 uint32_t 								RESERVED43[2];
	__vo uint32_t 								DOEPCTL2;
		 uint32_t 								RESERVED44;
	__vo uint32_t 								DOEPINT2;
		 uint32_t 								RESERVED45;
	__vo uint32_t 								DOEPTSIZ2;
	__vo uint32_t 								DOEPDMA2;
		 uint32_t 								RESERVED46[2];
	__vo uint32_t 								DOEPCTL3;
		 uint32_t 								RESERVED47;
	__vo uint32_t 								DOEPINT3;
		 uint32_t 								RESERVED48;
	__vo uint32_t 								DOEPTSIZ3;
	__vo uint32_t 								DOEPDMA3;
		 uint32_t 								RESERVED49[2];
		 uint32_t 								RESERVED50[160];
	__vo uint32_t 								PCGCCTL;



}USB_OTG_FS_RegDef_t;

/***********************************************************************************************************************************/

/*
 *
 * Step 3
 * pointing MACROS address
 */

/*
 * GPIO
 */
#define GPIOA        						((GPIO_RegDef_t * )GPIOA_BASEADDR)
#define GPIOB        						((GPIO_RegDef_t * )GPIOB_BASEADDR)
#define GPIOC        						((GPIO_RegDef_t * )GPIOC_BASEADDR)
#define GPIOD        						((GPIO_RegDef_t * )GPIOD_BASEADDR)
#define GPIOE        						((GPIO_RegDef_t * )GPIOE_BASEADDR)
#define GPIOH        						((GPIO_RegDef_t * )GPIOH_BASEADDR)

/*
 * AHB1
 */
#define RCC        						    ((RCC_RegDef_t * )RCC_BASEADDR)
#define CRC     							((CRC_RegDef_t * )CRC_BASEADDR)
#define FLASHI  							((FLASHI_RegDef_t * )FLASHI_BASEADDR)
#define DMA1    							((DMA_RegDef_t * )DMA1_BASEADDR)
#define DMA2    							((DMA_RegDef_t * )DMA2_BASEADDR)

/*
 * APB2
 */

#define TIM1    							((TIMER1_RegDef_t * )TIMER1_BASEADDR)
#define USART1  							((USART_RegDef_t * )USART1_BASEADDR)
#define USART6  							((USART_RegDef_t * )USART6_BASEADDR)
#define ADC1    							((ADC_RegDef_t * )ADC1_BASEADDR)
#define SDIO    							((SDIO_RegDef_t * )SDIO_BASEADDR)
#define SPI1    							((SPI_RegDef_t * )SPI1_BASEADDR)
#define SPI4    							((SPI_RegDef_t * )SPI4_BASEADDR)
#define SYSCFG  							((SYSCFG_RegDef_t * )SYSCFG_BASEADDR)
#define EXTI    							((EXTI_RegDef_t * )EXTI_BASEADDR)
#define TIM9    							((TIMER9_RegDef_t * )TIMER9_BASEADDR)
#define TIM10   							((TIMER10_11_RegDef_t * )TIMER10_BASEADDR)
#define TIM11   							((TIMER10_11_RegDef_t * )TIMER11_BASEADDR)

/*
 * APB1
 */



#define TIM2    							((TIMER2_5_RegDef_t *)TIM2_BASEADDR)
#define TIM5    							((TIMER2_5_RegDef_t *)TIM5_BASEADDR)
#define RTC     							((RTC_RegDef_t *)RTC_BKP_BASEADDR)
#define WWDG    							((WWDG_RegDef_t *)WWDG_BASEADDR)
#define IWDG    							((IWDG_RegDef_t *)IWDG_BASEADDR)
#define SPI2    							((SPI_RegDef_t *)SPI2_BASEADDR)
#define SPI3    							((SPI_RegDef_t *)SPI3_BASEADDR)
#define I2S2EXT 							((SPI_RegDef_t *)I2S2EXT_BASEADDR)
#define I2S3EXT 							((SPI_RegDef_t *)I2S3EXT_BASEADDR)
#define USART2  							((USART_RegDef_t *)USART2_BASEADDR)
#define I2C1    							((I2C_RegDef_t *)I2C1_BASEADDR)
#define I2C2    							((I2C_RegDef_t *)I2C2_BASEADDR)
#define I2C3    							((I2C_RegDef_t *)I2C3_BASEADDR)
#define PWR     							((PWR_RegDef_t *)PWR_BASEADDR)

/*************************************************************************************/

/*
 * step 4
 * AHB1 PERIPHERAL CLOCK ENABLE
 */

#define GPIOA_PCLK_EN()						(RCC-> AHB1ENR |= (1<<0))
#define GPIOB_PCLK_EN()						(RCC-> AHB1ENR |= (1<<1))
#define GPIOC_PCLK_EN()						(RCC-> AHB1ENR |= (1<<2))
#define GPIOD_PCLK_EN()						(RCC-> AHB1ENR |= (1<<3))
#define GPIOE_PCLK_EN()						(RCC-> AHB1ENR |= (1<<4))
#define GPIOH_PCLK_EN()						(RCC-> AHB1ENR |= (1<<7))
#define CRC_PCLK_EN()						(RCC-> AHB1ENR |= (1<<12))
#define DMA1_PCLK_EN()						(RCC-> AHB1ENR |= (1<<21))
#define DMA2_PCLK_EN()						(RCC-> AHB1ENR |= (1<<22))

/*
 * AHB1 PERIPHERAL CLOCK DISABLE
 */

#define GPIOA_PCLK_DI()						(RCC-> AHB1ENR &= ~(1<<0))
#define GPIOB_PCLK_DI()						(RCC-> AHB1ENR &= ~(1<<1))
#define GPIOC_PCLK_DI()						(RCC-> AHB1ENR &= ~(1<<2))
#define GPIOD_PCLK_DI()						(RCC-> AHB1ENR &= ~(1<<3))
#define GPIOE_PCLK_DI()						(RCC-> AHB1ENR &= ~(1<<4))
#define GPIOH_PCLK_DI()						(RCC-> AHB1ENR &= ~(1<<7))
#define CRC_PCLK_DI()						(RCC-> AHB1ENR &= ~(1<<12))
#define DMA1_PCLK_DI()						(RCC-> AHB1ENR &= ~(1<<21))
#define DMA2_PCLK_DI()						(RCC-> AHB1ENR &= ~(1<<22))

/*
 * AHB2 PERIPHERAL CLOCK ENABLE
 */

#define OTGFS_PCLK_EN()						(RCC-> AHB2ENR |= (1<<7))

/*
 * AHB2 PERIPHERAL CLOCK DISABLE
 */

#define OTGFS_PCLK_DI()						(RCC-> AHB2ENR &= ~(1<<7))

/*
 * APB1 PERIPHERAL CLOCK ENABLE
 */

#define TIM2_PCLK_EN()						(RCC-> APB1ENR |= (1<<0))
#define TIM3_PCLK_EN()						(RCC-> APB1ENR |= (1<<1))
#define TIM4_PCLK_EN()						(RCC-> APB1ENR |= (1<<2))
#define TIM5_PCLK_EN()						(RCC-> APB1ENR |= (1<<3))
#define WWDG_PCLK_EN()						(RCC-> APB1ENR |= (1<<11))
#define SPI2_PCLK_EN()						(RCC-> APB1ENR |= (1<<14))
#define SPI3_PCLK_EN()						(RCC-> APB1ENR |= (1<<15))
#define USART2_PCLK_EN()					(RCC-> APB1ENR |= (1<<17))
#define I2C1_PCLK_EN()						(RCC-> APB1ENR |= (1<<21))
#define I2C2_PCLK_EN()						(RCC-> APB1ENR |= (1<<22))
#define I2C3_PCLK_EN()						(RCC-> APB1ENR |= (1<<23))
#define PWR_PCLK_EN()						(RCC-> APB1ENR |= (1<<28))

/*
 * APB1 PERIPHERAL CLOCK DISABLE
 */


#define TIM2_PCLK_DI()						(RCC-> APB1ENR &= ~(1<<0))
#define TIM3_PCLK_DI()						(RCC-> APB1ENR &= ~(1<<1))
#define TIM4_PCLK_DI()						(RCC-> APB1ENR &= ~(1<<2))
#define TIM5_PCLK_DI()						(RCC-> APB1ENR &= ~(1<<3))
#define WWDG_PCLK_DI()						(RCC-> APB1ENR &= ~(1<<11))
#define SPI2_PCLK_DI()						(RCC-> APB1ENR &= ~(1<<14))
#define SPI3_PCLK_DI()						(RCC-> APB1ENR &= ~(1<<15))
#define USART2_PCLK_DI()					(RCC-> APB1ENR &= ~(1<<17))
#define I2C1_PCLK_DI()						(RCC-> APB1ENR &= ~(1<<21))
#define I2C2_PCLK_DI()						(RCC-> APB1ENR &= ~(1<<22))
#define I2C3_PCLK_DI()						(RCC-> APB1ENR &= ~(1<<23))
#define PWR_PCLK_DI()						(RCC-> APB1ENR &= ~(1<<28))

/*
 * APB2 PHERIPHERAL CLOCK ENABLE
 */


#define TIM1_PCLK_EN()						(RCC-> APB2ENR |= (1<<0))
#define USART1_PCLK_EN()					(RCC-> APB2ENR |= (1<<4))
#define USART6_PCLK_EN()					(RCC-> APB2ENR |= (1<<5))
#define ADC1_PCLK_EN()						(RCC-> APB2ENR |= (1<<8))
#define SDIO_PCLK_EN()						(RCC-> APB2ENR |= (1<<11))
#define SPI1_PCLK_EN()						(RCC-> APB2ENR |= (1<<12))
#define SPI4_PCLK_EN()						(RCC-> APB2ENR |= (1<<13))
#define SYSCFG_PCLK_EN()					(RCC-> APB2ENR |= (1<<14))
#define TIM9_PCLK_EN()						(RCC-> APB2ENR |= (1<<16))
#define TIM10_PCLK_EN()						(RCC-> APB2ENR |= (1<<17))
#define TIM11_PCLK_EN()						(RCC-> APB2ENR |= (1<<18))

/*
 * APB2 PHERIPHERAL CLOCK DISABLE
 */


#define TIM1_PCLK_DI()						(RCC-> APB2ENR &= ~(1<<0))
#define USART1_PCLK_DI()					(RCC-> APB2ENR &= ~(1<<4))
#define USART6_PCLK_DI()					(RCC-> APB2ENR &= ~(1<<5))
#define ADC1_PCLK_DI()						(RCC-> APB2ENR &= ~(1<<8))
#define SDIO_PCLK_DI()						(RCC-> APB2ENR &= ~(1<<11))
#define SPI1_PCLK_DI()						(RCC-> APB2ENR &= ~(1<<12))
#define SPI4_PCLK_DI()						(RCC-> APB2ENR &= ~(1<<13))
#define SYSCFG_PCLK_DI()					(RCC-> APB2ENR &= ~(1<<14))
#define TIM9_PCLK_DI()						(RCC-> APB2ENR &= ~(1<<16))
#define TIM10_PCLK_DI()						(RCC-> APB2ENR &= ~(1<<17))
#define TIM11_PCLK_DI()						(RCC-> APB2ENR &= ~(1<<18))

/*
 * AHB1 PERIPHERAL CLOCK ENABLE IN LOW POWER
 */


#define GPIOA_PCLK_EN_LOW()						(RCC-> AHB1LPENR |= (1<<0))
#define GPIOB_PCLK_EN_LOW()						(RCC-> AHB1LPENR |= (1<<1))
#define GPIOC_PCLK_EN_LOW()						(RCC-> AHB1LPENR |= (1<<2))
#define GPIOD_PCLK_EN_LOW()						(RCC-> AHB1LPENR |= (1<<3))
#define GPIOE_PCLK_EN_LOW()						(RCC-> AHB1LPENR |= (1<<4))
#define GPIOH_PCLK_EN_LOW()						(RCC-> AHB1LPENR |= (1<<7))
#define CRC_PCLK_EN_LOW()						(RCC-> AHB1LPENR |= (1<<12))
#define FLITF_PCLK_EN_LOW()						(RCC-> AHB1LPENR |= (1<<15))
#define SRAM1_PCLK_EN_LOW()						(RCC-> AHB1LPENR |= (1<<16))
#define DMA1_PCLK_EN_LOW()						(RCC-> AHB1LPENR |= (1<<21))
#define DMA2_PCLK_EN_LOW()						(RCC-> AHB1LPENR |= (1<<22))

/*
 * AHB1 PERIPHERAL CLOCK DISABLE IN LOW POWER
 */


#define GPIOA_PCLK_DI_LOW()						(RCC-> AHB1LPENR &= ~(1<<0))
#define GPIOB_PCLK_DI_LOW()						(RCC-> AHB1LPENR &= ~(1<<1))
#define GPIOC_PCLK_DI_LOW()						(RCC-> AHB1LPENR &= ~(1<<2))
#define GPIOD_PCLK_DI_LOW()						(RCC-> AHB1LPENR &= ~(1<<3))
#define GPIOE_PCLK_DI_LOW()						(RCC-> AHB1LPENR &= ~(1<<4))
#define GPIOH_PCLK_DI_LOW()						(RCC-> AHB1LPENR &= ~(1<<7))
#define CRC_PCLK_DI_LOW()						(RCC-> AHB1LPENR &= ~(1<<12))
#define FLITF_PCLK_DI_LOW()						(RCC-> AHB1LPENR &= ~(1<<15))
#define SRAM1_PCLK_DI_LOW()						(RCC-> AHB1LPENR &= ~(1<<16))
#define DMA1_PCLK_DI_LOW()						(RCC-> AHB1LPENR &= ~(1<<21))
#define DMA2_PCLK_DI_LOW()						(RCC-> AHB1LPENR &= ~(1<<22))

/*
 * AHB2 PERIPHERAL CLOCK ENABLE IN LOW POWER
 */

#define OTGFS_PCLK_EN_LOW()						(RCC-> AHB2LPENR |= (1<<7))

/*
 * AHB2 PERIPHERAL CLOCK DISABLE IN LOW POWER
 */

#define OTGFS_PCLK_DI_LOW()						(RCC-> AHB2LPENR &= ~(1<<7))

/*
 * APB1 PERIPHERAL CLOCK ENABLE IN LOW POWER
 */

#define TIM2_PCLK_EN_LOW()						(RCC-> APB1LPENR |= (1<<0))
#define TIM3_PCLK_EN_LOW()						(RCC-> APB1LPENR |= (1<<1))
#define TIM4_PCLK_EN_LOW()						(RCC-> APB1LPENR |= (1<<2))
#define TIM5_PCLK_EN_LOW()						(RCC-> APB1LPENR |= (1<<3))
#define WWDG_PCLK_EN_LOW()						(RCC-> APB1LPENR |= (1<<11))
#define SPI2_PCLK_EN_LOW()						(RCC-> APB1LPENR |= (1<<14))
#define SPI3_PCLK_EN_LOW()						(RCC-> APB1LPENR |= (1<<15))
#define USART2_PCLK_EN_LOW()					(RCC-> APB1LPENR |= (1<<17))
#define I2C1_PCLK_EN_LOW()						(RCC-> APB1LPENR |= (1<<21))
#define I2C2_PCLK_EN_LOW()						(RCC-> APB1LPENR |= (1<<22))
#define I2C3_PCLK_EN_LOW()						(RCC-> APB1LPENR |= (1<<23))
#define PWR_PCLK_EN_LOW()						(RCC-> APB1LPENR |= (1<<28))


/*
 * APB1 PERIPHERAL CLOCK DISABLE IN LOW POWER
 */


#define TIM2_PCLK_DI_LOW()						(RCC-> APB1LPENR &= ~(1<<0))
#define TIM3_PCLK_DI_LOW()						(RCC-> APB1LPENR &= ~(1<<1))
#define TIM4_PCLK_DI_LOW()						(RCC-> APB1LPENR &= ~(1<<2))
#define TIM5_PCLK_DI_LOW()						(RCC-> APB1LPENR &= ~(1<<3))
#define WWDG_PCLK_DI_LOW()						(RCC-> APB1LPENR &= ~(1<<11))
#define SPI2_PCLK_DI_LOW()						(RCC-> APB1LPENR &= ~(1<<14))
#define SPI3_PCLK_DI_LOW()						(RCC-> APB1LPENR &= ~(1<<15))
#define USART2_PCLK_DI_LOW()					(RCC-> APB1LPENR &= ~(1<<17))
#define I2C1_PCLK_DI_LOW()						(RCC-> APB1LPENR &= ~(1<<21))
#define I2C2_PCLK_DI_LOW()						(RCC-> APB1LPENR &= ~(1<<22))
#define I2C3_PCLK_DI_LOW()						(RCC-> APB1LPENR &= ~(1<<23))
#define PWR_PCLK_DI_LOW()						(RCC-> APB1LPENR &= ~(1<<28))

/*
 * APB2 PERIPHERAL CLOCK ENABLE IN LOW POWER
 */


#define TIM1_PCLK_EN_LOW()						(RCC-> APB2LPENR |= (1<<0))
#define USART1_PCLK_EN_LOW()					(RCC-> APB2LPENR |= (1<<4))
#define USART6_PCLK_EN_LOW()					(RCC-> APB2LPENR |= (1<<5))
#define ADC1_PCLK_EN_LOW()						(RCC-> APB2LPENR |= (1<<8))
#define SDIO_PCLK_EN_LOW()						(RCC-> APB2LPENR |= (1<<11))
#define SPI1_PCLK_EN_LOW()						(RCC-> APB2LPENR |= (1<<12))
#define SPI4_PCLK_EN_LOW()						(RCC-> APB2LPENR |= (1<<13))
#define SYSCFG_PCLK_EN_LOW()					(RCC-> APB2LPENR |= (1<<14))
#define TIM9_PCLK_EN_LOW()						(RCC-> APB2LPENR |= (1<<16))
#define TIM10_PCLK_EN_LOW()						(RCC-> APB2LPENR |= (1<<17))
#define TIM11_PCLK_EN_LOW()						(RCC-> APB2LPENR |= (1<<18))

/*
 * APB2 PERIPHERAL CLOCK DISABLE IN LOW POWER
 */


#define TIM1_PCLK_DI_LOW()						(RCC-> APB2LPENR &= ~(1<<0))
#define USART1_PCLK_DI_LOW()					(RCC-> APB2LPENR &= ~(1<<4))
#define USART6_PCLK_DI_LOW()					(RCC-> APB2LPENR &= ~(1<<5))
#define ADC1_PCLK_DI_LOW()						(RCC-> APB2LPENR &= ~(1<<8))
#define SDIO_PCLK_DI_LOW()						(RCC-> APB2LPENR &= ~(1<<11))
#define SPI1_PCLK_DI_LOW()						(RCC-> APB2LPENR &= ~(1<<12))
#define SPI4_PCLK_DI_LOW()						(RCC-> APB2LPENR &= ~(1<<13))
#define SYSCFG_PCLK_DI_LOW()					(RCC-> APB2LPENR &= ~(1<<14))
#define TIM9_PCLK_DI_LOW()						(RCC-> APB2LPENR &= ~(1<<16))
#define TIM10_PCLK_DI_LOW()						(RCC-> APB2LPENR &= ~(1<<17))
#define TIM11_PCLK_DI_LOW()						(RCC-> APB2LPENR &= ~(1<<18))


/*
 * AHB1 PERIPHERAL RESET
 */

#define GPIOA_REG_RESET() 					   do { RCC->AHB1RSTR |= (1<<0); RCC->AHB1RSTR &= ~(1<<0); } while(0)
#define GPIOB_REG_RESET() 					   do { RCC->AHB1RSTR |= (1<<1); RCC->AHB1RSTR &= ~(1<<1); } while(0)
#define GPIOC_REG_RESET() 					   do { RCC->AHB1RSTR |= (1<<2); RCC->AHB1RSTR &= ~(1<<2); } while(0)
#define GPIOD_REG_RESET() 					   do { RCC->AHB1RSTR |= (1<<3); RCC->AHB1RSTR &= ~(1<<3); } while(0)
#define GPIOE_REG_RESET() 					   do { RCC->AHB1RSTR |= (1<<4); RCC->AHB1RSTR &= ~(1<<4); } while(0)
#define GPIOH_REG_RESET() 					   do { RCC->AHB1RSTR |= (1<<7); RCC->AHB1RSTR &= ~(1<<7); } while(0)
#define CRC_REG_RESET() 					   do { RCC->AHB1RSTR |= (1<<12); RCC->AHB1RSTR &= ~(1<<12); } while(0)
#define DMA1_REG_RESET() 					   do { RCC->AHB1RSTR |= (1<<21); RCC->AHB1RSTR &= ~(1<<21); } while(0)
#define DMA2_REG_RESET() 					   do { RCC->AHB1RSTR |= (1<<22); RCC->AHB1RSTR &= ~(1<<22); } while(0)

/*
 * AHB2 PERIPHERAL RESET
 */

#define OTGFS_REG_RESET() 					   do { RCC->AHB2RSTR |= (1<<7); RCC->AHB2RSTR &= ~(1<<7); } while(0

/*
 * APB1 PERIPHERAL RESET
 */

#define TIM2_REG_RESET() 					   do { RCC->APB1RSTR |= (1<<0); RCC->APB1RSTR &= ~(1<<0); } while(0)
#define TIM3_REG_RESET() 					   do { RCC->APB1RSTR |= (1<<1); RCC->APB1RSTR &= ~(1<<1); } while(0)
#define TIM4_REG_RESET() 					   do { RCC->APB1RSTR |= (1<<2); RCC->APB1RSTR &= ~(1<<2); } while(0)
#define TIM5_REG_RESET() 					   do { RCC->APB1RSTR |= (1<<3); RCC->APB1RSTR &= ~(1<<3); } while(0)
#define WWDG_REG_RESET() 					   do { RCC->APB1RSTR |= (1<<11); RCC->APB1RSTR &= ~(1<<11); } while(0)
#define SPI2_REG_RESET() 					   do { RCC->APB1RSTR |= (1<<14); RCC->APB1RSTR &= ~(1<<14); } while(0)
#define SPI3_REG_RESET() 					   do { RCC->APB1RSTR |= (1<<15); RCC->APB1RSTR &= ~(1<<15); } while(0)
#define USART2_REG_RESET() 					   do { RCC->APB1RSTR |= (1<<17); RCC->APB1RSTR &= ~(1<<17); } while(0)
#define I2C1_REG_RESET() 					   do { RCC->APB1RSTR |= (1<<21); RCC->APB1RSTR &= ~(1<<21); } while(0)
#define I2C2_REG_RESET() 					   do { RCC->APB1RSTR |= (1<<22); RCC->APB1RSTR &= ~(1<<22); } while(0)
#define I2C3_REG_RESET() 					   do { RCC->APB1RSTR |= (1<<23); RCC->APB1RSTR &= ~(1<<23); } while(0)
#define PWR_REG_RESET() 					   do { RCC->APB1RSTR |= (1<<28); RCC->APB1RSTR &= ~(1<<28); } while(0)

/*
 * APB2 PERIPHERAL RESET REGISTER
 */

#define TIM1_REG_RESET() 					   do { RCC->APB2RSTR |= (1<<0); RCC->APB2RSTR &= ~(1<<0); } while(0)
#define USART1_REG_RESET() 					   do { RCC->APB2RSTR |= (1<<4); RCC->APB2RSTR &= ~(1<<4); } while(0)
#define USART6_REG_RESET() 					   do { RCC->APB2RSTR |= (1<<5); RCC->APB2RSTR &= ~(1<<5); } while(0)
#define ADC1_REG_RESET() 					   do { RCC->APB2RSTR |= (1<<8); RCC->APB2RSTR &= ~(1<<8); } while(0)
#define SDIO_REG_RESET() 					   do { RCC->APB2RSTR |= (1<<11); RCC->APB2RSTR &= ~(1<<11); } while(0)
#define SPI1_REG_RESET() 					   do { RCC->APB2RSTR |= (1<<12); RCC->APB2RSTR &= ~(1<<12); } while(0)
#define SPI4_REG_RESET() 					   do { RCC->APB2RSTR |= (1<<13); RCC->APB2RSTR &= ~(1<<13); } while(0)
#define SYSCFG_REG_RESET() 					   do { RCC->APB2RSTR |= (1<<14); RCC->APB2RSTR &= ~(1<<14); } while(0)
#define TIM9_REG_RESET() 					   do { RCC->APB2RSTR |= (1<<16); RCC->APB2RSTR &= ~(1<<16); } while(0)
#define TIM10_REG_RESET() 					   do { RCC->APB2RSTR |= (1<<17); RCC->APB2RSTR &= ~(1<<17); } while(0)
#define TIM11_REG_RESET() 					   do { RCC->APB2RSTR |= (1<<18); RCC->APB2RSTR &= ~(1<<18); } while(0)


/* RCC_CR Register Bit Positions */
#define RCC_CR_HSION_Pos          0
#define RCC_CR_HSIRDY_Pos         1
#define RCC_CR_HSEON_Pos         16
#define RCC_CR_HSERDY_Pos        17
#define RCC_CR_HSEBYP_Pos        18
#define RCC_CR_CSSON_Pos         19
#define RCC_CR_PLLON_Pos         24
#define RCC_CR_PLLRDY_Pos        25


/*RCC_PLL Register Bit Positions*/

#define RCC_PLLCFGR_PLLM_Pos      0
#define RCC_PLLCFGR_PLLN_Pos      6
#define RCC_PLLCFGR_PLLP_Pos     16
#define RCC_PLLCFGR_PLLSRC_Pos   22
#define RCC_PLLCFGR_PLLQ_Pos     24

/* RCC_CFGR Register Bit Positions */

#define RCC_CFGR_SW_Pos           0
#define RCC_CFGR_SWS_Pos          2
#define RCC_CFGR_HPRE_Pos         4
#define RCC_CFGR_PPRE1_Pos       10
#define RCC_CFGR_PPRE2_Pos       13
#define RCC_CFGR_RTCPRE_pos      16
#define RCC_CFGR_MCO1_pos		 21
#define RCC_CFGR_I2SSCR_pos		 23
#define RCC_CFGR_MCO1PRE_pos     24
#define RCC_CFGR_MCO2PRE_pos	 27
#define RCC_CFGR_MCO2_pos        30


/* RCC_CIR Register Bit Positions  */

#define RCC_CIR_LSIRDYF_Pos       0
#define RCC_CIR_LSERDYF_Pos       1
#define RCC_CIR_HSIRDYF_Pos       2
#define RCC_CIR_HSERDYF_Pos       3
#define RCC_CIR_PLLRDYF_Pos       4
#define RCC_CIR_PLLI2SRDYF_Pos       5
#define RCC_CIR_CSSF_Pos             7
#define RCC_CIR_LSIRDYIE_Pos         8
#define RCC_CIR_LSERDYIE_Pos         9
#define RCC_CIR_HSIRDYIE_Pos         10
#define RCC_CIR_HSERDYIE_Pos         11
#define RCC_CIR_PLLRDYIE_Pos         12
#define RCC_CIR_PLLI2SRDYIE_Pos      13
#define RCC_CIR_LSIRDYC_Pos          16
#define RCC_CIR_LSERDYC_Pos          17
#define RCC_CIR_HSIRDYC_Pos          18
#define RCC_CIR_HSERDYC_Pos          19
#define RCC_CIR_PLLRDYC_Pos          20
#define RCC_CIR_PLLI2SRDYC_Pos       21
#define RCC_CIR_CSSC_Pos             23

/*RCC_BDCR Register Bit Positions */


#define RCC_BDCR_LSEON_Pos        0
#define RCC_CIR_LSERDY_Pos        1
#define RCC_CIR_LSEBYP_Pos        2
#define RCC_CIR_RTCSEL_Pos        8
#define RCC_CIR_RTCEN_Pos         15
#define RCC_CIR_BDRST_Pos         16

/* RCC_CSR Register  Bit Positions*/

#define RCC_CSR_LSION_Pos		      0
#define RCC_CSR_LSIRDY_Pos		      1
#define RCC_CSR_RMVF_Pos		      24
#define RCC_CSR_BORR_STF_Pos		  25
#define RCC_CSR_PIN_RSTF_Pos		  26
#define RCC_CSR_POR_RSTF_Pos          27
#define RCC_CSR_SET_RSTF_Pos		  28
#define RCC_CSR_IWDG_RSTF_Pos		  29
#define RCC_CSR_WWDG_RSTF_Pos		  30
#define RCC_CSR_LPWR_RSTF_Pos		  31


/* RCC_SSCGR Register Bit Positions*/

#define RCC_SSCGR_MODPER_Pos			     0
#define RCC_SSCGR_INCSTEP_Pos			     13
#define RCC_SSCGR_SPREAD_SEL_Pos			 30
#define RCC_SSCGR_SSCGEN_Pos			     31

/*RCC_PLLI2SCFGR Register Bit Positions*/

#define RCC_PLLI2SCFGR_PLLI2_SN0_pos(bits)              (6 +  (bits))
#define RCC_PLLI2SCFGR_PLLI2_SR0_pos(bits)              (28 + (bits))


/* RCC_DCKCFGR Registers Bit Positions*/

#define RCC_DCKCFGR_TIMPRE_pos                     24

/* SYSCFG_MEMRMP Register Bit Positions*/

#define SYSCFG_MEMRMP_MEM_MODE_pos 					0

/* SYSCFG_PMC Registers Bit Positions*/

#define SYSCFG_PMC_ADC1DC2_pos    					16

/* SYSCFG_EXTICR1 Registers Bit Position*/

#define SYSCFG_EXTICR1_EXTI_pos(bits)				((bits) * 4)


/* SYSCFG_EXTICR2 Registers Bit Positions*/

#define SYSCFG_EXTICR2_EXTI_pos(bits)				((bits) * 4)

/*SYSCFG_EXTICR3 Registers Bit Positions */


#define SYSCFG_EXTICR3_EXTI_pos(bits)				((bits) * 4)

/*SYSCFG_EXTICR4 Registers Bit Positions */

#define SYSCFG_EXTICR4_EXTI_pos(bits)				((bits) * 4)

/* SYSCFG_CMPCR Registers Bit Positions*/

#define SYSCFG_CMPCR_CMP_PD_pos						0
#define SYSCFG_CMPCR_READY_pos						8

/* GPIOx_MODER Registers Bit Positions*/

#define GPIO_MODER_POS(pin)          				((pin) * 2)
#define GPIO_OTYPER_POS(pin)         				(pin)
#define GPIO_OSPEEDR_POS(pin)        				((pin) * 2)
#define GPIO_PUPDR_POS(pin)          				((pin) * 2)
#define GPIO_IDR_POS(pin)            				(pin)
#define GPIO_ODR_POS(pin)           	 			(pin)
#define GPIO_BSRR_SET_POS(pin)       				(pin)
#define GPIO_BSRR_RESET_POS(pin)     				((pin) + 16)
#define GPIO_LCKR_POS(pin)           				(pin)
#define GPIO_LCKR_LCKK_POS           				16
#define GPIO_AFR_POS(pin)            				(((pin) % 8) * 4)


/*DMA Registers Bit Positions*/

/* Stream 0 */
#define DMA_LISR_FEIF0_POS        					0
#define DMA_LISR_DMEIF0_POS       					2
#define DMA_LISR_TEIF0_POS        					3
#define DMA_LISR_HTIF0_POS        					4
#define DMA_LISR_TCIF0_POS        					5

/* Stream 1 */
#define DMA_LISR_FEIF1_POS        					6
#define DMA_LISR_DMEIF1_POS       					8
#define DMA_LISR_TEIF1_POS        					9
#define DMA_LISR_HTIF1_POS       					10
#define DMA_LISR_TCIF1_POS       					11

/* Stream 2 */
#define DMA_LISR_FEIF2_POS      					16
#define DMA_LISR_DMEIF2_POS     					18
#define DMA_LISR_TEIF2_POS       					19
#define DMA_LISR_HTIF2_POS       					20
#define DMA_LISR_TCIF2_POS       					21

/* Stream 3 */
#define DMA_LISR_FEIF3_POS       					22
#define DMA_LISR_DMEIF3_POS      					24
#define DMA_LISR_TEIF3_POS       					25
#define DMA_LISR_HTIF3_POS       					26
#define DMA_LISR_TCIF3_POS       					27

/*DMA_HISR Register Bit Positions*/



/* Stream 4 */

#define DMA_HISR_FEIF4_POS        					0
#define DMA_HISR_DMEIF4_POS       					2
#define DMA_HISR_TEIF4_POS        					3
#define DMA_HISR_HTIF4_POS        					4
#define DMA_HISR_TCIF4_POS        					5

/* Stream 5 */

#define DMA_HISR_FEIF5_POS        					6
#define DMA_HISR_DMEIF5_POS       					8
#define DMA_HISR_TEIF5_POS        					9
#define DMA_HISR_HTIF5_POS       					10
#define DMA_HISR_TCIF5_POS       					11

/* Stream 6 */

#define DMA_HISR_FEIF6_POS       					16
#define DMA_HISR_DMEIF6_POS      					18
#define DMA_HISR_TEIF6_POS       					19
#define DMA_HISR_HTIF6_POS       					20
#define DMA_HISR_TCIF6_POS       					21

/* Stream 7 */

#define DMA_HISR_FEIF7_POS       					22
#define DMA_HISR_DMEIF7_POS      					24
#define DMA_HISR_TEIF7_POS       					25
#define DMA_HISR_HTIF7_POS       					26
#define DMA_HISR_TCIF7_POS       					27

/* Stream 0 */

#define DMA_LIFCR_CFEIF0_POS        				0
#define DMA_LIFCR_CDMEIF0_POS       				2
#define DMA_LIFCR_CTEIF0_POS        				3
#define DMA_LIFCR_CHTIF0_POS        				4
#define DMA_LIFCR_CTCIF0_POS        				5

/* Stream 1 */

#define DMA_LIFCR_CFEIF1_POS        				6
#define DMA_LIFCR_CDMEIF1_POS       				8
#define DMA_LIFCR_CTEIF1_POS        				9
#define DMA_LIFCR_CHTIF1_POS       					10
#define DMA_LIFCR_CTCIF1_POS       					11

/* Stream 2 */

#define DMA_LIFCR_CFEIF2_POS       					16
#define DMA_LIFCR_CDMEIF2_POS      					18
#define DMA_LIFCR_CTEIF2_POS       					19
#define DMA_LIFCR_CHTIF2_POS       					20
#define DMA_LIFCR_CTCIF2_POS       					21

/* Stream 3 */

#define DMA_LIFCR_CFEIF3_POS       					22
#define DMA_LIFCR_CDMEIF3_POS      					24
#define DMA_LIFCR_CTEIF3_POS       					25
#define DMA_LIFCR_CHTIF3_POS       					26
#define DMA_LIFCR_CTCIF3_POS       					27


#define DMA_HIFCR_CFEIF4_POS        				0
#define DMA_HIFCR_CDMEIF4_POS       				2
#define DMA_HIFCR_CTEIF4_POS        				3
#define DMA_HIFCR_CHTIF4_POS        				4
#define DMA_HIFCR_CTCIF4_POS        				5

/* Stream 5 */

#define DMA_HIFCR_CFEIF5_POS        				6
#define DMA_HIFCR_CDMEIF5_POS       				8
#define DMA_HIFCR_CTEIF5_POS        				9
#define DMA_HIFCR_CHTIF5_POS       					10
#define DMA_HIFCR_CTCIF5_POS       					11

/* Stream 6 */

#define DMA_HIFCR_CFEIF6_POS       					16
#define DMA_HIFCR_CDMEIF6_POS      					18
#define DMA_HIFCR_CTEIF6_POS       					19
#define DMA_HIFCR_CHTIF6_POS       					20
#define DMA_HIFCR_CTCIF6_POS       					21

/* Stream 7 */

#define DMA_HIFCR_CFEIF7_POS       					22
#define DMA_HIFCR_CDMEIF7_POS      					24
#define DMA_HIFCR_CTEIF7_POS       					25
#define DMA_HIFCR_CHTIF7_POS       					26
#define DMA_HIFCR_CTCIF7_POS       					27


/*DMA_SxCR Register Bit Position Definitions*/
#define DMA_SxCR_EN_POS             				0
#define DMA_SxCR_DMEIE_POS          				1
#define DMA_SxCR_TEIE_POS           				2
#define DMA_SxCR_HTIE_POS           				3
#define DMA_SxCR_TCIE_POS           				4
#define DMA_SxCR_PFCTRL_POS         				5
#define DMA_SxCR_DIR_POS            				6
#define DMA_SxCR_CIRC_POS           				8
#define DMA_SxCR_PINC_POS           				9
#define DMA_SxCR_MINC_POS           				10
#define DMA_SxCR_PSIZE_POS          				11
#define DMA_SxCR_MSIZE_POS          				13
#define DMA_SxCR_PINCOS_POS         				15
#define DMA_SxCR_PL_POS             				16
#define DMA_SxCR_DBM_POS            				18
#define DMA_SxCR_CT_POS             				19
#define DMA_SxCR_PBURST_POS         				21
#define DMA_SxCR_MBURST_POS         				23
#define DMA_SxCR_CHSEL_POS          				25

/* INTERRUPT PRIORITY NUMBERS*/

#define IRQ_NO_EXTI0              					6
#define IRQ_NO_EXTI1              					7
#define IRQ_NO_EXTI2              					8
#define IRQ_NO_EXTI3              					9
#define IRQ_NO_EXTI4              					10
#define IRQ_NO_EXTI9_5            					23
#define IRQ_NO_EXTI15_10          					40



/*DMA_SxNDTR Register Bit Position Definitions*/
#define DMA_SxNDTR_NDT_POS          				0

/* DMA_SxPAR Register Bit Position Definitions */

#define DMA_SxPAR_PA_POS        					0

/*DMA_SxM0AR Register Bit Position Definitions */
#define DMA_SxM0AR_M0A_POS        					0

/*DMA_SxM1AR Register Bit Position Definitions*/

#define DMA_SxM1AR_M1A_POS      					0

/* DMA_SxFCR Register Bit Position Definitions*/

#define DMA_SxFCR_FTH_POS             				0
#define DMA_SxFCR_DMDIS_POS           				2
#define DMA_SxFCR_FS_POS              				3
#define DMA_SxFCR_FEIE_POS            				7

/*EXTI_IMR Register Bit Position Definitions
 *Enable/Disable Interrupt
 * */

#define EXTI_IMR_POS(line)      					(line)

/* EXTI_EMR Register Bit Position Definitions
 * Enable/Disable Event
 */

#define EXTI_EMR_POS(line)      					(line)

/*EXTI_RTSR Register Bit Positions
 * Rising Edge Trigger
 */
#define EXTI_RTSR(line)  							(line)

/*EXTI_FTSR Register Bit Position
 * Falling Edge Trigger
 */

#define EXTI_FTSR(line)  							(line)

/*EXTI_SWIER Register Bit Position
 * Software Generate Interrupt
 */

#define EXTI_SWIER(line)  							(line)

/* EXTI_PR Register Bit Position
 * Pending Register (Clear Interrupt Flag)
 */
#define EXTI_PR(line)  								(line)

/*ADC_SR Register Bit Position Definitions*/

#define ADC_SR_AWD_POS          						0
#define ADC_SR_EOC_POS          						1
#define ADC_SR_JEOC_POS         						2
#define ADC_SR_JSTRT_POS        						3
#define ADC_SR_STRT_POS         						4
#define ADC_SR_OVR_POS          						5

/*ADC_CR1 Register Bit Position Definitions*/

#define ADC_CR1_AWDCH_POS          						0
#define ADC_CR1_EOCIE_POS          						5
#define ADC_CR1_AWDIE_POS          						6
#define ADC_CR1_JEOCIE_POS         						7
#define ADC_CR1_SCAN_POS           						8
#define ADC_CR1_AWDSGL_POS         						9
#define ADC_CR1_JAUTO_POS         						10
#define ADC_CR1_DISCEN_POS         						11
#define ADC_CR1_JDISCEN_POS         					12
#define ADC_CR1_DISCNUM_POS         					13
#define ADC_CR1_JAWDEN_POS         						22
#define ADC_CR1_AWDEN_POS         						23
#define ADC_CR1_RES_POS         						24
#define ADC_CR1_OVRIE_POS         						26

/*ADC_CR2 Register Bit Position Definitions*/


#define ADC_CR2_ADON_POS          						0
#define ADC_CR2_CONT_POS          						1
#define ADC_CR2_DMA_POS          						8
#define ADC_CR2_DDS_POS         						9
#define ADC_CR2_EOCS_POS           						10
#define ADC_CR2_ALIGN_POS         						11
#define ADC_CR2_JEXTSEL_POS         					16
#define ADC_CR2_JEXTEN_POS         						20
#define ADC_CR2_JSWSTART_POS         					22
#define ADC_CR2_EXTSEL_POS         					    24
#define ADC_CR2_EXTEN_POS         						28
#define ADC_CR2_SWSTART_POS         					30

/*ADC_SMPR1 Register Bit Position Definitions*/


#define ADC_SMPR1_ADON_POS          						0
#define ADC_SMPR1_CONT_POS          						1
#define ADC_SMPR1_DMA_POS          							8
#define ADC_SMPR1_DDS_POS         							9
#define ADC_SMPR1_EOCS_POS           						10
#define ADC_SMPR1_ALIGN_POS         						11
#define ADC_SMPR1_JEXTSEL_POS         						16
#define ADC_SMPR1_JEXTEN_POS         						20
#define ADC_SMPR1_JSWSTART_POS         						22
#define ADC_SMPR1_EXTSEL_POS         					    24
#define ADC_SMPR1_EXTEN_POS         						28
#define ADC_SMPR1_SWSTART_POS         						30

/*ADC_SMPR1 Register Bit Position Definitions*/
#define ADC_SMPR1_SMP_POS(channel)      					(((channel) - 10) * 3)

/*ADC_SMPR1 Register Bit Position Definition*/

#define ADC_SMPR2_SMP_POS(channel)      					((channel) * 3)

/*ADC_JOFRx Register Bit Position Definitions*/

#define ADC_JOFR_JOFFSET_POS      							0

/*ADC_HTR Register Bit Position Definitions*/

#define ADC_HTR_HT_POS      								0

/*ADC_LTR Register Bit Position Definitions*/

#define ADC_LTR_LT_POS      								0

/*ADC_SQR1 Register Bit Position Definitions*/

#define ADC_SQR1_SQ_POS(sequence)    						(((sequence) - 13) * 5)
#define ADC_SQR1_L_POS             							20

/*ADC_SQR2 Register Bit Position Definitions*/

#define ADC_SQR2_SQ_POS(sequence)      						(((sequence) - 7) * 5)


/*ADC_SQR3 Register Bit Position Definitions*/
#define ADC_SQR3_SQ_POS(sequence)    						(((sequence) - 1) * 5)

/* ADC_JSQR Register Bit Position Definitions*/

#define ADC_JSQR_JSQ_POS(sequence)     						(((sequence)-1) * 5)
#define ADC_JSQR_JL_POS               						20

/*ADC_JDRx Register Bit Position Definitions*/

#define ADC_JDR_JDATA_POS        							0

/*ADC_DR Register Bit Position Definitions*/

#define ADC_DR_DATA_POS          							0

/*ADC_CCR Register Bit Position Definitions*/

#define ADC_CCR_ADCPRE_POS         							16
#define ADC_CCR_VBATE_POS          							22
#define ADC_CCR_TSVREFE_POS        							23

/*TIMx_CR1 Register Bit Position Definitions*/

#define TIM_CR1_CEN_POS             						0
#define TIM_CR1_UDIS_POS            						1
#define TIM_CR1_URS_POS             						2
#define TIM_CR1_OPM_POS             						3
#define TIM_CR1_DIR_POS             						4
#define TIM_CR1_CMS_POS             						5
#define TIM_CR1_ARPE_POS            						7
#define TIM_CR1_CKD_POS             						8

/*TIMx_CR2 Register Bit Position Definitions*/

#define TIM_CR2_CCPC_POS              						0
#define TIM_CR2_CCUS_POS              						2
#define TIM_CR2_CCDS_POS              						3
#define TIM_CR2_MMS_POS               						4
#define TIM_CR2_TI1S_POS              						7
#define TIM_CR2_OIS1_POS              						8
#define TIM_CR2_OIS1N_POS             						9
#define TIM_CR2_OIS2_POS             						10
#define TIM_CR2_OIS2N_POS            						11
#define TIM_CR2_OIS3_POS             						12
#define TIM_CR2_OIS3N_POS            						13
#define TIM_CR2_OIS4_POS             						14

/*TIMx_SMCR Register Bit Position Definitions*/


#define TIM_SMCR_SMS_POS             						0
#define TIM_SMCR_TS_POS              						4
#define TIM_SMCR_MSM_POS             						7
#define TIM_SMCR_ETF_POS             						8
#define TIM_SMCR_ETPS_POS            						12
#define TIM_SMCR_ECE_POS             						14
#define TIM_SMCR_ETP_POS             						15

/*TIMx_DIER Register Bit Position Definitions*/

#define TIM_DIER_UIE_POS            						0
#define TIM_DIER_CC1IE_POS          						1
#define TIM_DIER_CC2IE_POS          						2
#define TIM_DIER_CC3IE_POS          						3
#define TIM_DIER_CC4IE_POS          						4
#define TIM_DIER_COMIE_POS          						5
#define TIM_DIER_TIE_POS            						6
#define TIM_DIER_BIE_POS            						7
#define TIM_DIER_UDE_POS            						8
#define TIM_DIER_CC1DE_POS          						9
#define TIM_DIER_CC2DE_POS          						10
#define TIM_DIER_CC3DE_POS          						11
#define TIM_DIER_CC4DE_POS          						12
#define TIM_DIER_COMDE_POS          						13
#define TIM_DIER_TDE_POS            						14

/*TIMx_SR Register Bit Position Definitions*/

#define TIM_SR_UIF_POS              						0
#define TIM_SR_CC1IF_POS            						1
#define TIM_SR_CC2IF_POS            						2
#define TIM_SR_CC3IF_POS            						3
#define TIM_SR_CC4IF_POS            						4
#define TIM_SR_COMIF_POS            						5
#define TIM_SR_TIF_POS              						6
#define TIM_SR_BIF_POS              						7
#define TIM_SR_CC1OF_POS            						9
#define TIM_SR_CC2OF_POS            						10
#define TIM_SR_CC3OF_POS            						11
#define TIM_SR_CC4OF_POS            						12

/*TIMx_EGR Register Bit Position Definitions*/

#define TIM_EGR_UG_POS             							0
#define TIM_EGR_CC1G_POS           							1
#define TIM_EGR_CC2G_POS           							2
#define TIM_EGR_CC3G_POS           							3
#define TIM_EGR_CC4G_POS           							4
#define TIM_EGR_COMG_POS           							5
#define TIM_EGR_TG_POS             							6
#define TIM_EGR_BG_POS             							7

/*TIMx_CCMR1 Register Bit Position Definitions*/

#define TIM_CCMR1_CC1S_POS           						0
#define TIM_CCMR1_OC1FE_POS          						2
#define TIM_CCMR1_OC1PE_POS          						3
#define TIM_CCMR1_OC1M_POS           						4
#define TIM_CCMR1_OC1CE_POS          						7
#define TIM_CCMR1_CC2S_POS           						8
#define TIM_CCMR1_OC2FE_POS          						10
#define TIM_CCMR1_OC2PE_POS          						11
#define TIM_CCMR1_OC2M_POS           						12
#define TIM_CCMR1_OC2CE_POS          						15

/*TIMx_CCMR2 Register Bit Position Definitions*/

#define TIM_CCMR2_CC3S_POS           						0
#define TIM_CCMR2_OC3FE_POS          						2
#define TIM_CCMR2_OC3PE_POS          						3
#define TIM_CCMR2_OC3M_POS           						4
#define TIM_CCMR2_OC3CE_POS          						7
#define TIM_CCMR2_CC4S_POS           						8
#define TIM_CCMR2_OC4FE_POS          						10
#define TIM_CCMR2_OC4PE_POS          						11
#define TIM_CCMR2_OC4M_POS           						12
#define TIM_CCMR2_OC4CE_POS          						15

/*TIMx_CCER Register Bit Position Definitions*/

#define TIM_CCER_CC1E_POS            						0
#define TIM_CCER_CC1P_POS            						1
#define TIM_CCER_CC1NE_POS           						2
#define TIM_CCER_CC1NP_POS           						3
#define TIM_CCER_CC2E_POS            						4
#define TIM_CCER_CC2P_POS            						5
#define TIM_CCER_CC2NE_POS           						6
#define TIM_CCER_CC2NP_POS           						7
#define TIM_CCER_CC3E_POS            						8
#define TIM_CCER_CC3P_POS            						9
#define TIM_CCER_CC3NE_POS           						10
#define TIM_CCER_CC3NP_POS           						11
#define TIM_CCER_CC4E_POS            						12
#define TIM_CCER_CC4P_POS            						13

/*TIMx_CNT Register Bit Position Definitions*/

#define TIM_CNT_CNT_POS            							0

/*TIMx_PSC Register Bit Position Definitions*/

#define TIM_PSC_PSC_POS            							0


/*TIMx_ARR Register Bit Position Definitions*/

#define TIM_ARR_ARR_POS            							0


/*TIMx_RCR Register Bit Position Definitions*/

#define TIM_RCR_REP_POS            							0


/*TIMx_CCR1 Register Bit Position Definitions*/

#define TIM_CCR1_CCR1_POS            						0


/*TIMx_CCR2 Register Bit Position Definitions*/

#define TIM_CCR2_CCR2_POS            						0


/*TIMx_CCR3 Register Bit Position Definitions*/

#define TIM_CCR3_CCR3_POS            						0


/*TIMx_CCR4 Register Bit Position Definitions*/

#define TIM_CCR4_CCR4_POS            						0


/*TIMx_BDTR Register Bit Position Definitions*/


#define TIM_BDTR_DTG_POS             						0
#define TIM_BDTR_LOCK_POS            						8
#define TIM_BDTR_OSSI_POS            						10
#define TIM_BDTR_OSSR_POS            						11
#define TIM_BDTR_BKE_POS             						12
#define TIM_BDTR_BKP_POS             						13
#define TIM_BDTR_AOE_POS             						14
#define TIM_BDTR_MOE_POS             						15

/*TIMx_DCR Register Bit Position Definitions*/

#define TIM_DCR_DBA_POS              						0
#define TIM_DCR_DBL_POS              						8

/*TIMx_DMAR Register Bit Position Definitions*/

#define TIM_DMAR_DMAB_POS              						0

/*
 * TIM2 - TIM5 Registers
 */

/* TIM_CR1 Register Bit Positions*/


#define TIM_CR1_CEN_POS             						0
#define TIM_CR1_UDIS_POS            						1
#define TIM_CR1_URS_POS             						2
#define TIM_CR1_OPM_POS             						3
#define TIM_CR1_DIR_POS             						4
#define TIM_CR1_CMS_POS             						5
#define TIM_CR1_ARPE_POS            						7
#define TIM_CR1_CKD_POS             						8


/* TIM_CR2 Register Bit Positions*/
#define TIM_CR2_CCDS_POS        							3
#define TIM_CR2_MMS_POS           							4
#define TIM_CR2_TI1S_POS          							7

/* TIM_SMCR Register Bit Positions*/


#define TIM_SMCR_SMS_POS        							0
#define TIM_SMCR_TS_POS           							4
#define TIM_SMCR_MSM_POS          							7
#define TIM_SMCR_ETF_POS        							8
#define TIM_SMCR_ETPS_POS           						12
#define TIM_SMCR_ECE_POS          							14
#define TIM_SMCR_ETP_POS          							15

/* TIM_DIER Register Bit Positions*/


#define TIM_DIER_UIE_POS        							0
#define TIM_DIER_CC1IE_POS           						1
#define TIM_DIER_CC2IE_POS          						2
#define TIM_DIER_CC3IE_POS        							3
#define TIM_DIER_CC4IE_POS           						4
#define TIM_DIER_TIE_POS          							6
#define TIM_DIER_UDE_POS          							8
#define TIM_DIER_CC1DE_POS        							9
#define TIM_DIER_CC2DE_POS           						10
#define TIM_DIER_CC3DE_POS          						11
#define TIM_DIER_CC4DE_POS        							12
#define TIM_DIER_TDE_POS           						    14

/* TIM_SR Registers Bit Positions*/


#define TIM_SR_UIF_POS        								0
#define TIM_SR_CC1IF_POS           						    1
#define TIM_SR_CC2IF_POS          						    2
#define TIM_SR_CC3IF_POS        							3
#define TIM_SR_CC4IF_POS           							4
#define TIM_SR_TIF_POS          							6
#define TIM_SR_CC1OF_POS          							9
#define TIM_SR_CC2OF_POS        							10
#define TIM_SR_CC3OF_POS           						    11
#define TIM_SR_CC4OF_POS          						    12

/* TIM_EGR Registers Bit Positions */


#define TIM_EGR_UG_POS        								0
#define TIM_EGR_CC1G_POS           						    1
#define TIM_EGR_CC2G_POS          						    2
#define TIM_EGR_CC3G_POS        							3
#define TIM_EGR_CC4G_POS           							4
#define TIM_EGR_TG_POS          							6


/* TIM_CCMR1 Registers Bit Positions*/


#define TIM_CCMR1_CC1S_POS        							0
#define TIM_CCMR1_CC2S_POS        							8

/* OUTPUT COMPARE MODE*/
#define TIM_CCMR1_OC1FE_POS        							2
#define TIM_CCMR1_OC1PE_POS        							3
#define TIM_CCMR1_OC1M_POS        							4
#define TIM_CCMR1_OC1CE_POS        							7
#define TIM_CCMR1_OC2FE_POS        							10
#define TIM_CCMR1_OC2PE_POS        							11
#define TIM_CCMR1_OC2M_POS        							12
#define TIM_CCMR1_OC2CE_POS        							15

/* INPUT COMPARE MODE*/

#define TIM_CCMR1_IC1PSC_POS        						2
#define TIM_CCMR1_IC1F_POS        						    4
#define TIM_CCMR1_IC2PSC_POS        						10
#define TIM_CCMR1_IC2F_POS        						    12

/*TIM_CCMR2 Registers Bit Positions*/

#define TIM_CCMR2_CC3S_POS        							0
#define TIM_CCMR2_CC4S_POS        							8

/* OUTPUT COMPARE MODE*/
#define TIM_CCMR2_OC3FE_POS        							2
#define TIM_CCMR2_OC3PE_POS        							3
#define TIM_CCMR2_OC3M_POS        							4
#define TIM_CCMR2_OC3CE_POS        							7
#define TIM_CCMR2_OC4FE_POS        							10
#define TIM_CCMR2_OC4PE_POS        							11
#define TIM_CCMR2_OC4M_POS        							12
#define TIM_CCMR2_OC4CE_POS        							15

/* INPUT COMPARE MODE*/

#define TIM_CCMR2_IC3PSC_POS        						2
#define TIM_CCMR2_IC3F_POS        						    4
#define TIM_CCMR2_IC4PSC_POS        						10
#define TIM_CCMR2_IC4F_POS        						    12

/* TIM_CCER Register Bit Positions*/



#define TIM_CCER_CC1E_POS        						    0
#define TIM_CCER_CC1P_POS        						    1
#define TIM_CCER_CC1NP_POS        						    3
#define TIM_CCER_CC2E_POS        						    4
#define TIM_CCER_CC2P_POS        						    5
#define TIM_CCER_CC2NP_POS        						    7
#define TIM_CCER_CC3E_POS        						    8
#define TIM_CCER_CC3P_POS        						    9
#define TIM_CCER_CC3NP_POS        						    11
#define TIM_CCER_CC4E_POS        						    12
#define TIM_CCER_CC4P_POS        						    13
#define TIM_CCER_CC4NP_POS        						    15

/* TIM2/TIM5 CNT Register Bit Position Definitions*/

#define TIM_CNT_CNT_POS                 					0

/* TIMx_PSC Register Bit Position Definitions */

#define TIM_PSC_PSC_POS             						0

/* TIM2/TIM5 ARR Register Bit Position Definitions*/

#define TIM_ARR_ARR_POS          							0

/*TIMx_CCR1 Register Bit Position Definitions*/

#define TIM_CCR1_CCR1_POS            						0

/*TIMx_CCR2 Register Bit Position Definitions*/

#define TIM_CCR2_CCR2_POS          							0

/*TIMx_CCR3 Register Bit Position Definitions*/

#define TIM_CCR3_CCR3_POS          							0

/*TIMx_CCR4 Register Bit Position Definitions*/

#define TIM_CCR4_CCR4_POS          							0


/*TIMx_DCR Register Bit Position Definitions*/

#define TIM_DCR_DBA_POS                 					0
#define TIM_DCR_DBL_POS                 					8

/*TIMx_DMAR Register Bit Position Definitions*/

#define TIM_DMAR_DMAB_POS          							0

/* TIM2_OR Register Bit Position Definitions*/


#define TIM2_OR_ITR1_RMP_POS        						10

/* TIM5_OR Register Bit Position Definitions*/

#define TIM5_OR_TI4_RMP_POS        							6

/*TIM9_CR1 Register Bit Position Definitions*/


#define TIM9_CR1_CEN_POS             						0
#define TIM9_CR1_UDIS_POS            						1
#define TIM9_CR1_URS_POS             						2
#define TIM9_CR1_OPM_POS             						3
#define TIM9_CR1_ARPE_POS            						7
#define TIM9_CR1_CKD_POS             						8

/* TIM9_SMCR Register Bit Position Definitions*/

#define TIM9_SMCR_SMS_POS          							0
#define TIM9_SMCR_TS_POS           							4
#define TIM9_SMCR_MSM_POS          							7


/* TIM9_DIER Register Bit Position Definitions*/

#define TIM9_DIER_UIE_POS          							0
#define TIM9_DIER_CC1E_POS           						1
#define TIM9_DIER_CC2IE_POS          						2
#define TIM9_DIER_TIE_POS          							6


/* TIM9_SR Register Bit Position Definitions*/

#define TIM9_SR_UIF_POS          							0
#define TIM9_SR_CC1F_POS           							1
#define TIM9_SR_CC2IF_POS          							2
#define TIM9_SR_TIF_POS          							6
#define TIM9_SR_CC1OF_POS          							9
#define TIM9_SR_CC2OF_POS          							10

/* TIM9_EGR Register Bit Position Definitions*/

#define TIM9_EGR_UG_POS          							0
#define TIM9_EGR_CC1G_POS           						1
#define TIM9_EGR_CC2IG_POS          						2
#define TIM9_EGR_TG_POS          							6


/* TIM9_CCMR1 Registers Bit Positions*/


#define TIM9_CCMR1_CC1S_POS        							0
#define TIM9_CCMR1_CC2S_POS        							8

/* OUTPUT COMPARE MODE*/
#define TIM9_CCMR1_OC1FE_POS        						2
#define TIM9_CCMR1_OC1PE_POS        						3
#define TIM9_CCMR1_OC1M_POS        							4
#define TIM9_CCMR1_OC2FE_POS        						10
#define TIM9_CCMR1_OC2PE_POS        						11
#define TIM9_CCMR1_OC2M_POS        							12

/* INPUT COMPARE MODE*/

#define TIM9_CCMR1_IC1PSC_POS        						2
#define TIM9_CCMR1_IC1F_POS        						    4
#define TIM9_CCMR1_IC2PSC_POS        						10
#define TIM9_CCMR1_IC2F_POS        						    12


/* TIM9_CCER Register Bit Positions*/



#define TIM9_CCER_CC1E_POS        						    0
#define TIM9_CCER_CC1P_POS        						    1
#define TIM9_CCER_CC1NP_POS        						    3
#define TIM9_CCER_CC2E_POS        						    4
#define TIM9_CCER_CC2P_POS        						    5
#define TIM9_CCER_CC2NP_POS        						    7


/* TIM9_CNT Register Bit Position Definitions*/

#define TIM9_CNT_CNT_POS                 					0

/* TIM9x_PSC Register Bit Position Definitions */

#define TIM9_PSC_PSC_POS             						0

/* TIM9_ARR Register Bit Position Definitions*/

#define TIM9_ARR_ARR_POS          							0

/*TIM9x_CCR1 Register Bit Position Definitions*/

#define TIM9_CCR1_CCR1_POS            						0

/*TIM9x_CCR2 Register Bit Position Definitions*/

#define TIM9_CCR2_CCR2_POS          						0



/*TIM10/11_CR1 Register Bit Position Definitions*/


#define TIMGEN_CR1_CEN_POS             						0
#define TIMGEN_CR1_UDIS_POS            						1
#define TIMGEN_CR1_URS_POS             						2
#define TIMGEN_CR1_OPM_POS             						3
#define TIMGEN_CR1_ARPE_POS            						7
#define TIMGEN_CR1_CKD_POS             						8



/* TIM10/11_DIER Register Bit Position Definitions*/

#define TIMGEN_DIER_UIE_POS          							0
#define TIMGEN_DIER_CC1E_POS           						    1


/* TIM10/11_SR Register Bit Position Definitions*/

#define TIMGEN_SR_UIF_POS          							    0
#define TIMGEN_SR_CC1F_POS           							1
#define TIMGEN_SR_CC1OF_POS          							9


/* TIM10/11_EGR Register Bit Position Definitions*/

#define TIMGEN_EGR_UG_POS          							0
#define TIMGEN_EGR_CC1G_POS           						1


/* TIM10/11_CCMR1 Registers Bit Positions*/


#define TIMGEN_CCMR1_CC1S_POS        							0

/* OUTPUT COMPARE MODE*/
#define TIMGEN_CCMR1_OC1FE_POS        							2
#define TIMGEN_CCMR1_OC1PE_POS        							3
#define TIMGEN_CCMR1_OC1M_POS        							4


/* INPUT COMPARE MODE*/

#define TIMGEN_CCMR1_IC1PSC_POS        							2
#define TIMGEN_CCMR1_IC1F_POS        						    4


/* TIM10/11_CCER Register Bit Positions*/

#define TIMGEN_CCER_CC1E_POS        						    0
#define TIMGEN_CCER_CC1P_POS        						    1
#define TIMGEN_CCER_CC1NP_POS        						    3


/* TIM10/11_CNT Register Bit Position Definitions*/

#define TIMGEN_CNT_CNT_POS                 						0

/* TIM10/11x_PSC Register Bit Position Definitions */

#define TIMGEN_PSC_PSC_POS             							0

/* TIM10/11_ARR Register Bit Position Definitions*/

#define TIMGEN_ARR_ARR_POS          							0

/*TIM10/11x_CCR1 Register Bit Position Definitions*/

#define TIMGEN_CCR1_CCR1_POS            						0

/*TIM10/11x_OR Register Bit Position Definitions*/

#define TIMGEN_OR_TI1_RMP_POS            						0


/* IWDG REGISYERS*/

/* IWDG_KR Register Bit Position Definitions*/

#define IWDG_KR_KEY_POS            								0

/* IWDG_PR Register Bit Position Definitions*/

#define IWDG_PR_PR_POS            								0


/* IWDG_RLR Register Bit Position Definitions*/

#define IWDG_RLR_RL_POS            								0


/* IWDG_SR Register Bit Position Definitions*/

#define IWDG_SR_PVU_POS            								0
#define IWDG_SR_RVU_POS            								1

/*WWDG REGISTERS*/

/* WWDG_CR Register Bit Position Definitions*/

#define WWDG_CR_T_POS            								0
#define WWDG_CR_WDGA_POS          								7

/* WWDG_CFR Register Bit Position Definitions*/

#define WWDG_CFR_W_POS            								0
#define WWDG_CFR_WDGTB_POS          							7
#define WWDG_CFR_EWI_POS            							9

/* WWDG_SR Register Bit Position Definitions*/

#define WWDG_SR_EWIF_POS            							0

/*RTC REGISTERS*/

/*RTC_TR Register Bit Position Definitions*/

#define RTC_TR_SU_POS              								0
#define RTC_TR_ST_POS              								4
#define RTC_TR_MNU_POS             								8
#define RTC_TR_MNT_POS             								12
#define RTC_TR_HU_POS              								16
#define RTC_TR_HT_POS              								20
#define RTC_TR_PM_POS              								22

/*RTC_DR Register Bit Position Definitions*/


#define RTC_DR_DU_POS             								0
#define RTC_DR_DT_POS             								4
#define RTC_DR_MU_POS             								8
#define RTC_DR_MT_POS             								12
#define RTC_DR_WDU_POS            								13
#define RTC_DR_YU_POS             								16
#define RTC_DR_YT_POS             								20

/*RTC_CR Register Bit Position Definitions*/


#define RTC_CR_WUCKSEL_POS          							0
#define RTC_CR_TSEDGE_POS           							3
#define RTC_CR_REFCKON_POS          							4
#define RTC_CR_BYPSHAD_POS          							5
#define RTC_CR_FMT_POS              							6
#define RTC_CR_DCE_POS              							7
#define RTC_CR_ALRAE_POS            							8
#define RTC_CR_ALRBE_POS            							9
#define RTC_CR_WUTE_POS             							10
#define RTC_CR_TSE_POS              							11
#define RTC_CR_ALRAIE_POS           							12
#define RTC_CR_ALRBIE_POS           							13
#define RTC_CR_WUTIE_POS            							14
#define RTC_CR_TSIE_POS             							15
#define RTC_CR_ADD1H_POS            							16
#define RTC_CR_SUB1H_POS            							17
#define RTC_CR_BKP_POS              							18
#define RTC_CR_COSEL_POS            							19
#define RTC_CR_POL_POS              							20
#define RTC_CR_OSEL_POS             							21
#define RTC_CR_COE_POS              							23

/*RTC_ISR Register Bit Position Definitions*/

#define RTC_ISR_ALRAWF_POS          							0
#define RTC_ISR_ALRBWF_POS          							1
#define RTC_ISR_WUTWF_POS           							2
#define RTC_ISR_SHPF_POS            							3
#define RTC_ISR_INITS_POS           							4
#define RTC_ISR_RSF_POS             							5
#define RTC_ISR_INITF_POS           							6
#define RTC_ISR_INIT_POS            							7
#define RTC_ISR_ALRAF_POS           							8
#define RTC_ISR_ALRBF_POS           							9
#define RTC_ISR_WUTF_POS            							10
#define RTC_ISR_TSF_POS             							11
#define RTC_ISR_TSOVF_POS           							12
#define RTC_ISR_TAMP1F_POS          							13
#define RTC_ISR_RECALPF_POS         							16

/* RTC_PRER Register Bit Position Definitions*/

#define RTC_PRER_PREDIV_S_POS            						0
#define RTC_PRER_PREDIV_A_POS            						16


/* RTC_WUTR Register Bit Position Definitions*/

#define RTC_WUTR_WUT_POS            							0


/* RTC_CALIBR Register Bit Position Definitions*/

#define RTC_CALIBR_DC_POS            						     0
#define RTC_CALIBR_DCS_POS            						     7

/* RTC_ALRMAR Register Bit Position Definitions*/



#define RTC_ALRMAR_SU_POS              							0
#define RTC_ALRMAR_ST_POS              							4
#define RTC_ALRMAR_MSK1_POS            							7
#define RTC_ALRMAR_MNU_POS             							8
#define RTC_ALRMAR_MNT_POS             							12
#define RTC_ALRMAR_MSK2_POS            							15
#define RTC_ALRMAR_HU_POS              							16
#define RTC_ALRMAR_HT_POS              							20
#define RTC_ALRMAR_PM_POS              							22
#define RTC_ALRMAR_MSK3_POS            							23
#define RTC_ALRMAR_DU_POS              							24
#define RTC_ALRMAR_DT_POS              							28
#define RTC_ALRMAR_WDSEL_POS           							30
#define RTC_ALRMAR_MSK4_POS            							31


/* RTC_WPR Register Bit Position Definitions*/

#define RTC_WPR_KEY_POS            								0

/* RTC_SSR Register Bit Position Definitions*/

#define RTC_SSR_SS_POS            								0

/* RTC_SHIFTR Register Bit Position Definitions*/

#define RTC_SHIFTR_SUBFS_POS            						0
#define RTC_SHIFTR_ADDIS_POS            						31

/* RTC_TSTR Register Bit Position Definitions*/

#define RTC_TSTR_SU_POS            								0
#define RTC_TSTR_ST_POS            								4
#define RTC_TSTR_MNU_POS            							8
#define RTC_TSTR_MNT_POS            							12
#define RTC_TSTR_HU_POS            								16
#define RTC_TSTR_HT_POS            								20
#define RTC_TSTR_PM_POS            								22

/*RTC_TSDR Register Bit Position Definitions*/



#define RTC_TSDR_DU_POS             							0
#define RTC_TSDR_DT_POS             							4
#define RTC_TSDR_MU_POS             							8
#define RTC_TSDR_MT_POS             							12
#define RTC_TSDR_WDU_POS            							13

/* RTC_TSSSR Register Bit Position Definitions*/

#define RTC_TSSSR_SS_POS   										0

/* RTC_CALR Register Bit Position Definitions*/

#define RTC_CALR_CALM_POS   									0
#define RTC_CALR_CALW16_POS   									13
#define RTC_CALR_CALW8_POS   									14
#define RTC_CALR_CALP_POS   									15

/*RTC_TAFCR Register Bit Position Definitions*/


#define RTC_TAFCR_TAMP1E_POS            						0
#define RTC_TAFCR_TAMP1TRG_POS          						1
#define RTC_TAFCR_TAMPIE_POS            						2
#define RTC_TAFCR_TAMPTS_POS            						7
#define RTC_TAFCR_TAMPFREQ_POS          						8
#define RTC_TAFCR_TAMPFLT_POS           						11
#define RTC_TAFCR_TAMPPRCH_POS          						13
#define RTC_TAFCR_TAMPPUDIS_POS         						15
#define RTC_TAFCR_TAMP1INSEL_POS        						16
#define RTC_TAFCR_TSINSEL_POS           						17
#define RTC_TAFCR_ALARMOUTTYPE_POS      						18

/*RTCA_ALRMASSR Register Bit Position Definitions*/

#define RTC_A_ALRMASSR_SS_POS             							0
#define RTC_A_ALRMASSR_MASKSS_POS         							24

/*RTCB_ALRMBSSR Register Bit Position Definitions*/

#define RTC_B_ALRMASSR_SS_POS             							0
#define RTC_B_ALRMASSR_MASKSS_POS         							24

/*RTCB_BKPxR Register Bit Position Definitions*/

#define RTC_BKPxR_BKP_POS             								0

/*I2C REGISTERS*/

/*I2C_CR1 Register Bit Position Definitions*/

#define I2C_CR1_PE_POS                 								0
#define I2C_CR1_SMBUS_POS              								1
#define I2C_CR1_SMBTYPE_POS            								3
#define I2C_CR1_ENARP_POS              								4
#define I2C_CR1_ENPEC_POS              								5
#define I2C_CR1_ENGC_POS               								6
#define I2C_CR1_NOSTRETCH_POS          								7
#define I2C_CR1_START_POS              								8
#define I2C_CR1_STOP_POS               								9
#define I2C_CR1_ACK_POS                								10
#define I2C_CR1_POS_POS                								11
#define I2C_CR1_PEC_POS                								12
#define I2C_CR1_ALERT_POS              								13
#define I2C_CR1_SWRST_POS              								15

/*I2C_CR2 Register Bit Position Definitions*/

#define I2C_CR2_FREQ_POS             								0
#define I2C_CR2_ITERREN_POS          								8
#define I2C_CR2_ITEVTEN_POS          								9
#define I2C_CR2_ITBUFEN_POS          								10
#define I2C_CR2_DMAEN_POS            								11
#define I2C_CR2_LAST_POS             								12

/*I2C_OAR1 Register Bit Position Definitions*/

#define I2C_OAR1_ADD_POS             								0
#define I2C_OAR1_ADDMODE_POS         								15

/*I2C_OAR2 Register Bit Position Definitions*/

#define I2C_OAR2_ENDUAL_POS             							0
#define I2C_OAR2_ADD_POS         								    1

/*I2C_DR Register Bit Position Definitions*/

#define I2C_DR_DR_POS             							        0

/*I2C_SR1 Register Bit Position Definitions*/

#define I2C_SR1_SB_POS                 								0
#define I2C_SR1_ADDR_POS               								1
#define I2C_SR1_BTF_POS                								2
#define I2C_SR1_ADD10_POS              								3
#define I2C_SR1_STOPF_POS              								4
#define I2C_SR1_RXNE_POS               								6
#define I2C_SR1_TXE_POS               		 						7
#define I2C_SR1_BERR_POS               								8
#define I2C_SR1_ARLO_POS               								9
#define I2C_SR1_AF_POS                 								10
#define I2C_SR1_OVR_POS                								11
#define I2C_SR1_PECERR_POS             								12
#define I2C_SR1_TIMEOUT_POS            								14
#define I2C_SR1_SMBALERT_POS           								15

/*I2C_SR2 Register Bit Position Definitions*/

#define I2C_SR2_MSL_POS                								0
#define I2C_SR2_BUSY_POS               								1
#define I2C_SR2_TRA_POS                								2
#define I2C_SR2_GENCALL_POS            								4
#define I2C_SR2_SMBDEFAULT_POS         								5
#define I2C_SR2_SMBHOST_POS            								6
#define I2C_SR2_DUALF_POS              								7
#define I2C_SR2_PEC_POS                								8

/*I2C_CCR Register Bit Position Definitions*/

#define I2C_CCR_CCR_POS             								0
#define I2C_CCR_DUTY_POS            								14
#define I2C_CCR_FS_POS              								15

/*I2C_TRISE Register Bit Position Definitions*/


#define I2C_TRISE_TRISE_POS             							0

/*I2C_FLTR Register Bit Position Definitions*/


#define I2C_FLTR_DNF_POS             							    0
#define I2C_FLTR_ANOFF_POS             							    4

/*UART Registers*/

/*USART_SR Register Bit Position Definitions*/

#define USART_SR_PE_POS                 							0
#define USART_SR_FE_POS                 							1
#define USART_SR_NF_POS                 							2
#define USART_SR_ORE_POS                							3
#define USART_SR_IDLE_POS               							4
#define USART_SR_RXNE_POS               							5
#define USART_SR_TC_POS                 							6
#define USART_SR_TXE_POS                							7
#define USART_SR_LBD_POS                							8
#define USART_SR_CTS_POS                							9

/*USART_DR Register Bit Position Definitions*/


#define USART_DR_DR_POS             							    0


/*USART_BRR Register Bit Position Definitions*/


#define USART_BRR_DIV_FRAC_POS             							0
#define USART_BRR_DIV_MANT_POS             							4


/*USART_CR1 Register Bit Position Definitions*/



#define USART_CR1_SBK_POS             								0
#define USART_CR1_RWU_POS             								1
#define USART_CR1_RE_POS              								2
#define USART_CR1_TE_POS              								3
#define USART_CR1_IDLEIE_POS          								4
#define USART_CR1_RXNEIE_POS          								5
#define USART_CR1_TCIE_POS            								6
#define USART_CR1_TXEIE_POS           								7
#define USART_CR1_PEIE_POS            								8
#define USART_CR1_PS_POS              								9
#define USART_CR1_PCE_POS             								10
#define USART_CR1_WAKE_POS            								11
#define USART_CR1_M_POS               								12
#define USART_CR1_UE_POS              								13
#define USART_CR1_OVER8_POS           								15

/*USART_CR2 Register Bit Position Definitions*/

#define USART_CR2_ADD_POS             								0
#define USART_CR2_LBDL_POS            								5
#define USART_CR2_LBDIE_POS           								6
#define USART_CR2_LBCL_POS            								8
#define USART_CR2_CPHA_POS            								9
#define USART_CR2_CPOL_POS            								10
#define USART_CR2_CLKEN_POS           								11
#define USART_CR2_STOP_POS            								12
#define USART_CR2_LINEN_POS           								14

/*USART_CR3 Register Bit Position Definitions*/



#define USART_CR3_EIE_POS             								0
#define USART_CR3_IREN_POS            								1
#define USART_CR3_IRLP_POS            								2
#define USART_CR3_HDSEL_POS           								3
#define USART_CR3_NACK_POS            								4
#define USART_CR3_SCEN_POS            								5
#define USART_CR3_DMAR_POS            								6
#define USART_CR3_DMAT_POS            								7
#define USART_CR3_RTSE_POS            								8
#define USART_CR3_CTSE_POS            								9
#define USART_CR3_CTSIE_POS           								10
#define USART_CR3_ONEBIT_POS          								11

/*USART_GTPR Register Bit Position Definitions*/



#define USART_GTPR_PSC_POS              							0
#define USART_GTPR_GT_POS               							8

/*SPI AND I2S REGISTERS*/

/*SPI_CR1 Register Bit Position Definitions*/

#define SPI_CR1_CPHA_POS             							0
#define SPI_CR1_CPOL_POS             							1
#define SPI_CR1_MSTR_POS             							2
#define SPI_CR1_BR_POS               							3
#define SPI_CR1_SPE_POS              							6
#define SPI_CR1_LSBFIRST_POS         							7
#define SPI_CR1_SSI_POS              							8
#define SPI_CR1_SSM_POS              							9
#define SPI_CR1_RXONLY_POS           							10
#define SPI_CR1_DFF_POS              							11
#define SPI_CR1_CRCNEXT_POS          							12
#define SPI_CR1_CRCEN_POS            							13
#define SPI_CR1_BIDIOE_POS           							14
#define SPI_CR1_BIDIMODE_POS         							15


/*SPI_CR2 Register Bit Position Definitions*/


#define SPI_CR2_RXDMAEN_POS          							0
#define SPI_CR2_TXDMAEN_POS          							1
#define SPI_CR2_SSOE_POS             							2
#define SPI_CR2_FRF_POS              							4
#define SPI_CR2_ERRIE_POS            							5
#define SPI_CR2_RXNEIE_POS           							6
#define SPI_CR2_TXEIE_POS            							7

/*SPI_DR Register Bit Position Definitions*/

#define SPI_DR_DR_POS                 							0


/*SPI_CRCPR Register Bit Position Definitions*/

#define SPI_CRCPR_CRCPOLY_POS                 					0

/*SPI_RXCRCR Register Bit Position Definitions*/

#define SPI_RXCRCR_RXCRC_POS                 					0

/*SPI_TXCRCR Register Bit Position Definitions*/

#define SPI_TXCRCR_TXCRC_POS                 					0


/*SPI_I2SCFGR Register Bit Position Definitions*/



#define SPI_I2SCFGR_CHLEN_POS          							0
#define SPI_I2SCFGR_DATLEN_POS         							1
#define SPI_I2SCFGR_CKPOL_POS          							3
#define SPI_I2SCFGR_I2SSTD_POS         							4
#define SPI_I2SCFGR_PCMSYNC_POS        							7
#define SPI_I2SCFGR_I2SCFG_POS         							8
#define SPI_I2SCFGR_I2SE_POS           							10
#define SPI_I2SCFGR_I2SMOD_POS         							11


/*SPI_I2SPR Register Bit Position Definitions*/



#define SPI_I2SPR_I2SDIV_POS           							0
#define SPI_I2SPR_ODD_POS              							8
#define SPI_I2SPR_MCKOE_POS            							9

/*
 * SDIO REGISTERS
 */

/*SDIO_POWER Register Bit Position Definitions*/

#define SDIO_POWER_PWRCTRL_POS									0

/*SDIO_CLKCR Register Bit Position Definitions*/


#define SDIO_CLKCR_CLKDIV_POS           						0
#define SDIO_CLKCR_CLKEN_POS            						8
#define SDIO_CLKCR_PWRSAV_POS           						9
#define SDIO_CLKCR_BYPASS_POS           						10
#define SDIO_CLKCR_WIDBUS_POS           						11
#define SDIO_CLKCR_NEGEDGE_POS          						13
#define SDIO_CLKCR_HWFC_EN_POS          						14

/*SDIO_ARG Register Bit Position Definitions*/

#define SDIO_ARG_CMDARG_POS              						0

/*SDIO_CMD Register Bit Position Definitions*/


#define SDIO_CMD_CMDINDEX_POS          							0
#define SDIO_CMD_WAITRESP_POS          							6
#define SDIO_CMD_WAITINT_POS           							8
#define SDIO_CMD_WAITPEND_POS          							9
#define SDIO_CMD_CPSMEN_POS            							10
#define SDIO_CMD_SDIOSUSPEND_POS       							11
#define SDIO_CMD_ENCMDCOMPL_POS        							12
#define SDIO_CMD_NIEN_POS              							13
#define SDIO_CMD_CE_ATACMD_POS         							14


/*SDIO_RESPCMD Register Bit Position Definitions*/

#define SDIO_RESPCMD_RESPCMD_POS              					0

/*SDIO_RESPx Register Bit Position Definitions*/

#define SDIO_RESPx_CARDSTATUS_POS              					0


/*SDIO_DTIMER Register Bit Position Definitions*/

#define SDIO_DTIMER_DATATIME_POS              					0


/*SDIO_DLEN Register Bit Position Definitions*/

#define SDIO_DLEN_DATALENGTH_POS              					0

/*SDIO_DCTRL Register Bit Position Definitions*/

#define SDIO_DCTRL_DTEN_POS              						0
#define SDIO_DCTRL_DTDIR_POS             						1
#define SDIO_DCTRL_DTMODE_POS            						2
#define SDIO_DCTRL_DMAEN_POS             						3
#define SDIO_DCTRL_DBLOCKSIZE_POS        						4
#define SDIO_DCTRL_RWSTART_POS           						8
#define SDIO_DCTRL_RWSTOP_POS            						9
#define SDIO_DCTRL_RWMOD_POS             						10
#define SDIO_DCTRL_SDIOEN_POS            						11


/*SDIO_DCOUNT Register Bit Position Definitions*/

#define SDIO_DCOUNT_DATACOUNT_POS              					0

/*SDIO_STA Register Bit Position Definitions*/



#define SDIO_STA_CCRCFAIL_POS         							0
#define SDIO_STA_DCRCFAIL_POS         							1
#define SDIO_STA_CTIMEOUT_POS         							2
#define SDIO_STA_DTIMEOUT_POS         							3
#define SDIO_STA_TXUNDERR_POS         							4
#define SDIO_STA_RXOVERR_POS          							5
#define SDIO_STA_CMDREND_POS          							6
#define SDIO_STA_CMDSENT_POS          							7
#define SDIO_STA_DATAEND_POS          							8
#define SDIO_STA_STBITERR_POS         							9
#define SDIO_STA_DBCKEND_POS          							10
#define SDIO_STA_CMDACT_POS           							11
#define SDIO_STA_TXACT_POS            							12
#define SDIO_STA_RXACT_POS            							13
#define SDIO_STA_TXFIFOHE_POS         							14
#define SDIO_STA_RXFIFOHF_POS         							15
#define SDIO_STA_TXFIFOF_POS          							16
#define SDIO_STA_RXFIFOF_POS          							17
#define SDIO_STA_TXFIFOE_POS          							18
#define SDIO_STA_RXFIFOE_POS          							19
#define SDIO_STA_TXDAVL_POS           							20
#define SDIO_STA_RXDAVL_POS           							21
#define SDIO_STA_SDIOIT_POS           							22
#define SDIO_STA_CEATAEND_POS         							23

/* SDIO_ICR Register Bit Position Definitions*/


#define SDIO_ICR_CCRCFAILC_POS         							0
#define SDIO_ICR_DCRCFAILC_POS          						1
#define SDIO_ICR_CTIMEOUTC_POS          						2
#define SDIO_ICR_DTIMEOUTC_POS          						3
#define SDIO_ICR_TXUNDERRC_POS          						4
#define SDIO_ICR_RXOVERRC_POS           						5
#define SDIO_ICR_CMDRENDC_POS           						6
#define SDIO_ICR_CMDSENTC_POS           						7
#define SDIO_ICR_DATAENDC_POS           						8
#define SDIO_ICR_STBITERRC_POS          						9
#define SDIO_ICR_DBCKENDC_POS           						10
#define SDIO_ICR_SDIOITC_POS            						22
#define SDIO_ICR_CEATAENDC_POS          						23

/*SDIO_MASK Register Bit Position Definitions*/



#define SDIO_MASK_CCRCFAILIE_POS      							0
#define SDIO_MASK_DCRCFAILIE_POS      							1
#define SDIO_MASK_CTIMEOUTIE_POS      							2
#define SDIO_MASK_DTIMEOUTIE_POS      							3
#define SDIO_MASK_TXUNDERRIE_POS      							4
#define SDIO_MASK_RXOVERRIE_POS       							5
#define SDIO_MASK_CMDRENDIE_POS       							6
#define SDIO_MASK_CMDSENTIE_POS       							7
#define SDIO_MASK_DATAENDIE_POS       							8
#define SDIO_MASK_STBITERRIE_POS      							9
#define SDIO_MASK_DBCKENDIE_POS       							10
#define SDIO_MASK_CMDACTIE_POS        							11
#define SDIO_MASK_TXACTIE_POS         							12
#define SDIO_MASK_RXACTIE_POS         							13
#define SDIO_MASK_TXFIFOHEIE_POS      							14
#define SDIO_MASK_RXFIFOHFIE_POS      							15
#define SDIO_MASK_TXFIFOEIE_POS       							16
#define SDIO_MASK_RXFIFOFIE_POS       							17
#define SDIO_MASK_TXFIFOFIE_POS       							18
#define SDIO_MASK_RXFIFOEIE_POS       							19
#define SDIO_MASK_TXDAVLIE_POS        							20
#define SDIO_MASK_RXDAVLIE_POS        							21
#define SDIO_MASK_SDIOITIE_POS        							22
#define SDIO_MASK_CEATAENDIE_POS      							23

/*SDIO_FIFOCNT Register Bit Position Definitions*/

#define SDIO_FIFOCNT_FIFOCOUNT_POS              				0

/*SDIO_FIFOCNT Register Bit Position Definitions*/

#define SDIO_FIFO_FIFODATA_POS              					0

/*OTG REGISTERS*/

/* OTG_FS_GOTGCTL Register Bit Position Definitions*/



#define OTG_FS_GOTGCTL_SRQSCS_POS         						0
#define OTG_FS_GOTGCTL_SRQ_POS            						1
#define OTG_FS_GOTGCTL_HNGSCS_POS         						8
#define OTG_FS_GOTGCTL_HNPRQ_POS          						9
#define OTG_FS_GOTGCTL_HSHNPEN_POS        						10
#define OTG_FS_GOTGCTL_DHNPEN_POS         						11
#define OTG_FS_GOTGCTL_CIDSTS_POS         						16
#define OTG_FS_GOTGCTL_DBCT_POS           						17
#define OTG_FS_GOTGCTL_ASVLD_POS          						18
#define OTG_FS_GOTGCTL_BSVLD_POS          						19

/*OTG_FS_GOTGINT Register Bit Position Definitions*/

#define OTG_FS_GOTGINT_SEDET_POS        						2
#define OTG_FS_GOTGINT_SRSSCHG_POS          					8
#define OTG_FS_GOTGINT_HNSSCHG_POS           					9
#define OTG_FS_GOTGINT_HNGDET_POS          						17
#define OTG_FS_GOTGINT_ADTOCHG_POS           					18
#define OTG_FS_GOTGINT_DBCDNE_POS           					19

/*OTG_FS_GAHBCFG Register Bit Position Definitions*/

#define OTG_FS_GAHBCFG_GINTMSK_POS         						0
#define OTG_FS_GAHBCFG_TXFELVL_POS         						7
#define OTG_FS_GAHBCFG_PTXFELVL_POS        						8

/*OTG_FS_GUSBCFG Register Bit Position Definitions*/



#define OTG_FS_GUSBCFG_TOCAL_POS          						0
#define OTG_FS_GUSBCFG_PHYSEL_POS         						6
#define OTG_FS_GUSBCFG_SRPCAP_POS         						8
#define OTG_FS_GUSBCFG_HNPCAP_POS         						9
#define OTG_FS_GUSBCFG_TRDT_POS           						10
#define OTG_FS_GUSBCFG_FHMOD_POS          						29
#define OTG_FS_GUSBCFG_FDMOD_POS          						30
#define OTG_FS_GUSBCFG_CTXPKT_POS         						31

/*OTG_FS_GRSTCTL Register Bit Position Definitions*/



#define OTG_FS_GRSTCTL_CSRST_POS           						0
#define OTG_FS_GRSTCTL_HSRST_POS           						1
#define OTG_FS_GRSTCTL_FCRST_POS           						2
#define OTG_FS_GRSTCTL_RXFFLSH_POS         						4
#define OTG_FS_GRSTCTL_TXFFLSH_POS         						5
#define OTG_FS_GRSTCTL_TXFNUM_POS          						6
#define OTG_FS_GRSTCTL_AHBIDL_POS          						31

/*OTG_FS_GINTSTS Register Bit Position Definitions*/



#define OTG_FS_GINTSTS_CMOD_POS            						0
#define OTG_FS_GINTSTS_MMIS_POS            						1
#define OTG_FS_GINTSTS_OTGINT_POS          						2
#define OTG_FS_GINTSTS_SOF_POS             						3
#define OTG_FS_GINTSTS_RXFLVL_POS          						4
#define OTG_FS_GINTSTS_NPTXFE_POS          						5
#define OTG_FS_GINTSTS_GINAKEFF_POS        						6
#define OTG_FS_GINTSTS_GONAKEFF_POS        						7
#define OTG_FS_GINTSTS_ESUSP_POS           						10
#define OTG_FS_GINTSTS_USBSUSP_POS         						11
#define OTG_FS_GINTSTS_USBRST_POS          						12
#define OTG_FS_GINTSTS_ENUMDNE_POS         						13
#define OTG_FS_GINTSTS_ISOODRP_POS          					14
#define OTG_FS_GINTSTS_EOPF_POS         						15
#define OTG_FS_GINTSTS_IEPINT_POS          						18
#define OTG_FS_GINTSTS_OEPINT_POS          						19
#define OTG_FS_GINTSTS_IISOIXFR_POS        						20
#define OTG_FS_GINTSTS_IPXFR_POS           						21
#define OTG_FS_GINTSTS_HPRTINT_POS         						24
#define OTG_FS_GINTSTS_HCINT_POS           						25
#define OTG_FS_GINTSTS_PTXFE_POS           						26
#define OTG_FS_GINTSTS_CIDSCHG_POS         						28
#define OTG_FS_GINTSTS_DISCINT_POS         						29
#define OTG_FS_GINTSTS_SRQINT_POS          						30
#define OTG_FS_GINTSTS_WKUINT_POS          						31

/*OTG_FS_GINTSTS Register Bit Position Definitions*/

#define OTG_FS_GINTSTS_MMISM_POS             					1
#define OTG_FS_GINTSTS_OTGINT_POS           					2
#define OTG_FS_GINTSTS_SOFM_POS              					3
#define OTG_FS_GINTSTS_RXFLVLM_POS           					4
#define OTG_FS_GINTSTS_NPTXFEM_POS           					5
#define OTG_FS_GINTSTS_GINAKEFFM_POS         					6
#define OTG_FS_GINTSTS_GONAKEFFM_POS         					7
#define OTG_FS_GINTSTS_ESUSPM_POS            					10
#define OTG_FS_GINTSTS_USBSUSPM_POS          					11
#define OTG_FS_GINTSTS_USBRST_POS           					12
#define OTG_FS_GINTSTS_ENUMDNEM_POS          					13
#define OTG_FS_GINTSTS_ISOODRPM_POS          					14
#define OTG_FS_GINTSTS_EOPFM_POS             					15
#define OTG_FS_GINTSTS_IEPINT_POS           					18
#define OTG_FS_GINTSTS_OEPINTM_POS           					19
#define OTG_FS_GINTSTS_IISOIXFRM_POS         					20
#define OTG_FS_GINTSTS_IPXFRM_POS            					21
#define OTG_FS_GINTSTS_PRTIM_POS          						24
#define OTG_FS_GINTSTS_HCIM_POS            						25
#define OTG_FS_GINTSTS_PTXFEM_POS            					26
#define OTG_FS_GINTSTS_CIDSCHGM_POS          					28
#define OTG_FS_GINTSTS_DISCINT_POS          					29
#define OTG_FS_GINTSTS_SRQIM_POS           						30
#define OTG_FS_GINTSTS_WKUIM_POS           						31

/*OTG_FS_GRXSTSR / OTG_FS_GRXSTSP Register Bit Position Definitions*/


// DEVICE MODE
#define OTG_FS_GRXSTSP_EPNUM_POS          						0
#define OTG_FS_GRXSTSP_BCNT_POS           						4
#define OTG_FS_GRXSTSP_DPID_POS           						15
#define OTG_FS_GRXSTSP_PKTSTS_POS         						17
#define OTG_FS_GRXSTSP_FRMNUM_POS         						21

//HOST MODE

#define OTG_FS_GRXSTSP_CHNUM_POS          						0
#define OTG_FS_GRXSTSP_BCNT_POS           						4
#define OTG_FS_GRXSTSP_DPID_POS           						15
#define OTG_FS_GRXSTSP_PKTSTS_POS         						17

/*OTG_FS_GRXFSIZ Register Bit Position Definitions*/

#define OTG_FS_GRXFSIZ_RXFD_POS          						0

/*OTG_FS_OTG_FS_HNPTXFSIZ / OTG_FS_DIEPTXF0 Register Bit Position Definitions*/


// DEVICE MODE
#define OTG_FS_HNPTXFSIZ_TX0FSA_POS          						0
#define OTG_FS_HNPTXFSIZ_TX0FD_POS           						16


//HOST MODE
#define OTG_FS_HNPTXFSIZ_NPTXFSA_POS          						0
#define OTG_FS_HNPTXFSIZ_NPTXFD_POS           						16

/*OTG_FS_HNPTXSTS Register Bit Position Definitions*/

#define OTG_FS_HNPTXSTS_NPTXFSAV_POS        						0
#define OTG_FS_HNPTXSTS_NPTQXSAV_POS        						16
#define OTG_FS_HNPTXSTS_NPTQTOP_POS         						24

/*OTG_FS_GCCFG Register Bit Position Definitions*/



#define OTG_FS_GCCFG_PWRDWN_POS          							16
#define OTG_FS_GCCFG_VBUSASEN_POS        							18
#define OTG_FS_GCCFG_VBUSBSEN_POS        							19
#define OTG_FS_GCCFG_SOFOUTEN_POS        							20
#define OTG_FS_GCCFG_NOVBUSSENS_POS      							21

/*OTG_FS_CID Register Bit Position Definitions */

#define OTG_FS_CID_PRODUCT_ID_POS          							0

/*OTG_FS_HPTXFSIZ Register Bit Position Definitions*/


#define OTG_FS_HPTXFSIZ_PTXSA_POS          							0
#define OTG_FS_HPTXFSIZ_PTXFD_POS          							16


/*OTG_FS_DIEPTXFx Register Bit Position Definitions*/

#define OTG_FS_DIEPTXFx_INEPTXSA_POS          							0
#define OTG_FS_DIEPTXFx_INEPTXFD_POS          							16


/*OTG_FS_HCFG Register Bit Position Definitions*/

#define OTG_FS_HCFG_FSLSPCS_POS          							0
#define OTG_FS_HCFG_FSLSS_POS          								2

/*OTG_FS_HFIR Register Bit Position Definitions*/

#define OTG_FS_HFIR_FRIVL_POS          								0

/*OTG_FS_HFNUM Register Bit Position Definitions*/

#define OTG_FS_HFNUM_FRNUM_POS          							0
#define OTG_FS_HFNUM_FTREM_POS          							16

/*OTG_FS_HPTXSTS Register Bit Position Definitions*/


#define OTG_FS_HPTXSTS_PTXFSAVL_POS      							0
#define OTG_FS_HPTXSTS_PTXQSAV_POS       							16
#define OTG_FS_HPTXSTS_PTXQTOP_POS       							24


/*OTG_FS_HAINT Register Bit Position Definitions*/

#define OTG_FS_HAINT_HAINT_POS          							0


/*OTG_FS_HAINTMSK Register Bit Position Definitions*/

#define OTG_FS_HAINTMSK_HAINTM_POS          						0

/*OTG_FS_HPRT Register Bit Position Definitions*/

#define OTG_FS_HPRT_PCSTS_POS          								0
#define OTG_FS_HPRT_PCDET_POS          								1
#define OTG_FS_HPRT_PENA_POS           								2
#define OTG_FS_HPRT_PENCHNG_POS        								3
#define OTG_FS_HPRT_POCA_POS           								4
#define OTG_FS_HPRT_POCCHNG_POS        								5
#define OTG_FS_HPRT_PRES_POS           								6
#define OTG_FS_HPRT_PSUSP_POS          								7
#define OTG_FS_HPRT_PRST_POS           								8
#define OTG_FS_HPRT_PLSTS_POS          								10
#define OTG_FS_HPRT_PPWR_POS           								12
#define OTG_FS_HPRT_PTCTL_POS          								13
#define OTG_FS_HPRT_PSPD_POS           								17

/*OTG_FS_HCCHARx Register Bit Position Definitions*/



#define OTG_FS_HCCHAR_MPSIZ_POS          							0
#define OTG_FS_HCCHAR_EPNUM_POS          							11
#define OTG_FS_HCCHAR_EPDIR_POS          							15
#define OTG_FS_HCCHAR_LSDEV_POS          							17
#define OTG_FS_HCCHAR_EPTYP_POS          							18
#define OTG_FS_HCCHAR_MCNT_POS           							20
#define OTG_FS_HCCHAR_DAD_POS            							22
#define OTG_FS_HCCHAR_ODDFRM_POS         							29
#define OTG_FS_HCCHAR_CHDIS_POS          							30
#define OTG_FS_HCCHAR_CHENA_POS          							31

/*OTG_FS_HCINTx Register Bit Position Definitions*/



#define OTG_FS_HCINT_XFRC_POS          								0
#define OTG_FS_HCINT_CHH_POS           								1
#define OTG_FS_HCINT_STALL_POS         								3
#define OTG_FS_HCINT_NAK_POS           								4
#define OTG_FS_HCINT_ACK_POS           								5
#define OTG_FS_HCINT_NYET_POS          								6
#define OTG_FS_HCINT_TXERR_POS         								7
#define OTG_FS_HCINT_BBERR_POS         								8
#define OTG_FS_HCINT_FRMOR_POS         								9
#define OTG_FS_HCINT_DTERR_POS         								10

/*OTG_FS_HCINTMSKx Register Bit Position Definitions*/

#define OTG_FS_HCINTMSK_XFRCM_POS         							0
#define OTG_FS_HCINTMSK_CHHM_POS          							1
#define OTG_FS_HCINTMSK_STALLM_POS        							3
#define OTG_FS_HCINTMSK_NAKM_POS          							4
#define OTG_FS_HCINTMSK_ACKM_POS          							5
#define OTG_FS_HCINTMSK_NYETM_POS         							6
#define OTG_FS_HCINTMSK_TXERRM_POS        							7
#define OTG_FS_HCINTMSK_BBERRM_POS        							8
#define OTG_FS_HCINTMSK_FRMORM_POS        							9
#define OTG_FS_HCINTMSK_DTERRM_POS        							10

/*OTG_FS_HCTSIZx Register Bit Position Definitions*/


#define OTG_FS_HCTSIZ_XFRSIZ_POS         							0
#define OTG_FS_HCTSIZ_PKTCNT_POS         							19
#define OTG_FS_HCTSIZ_DPID_POS           							29


/*
 * DEVICE MODE REGISTERS
 */
/*OTG_FS_DCFG Register Bit Position Definitions*/



#define OTG_FS_DCFG_DSPD_POS              							0
#define OTG_FS_DCFG_NZLSOHSK_POS          							2
#define OTG_FS_DCFG_DAD_POS               							4
#define OTG_FS_DCFG_PFIVL_POS             							11

/*OTG_FS_DCTL Register Bit Position Definitions*/



#define OTG_FS_DCTL_RWUSIG_POS          							0
#define OTG_FS_DCTL_SDIS_POS            							1
#define OTG_FS_DCTL_GINSTS_POS          							2
#define OTG_FS_DCTL_GONSTS_POS          							3
#define OTG_FS_DCTL_TCTL_POS          							    4
#define OTG_FS_DCTL_SGINAK_POS          							7
#define OTG_FS_DCTL_CGINAK_POS          							8
#define OTG_FS_DCTL_SGONAK_POS          							9
#define OTG_FS_DCTL_CGONAK_POS          							10
#define OTG_FS_DCTL_POPRGDNE_POS        							11

/* OTG_FS_DSTS Register Bit Position Definitions*/

#define OTG_FS_DSTS_SUSPSTS_POS         							0
#define OTG_FS_DSTS_ENUMSPD_POS         							1
#define OTG_FS_DSTS_EERR_POS            							3
#define OTG_FS_DSTS_FNSOF_POS           							8

/*OTG_FS_DIEPMSK Register Bit Position Definitions*/



#define OTG_FS_DIEPMSK_XFRCM_POS          							0
#define OTG_FS_DIEPMSK_EPDM_POS           							1
#define OTG_FS_DIEPMSK_TOM_POS            							3
#define OTG_FS_DIEPMSK_ITTXFEMSK_POS      							4
#define OTG_FS_DIEPMSK_INEPNIMM_POS       							5
#define OTG_FS_DIEPMSK_INEPNEM_POS        							6
#define OTG_FS_DIEPMSK_NAKM_POS           							13

/*OTG_FS_DOEPMSK Register Bit Position Definitions*/

#define OTG_FS_DOEPMSK_XFRCM_POS          							0
#define OTG_FS_DOEPMSK_EPDM_POS           							1
#define OTG_FS_DOEPMSK_STUPM_POS          							3
#define OTG_FS_DOEPMSK_OTEPDM_POS         							4
#define OTG_FS_DOEPMSK_STSPHSSRXM_POS     							5
#define OTG_FS_DOEPMSK_OUTPKTERRM_POS      							8
#define OTG_FS_DOEPMSK_BEPRAM_POS         							12
#define OTG_FS_DOEPMSK_NAK_POS            							13

/*OTG_FS_DAINT Register Bit Position Definitions*/



#define OTG_FS_DAINT_IEPINT_POS          							0
#define OTG_FS_DAINT_OEPINT_POS          							16

/*OTG_FS_DAINTMSK Register Bit Position Definitions*/

#define OTG_FS_DAINTMSK_IEPM_POS      								0
#define OTG_FS_DAINTMSK_OEPM_POS      								16

/*OTG_FS_DVBUSDIS Register Bit Position Definitions*/

#define OTG_FS_DVBUSDIS_DVBUSDT_POS      							0

/*OTG_FS_DVBUSPULSE Register Bit Position Definitions*/

#define OTG_FS_DVBUSPULSE_DVBUSP_POS      							0

/*OTG_FS_DIEPEMPMSK Register Bit Position Definitions*/

#define OTG_FS_DIEPEMPMSK_INEPTXFEM_POS      						0

/*OTG_FS_DIEPCTL0 Register Bit Position Definitions*/



#define OTG_FS_DIEPCTL0_MPSIZ_POS        							0
#define OTG_FS_DIEPCTL0_USBAEP_POS       							15
#define OTG_FS_DIEPCTL0_NAKSTS_POS       							17
#define OTG_FS_DIEPCTL0_EPTYP_POS        							18
#define OTG_FS_DIEPCTL0_STALL_POS        							21
#define OTG_FS_DIEPCTL0_TXFNUM_POS       							22
#define OTG_FS_DIEPCTL0_CNAK_POS         							26
#define OTG_FS_DIEPCTL0_SNAK_POS         							27
#define OTG_FS_DIEPCTL0_EPDIS_POS        							30
#define OTG_FS_DIEPCTL0_EPENA_POS        							31

/*OTG_FS_DIEPCTLx Register Bit Position Definitions*/



#define OTG_FS_DIEPCTL_MPSIZ_POS          							0
#define OTG_FS_DIEPCTL_USBAEP_POS         							15
#define OTG_FS_DIEPCTL_EONUM_DPID_POS     							16
#define OTG_FS_DIEPCTL_NAKSTS_POS         							17
#define OTG_FS_DIEPCTL_EPTYP_POS          							18
#define OTG_FS_DIEPCTL_STALL_POS          							21
#define OTG_FS_DIEPCTL_TXFNUM_POS         							22
#define OTG_FS_DIEPCTL_CNAK_POS           							26
#define OTG_FS_DIEPCTL_SNAK_POS           							27
#define OTG_FS_DIEPCTL_SD0PID_POS         							28
#define OTG_FS_DIEPCTL_SD1PID_POS         							29
#define OTG_FS_DIEPCTL_EPDIS_POS          							30
#define OTG_FS_DIEPCTL_EPENA_POS          							31

/*OTG_FS_DOEPCTL0 Register Bit Position Definitions*/



#define OTG_FS_DOEPCTL0_MPSIZ_POS         							0
#define OTG_FS_DOEPCTL0_USBAEP_POS        							15
#define OTG_FS_DOEPCTL0_NAKSTS_POS        							17
#define OTG_FS_DOEPCTL0_EPTYP_POS         							18
#define OTG_FS_DOEPCTL0_SNPM_POS          							20
#define OTG_FS_DOEPCTL0_STALL_POS         							21
#define OTG_FS_DOEPCTL0_CNAK_POS          							26
#define OTG_FS_DOEPCTL0_SNAK_POS          							27
#define OTG_FS_DOEPCTL0_EPDIS_POS         							30
#define OTG_FS_DOEPCTL0_EPENA_POS         							31

/*OTG_FS_DOEPCTLx Register Bit Position Definitions*/



#define OTG_FS_DOEPCTL_MPSIZ_POS          							0
#define OTG_FS_DOEPCTL_USBAEP_POS         							15
#define OTG_FS_DOEPCTL_EONUM_POS          							16
#define OTG_FS_DOEPCTL_NAKSTS_POS         							17
#define OTG_FS_DOEPCTL_EPTYP_POS          							18
#define OTG_FS_DOEPCTL_SNPM_POS           							20
#define OTG_FS_DOEPCTL_STALL_POS          							21
#define OTG_FS_DOEPCTL_CNAK_POS           							26
#define OTG_FS_DOEPCTL_SNAK_POS           							27
#define OTG_FS_DOEPCTL_SD0PID_POS         							28
#define OTG_FS_DOEPCTL_SD1PID_POS         							29
#define OTG_FS_DOEPCTL_EPDIS_POS          							30
#define OTG_FS_DOEPCTL_EPENA_POS          							31

/*OTG_FS_DIEPINTx Register Bit Position Definitions*/

#define OTG_FS_DIEPINT_XFRC_POS          							0
#define OTG_FS_DIEPINT_EPDISD_POS        							1
#define OTG_FS_DIEPINT_TOC_POS           							3
#define OTG_FS_DIEPINT_ITTXFE_POS        							4
#define OTG_FS_DIEPINT_INEPNM_POS        							5
#define OTG_FS_DIEPINT_INEPNE_POS        							6
#define OTG_FS_DIEPINT_TXFE_POS          							7
#define OTG_FS_DIEPINT_PKTDRPSTS_POS     							11
#define OTG_FS_DIEPINT_NAK_POS           							13

/*OTG_FS_DOEPINTx Register Bit Position Definitions*/

#define OTG_FS_DOEPINT_XFRC_POS            							0
#define OTG_FS_DOEPINT_EPDISD_POS          							1
#define OTG_FS_DOEPINT_STUP_POS            							3
#define OTG_FS_DOEPINT_OTEPDIS_POS         							4
#define OTG_FS_DOEPINT_STSPHSRX_POS         						5

/*OTG_FS_DIEPTSIZ0 Register Bit Position Definitions*/

#define OTG_FS_DIEPTSIZ0_XFRSIZ_POS        							0
#define OTG_FS_DIEPTSIZ0_PKTCNT_POS        							19

/*OTG_FS_DOEPTSIZ0 Register Bit Position Definitions*/



#define OTG_FS_DOEPTSIZ0_XFRSIZ_POS      							0
#define OTG_FS_DOEPTSIZ0_PKTCNT_POS      							19
#define OTG_FS_DOEPTSIZ0_STUPCNT_POS     							29

/*OTG_FS_DIEPTSIZx Register Bit Position Definitions*/

#define OTG_FS_DIEPTSIZ_XFRSIZ_POS      							0
#define OTG_FS_DIEPTSIZ_PKTCNT_POS      							19

/*OTG_FS_DTXFSTSx Register Bit Position Definitions*/

#define OTG_FS_DTXFSTS_INEPTFSAV_POS      							0

/*OTG_FS_PCGCCTL Register Bit Position Definitions*/

#define OTG_FS_PCGCCTL_STPPCLK_POS        							0
#define OTG_FS_PCGCCTL_GATEHCLK_POS       							1
#define OTG_FS_PCGCCTL_PHYSUSP_POS        							4


#define ENABLE             					1
#define DISABLE            					0
#define RESET     							DISABLE
#define SET       							ENABLE
#define GPIO_PIN_SET						SET
#define GPIO_LOW           					0
#define GPIO_HIGH          					1

#define GPIO_BASEADDR_TO_CODE(x)        ( (x == GPIOA) ? 0 : \
                                          (x == GPIOB) ? 1 : \
                                          (x == GPIOC) ? 2 : \
                                          (x == GPIOD) ? 3 : \
                                          (x == GPIOE) ? 4 : \
                                          (x == GPIOH) ? 7 : 0 )





#endif /* INC_STM32F401XX_H_ */

//OTG REGISTER TRUCTURE PENDING


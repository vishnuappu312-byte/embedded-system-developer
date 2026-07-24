/*
 * stm32f401xx_gpio.c
 *
 *  Created on: 18-Jul-2026
 *      Author: vishnu
 */


#include "stm32f401xx.h"
#include "stm32f401xx_gpio.h"


/* Peripheral Clock */
void GPIO_PeriClockControl(GPIO_RegDef_t *pGPIOx,uint8_t EnOrDi)
{
	if (EnOrDi == ENABLE)

	    {
	        if (pGPIOx == GPIOA)

	        {

	            GPIOA_PCLK_EN();

	        }

	        else if (pGPIOx == GPIOB)

	        {

	            GPIOB_PCLK_EN();

	        }

	        else if (pGPIOx == GPIOC)

	        {

	            GPIOC_PCLK_EN();

	        }

	        else if (pGPIOx == GPIOD)

	        {

	            GPIOD_PCLK_EN();

	        }

	        else if (pGPIOx == GPIOE)

	        {

	            GPIOE_PCLK_EN();

	        }

	        else if (pGPIOx == GPIOH)

	        {

	            GPIOH_PCLK_EN();

	        }

	    }

	    else

	    {

	        if (pGPIOx == GPIOA)

	        {

	            GPIOA_PCLK_DI();

	        }

	        else if (pGPIOx == GPIOB)

	        {

	            GPIOB_PCLK_DI();

	        }

	        else if (pGPIOx == GPIOC)

	        {

	            GPIOC_PCLK_DI();

	        }

	        else if (pGPIOx == GPIOD)

	        {

	            GPIOD_PCLK_DI();

	        }

	        else if (pGPIOx == GPIOE)

	        {

	            GPIOE_PCLK_DI();

	        }

	        else if (pGPIOx == GPIOH)

	        {

	            GPIOH_PCLK_DI();

	        }

	    }



}

/* GPIO Configuration */
void GPIO_Init(GPIO_Handle_t *pGPIOHandle)
{
	uint32_t temp = 0;
    // 1. Configure the mode of GPIO pin

	 if (pGPIOHandle->GPIO_PinConfig.GPIO_PinMode <= GPIO_MODE_ANALOG)
	 {
	        // Non-interrupt mode
	        temp = (pGPIOHandle->GPIO_PinConfig.GPIO_PinMode << GPIO_MODER_POS(pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));
	        // Clear the 2 bits first
	        pGPIOHandle->pGPIOx->MODER &= ~(0x3U << GPIO_MODER_POS(pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));
	        // Set the new value
	        pGPIOHandle->pGPIOx->MODER |= temp;

	 }

	 else

	 {

		 /* Configure the FTSR and RTSR registers */

		     if (pGPIOHandle->GPIO_PinConfig.GPIO_PinMode == GPIO_MODE_IT_FT)
		     {
		         /* Falling edge trigger */

		         EXTI->FTSR |= (1 << pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber);
		         EXTI->RTSR &= ~(1 << pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber);
		     }

		     else if (pGPIOHandle->GPIO_PinConfig.GPIO_PinMode == GPIO_MODE_IT_RT)

		     {
		         /* Rising edge trigger */

		         EXTI->RTSR |= (1 << pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber);
		         EXTI->FTSR &= ~(1 << pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber);
		     }

		     else if (pGPIOHandle->GPIO_PinConfig.GPIO_PinMode == GPIO_MODE_IT_RFT)

		     {
		         /* Rising and Falling edge trigger */

		         EXTI->RTSR |= (1 << pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber);
		         EXTI->FTSR |= (1 << pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber);
		     }

		     /* Configure the GPIO port selection in SYSCFG */

		     uint8_t temp1 = pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber / 4;
		     uint8_t temp2 = pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber % 4;

		     /* Configure the which port we use*/

		     uint8_t value = GPIO_BASEADDR_TO_CODE(pGPIOHandle->pGPIOx);
		     SYSCFG_PCLK_EN();
		     SYSCFG->EXTICR[temp1] = value << (4*temp2);
		     /* non mask the interrupt in EXTI line */
		     EXTI->IMR |= 1<<pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber;


	 }
	    // 2. Configure the speed
	    temp = (pGPIOHandle->GPIO_PinConfig.GPIO_PinSpeed << GPIO_OSPEEDR_POS(pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));
	    pGPIOHandle->pGPIOx->OSPEEDR &= ~(0x3U << GPIO_OSPEEDR_POS(pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));
	    pGPIOHandle->pGPIOx->OSPEEDR |= temp;

	    // 3. Configure the pull-up/pull-down settings
	    temp = (pGPIOHandle->GPIO_PinConfig.GPIO_PinPuPdControl <<  GPIO_PUPDR_POS(pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));
	    pGPIOHandle->pGPIOx->PUPDR &= ~(0x3U <<  GPIO_PUPDR_POS(pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));
	    pGPIOHandle->pGPIOx->PUPDR |= temp;

	    // 4. Configure the output type (only 1 bit per pin)
	    temp = (pGPIOHandle->GPIO_PinConfig.GPIO_PinOPType<< GPIO_OTYPER_POS(pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));
	    pGPIOHandle->pGPIOx->OTYPER &=~(0x1U << GPIO_OTYPER_POS(pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));
	    pGPIOHandle->pGPIOx->OTYPER |= temp;

	    // 5. Configure alternate function
	    if (pGPIOHandle->GPIO_PinConfig.GPIO_PinMode == GPIO_MODE_ALTFN)
	    {
	        uint8_t temp1;
	        /* AFR[0] for Pin 0-7, AFR[1] for Pin 8-15 */
	        temp1 = pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber / 8;
	        /* Clear the 4 bits corresponding to the pin */
	        pGPIOHandle->pGPIOx->AFR[temp1] &=~(0xFU << GPIO_AFR_POS(pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));
	        /* Set the Alternate Function */
	        pGPIOHandle->pGPIOx->AFR[temp1] |=(pGPIOHandle->GPIO_PinConfig.GPIO_PinAltFunMode<< GPIO_AFR_POS(pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));
	    }

}


void GPIO_DeInit(GPIO_RegDef_t *pGPIOx)

{
	if (pGPIOx == GPIOA)

	    {

	        GPIOA_REG_RESET();

	    }

	    else if (pGPIOx == GPIOB)

	    {

	        GPIOB_REG_RESET();

	    }

	    else if (pGPIOx == GPIOC)

	    {

	        GPIOC_REG_RESET();

	    }

	    else if (pGPIOx == GPIOD)

	    {

	        GPIOD_REG_RESET();

	    }

	    else if (pGPIOx == GPIOE)

	    {

	        GPIOE_REG_RESET();

	    }

	    else if (pGPIOx == GPIOH)

	    {

	        GPIOH_REG_RESET();

	    }

}
/* GPIO Write */
void GPIO_WriteToOutputPin(GPIO_RegDef_t *pGPIOx,uint8_t PinNumber , uint8_t Value)

{
	if(Value == GPIO_PIN_SET)
	{
		pGPIOx->ODR |= (1<<PinNumber);
	}
	else
	{
		pGPIOx->ODR &= ~(1<<PinNumber);
	}

}
void GPIO_WriteToOutputPort(GPIO_RegDef_t *pGPIOx, uint16_t Value)
{
	pGPIOx->ODR = Value;

}
void GPIO_ToggleOutputPin(GPIO_RegDef_t *pGPIOx,uint16_t PinNumber)
{

	pGPIOx->ODR ^= (1<<PinNumber);

}

/* GPIO Read */
uint16_t GPIO_ReadFromInputPin(GPIO_RegDef_t *pGPIOx , uint8_t PinNumber)
{
	uint8_t value;
	value = ((uint8_t)(pGPIOx->IDR >> PinNumber)& 0x00000001);
	return value;

}

uint16_t GPIO_ReadFromInputPort(GPIO_RegDef_t *pGPIOx)
{
	uint16_t value;
	value = ((uint16_t)(pGPIOx->IDR));
	return value;


}

/* Optional Utility */

void GPIO_SetOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber)
{
    pGPIOx->BSRR = (1 << PinNumber);

}

void GPIO_ResetOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber)
{

    pGPIOx->BSRR = (1 << (PinNumber + 16));

}

void GPIO_LockPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber)
{
    uint32_t temp;
    pGPIOx->LCKR = (1 << GPIO_LCKR_POS(PinNumber)) | (1 << GPIO_LCKR_LCKK_POS);
    pGPIOx->LCKR = (1 << GPIO_LCKR_POS(PinNumber));
    pGPIOx->LCKR = (1 << GPIO_LCKR_POS(PinNumber)) |(1 << GPIO_LCKR_LCKK_POS);

    temp = pGPIOx->LCKR;
    temp = pGPIOx->LCKR;
    (void)temp;
}



/* GPIO Interrupt */
void GPIO_IRQInterruptConfig(uint8_t IRQNumber, uint8_t EnOrDi)
{
	if(EnOrDi == ENABLE)
	{
		if(IRQNumber <=31)
		{
			*NVIC_ISER0 |= (1<<IRQNumber);
		}
		else if (IRQNumber >31 && IRQNumber <=64)
		{
			*NVIC_ISER1 |= (1<<IRQNumber % 32);
		}
		else if (IRQNumber >64 && IRQNumber <96)
		{
			*NVIC_ISER2 |= (1<<IRQNumber % 64);
		}
	}
	else
	{
		        if(IRQNumber <=31)
				{
					*NVIC_ICPR0 |= (1<<IRQNumber);
				}
				else if (IRQNumber >31 && IRQNumber <=64)
				{
					*NVIC_ICPR1 |= (1<<IRQNumber % 32);
				}
				else if (IRQNumber >64 && IRQNumber <96)
				{
					*NVIC_ICPR2 |= (1<<IRQNumber % 64);
				}

	}

}


void GPIO_IRQPriorityConfig(uint8_t IRQNumber, uint8_t IRQPriority)
{
    uint8_t iprx = IRQNumber / 4;
    uint8_t iprx_section = IRQNumber % 4;
    uint8_t shift_amount = (8 * iprx_section) + (8 - NO_PR_BITS_IMPLEMENTED);

    *(NVIC_PR_BASE_ADDR + iprx) &= ~(0xFU << shift_amount);
    *(NVIC_PR_BASE_ADDR + iprx) |= (IRQPriority << shift_amount);

}

void GPIO_IRQHandling(uint8_t PinNumber)
{
	// Check whether interrupt is actually pending
	    if(EXTI->PR & (1U << PinNumber))
	    {
	        // Clear the pending bit (Write 1 to Clear)
	        EXTI->PR = (1U << PinNumber);
	    }

}

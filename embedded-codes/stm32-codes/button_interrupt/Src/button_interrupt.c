/*
 * button_interrupt.c
 *
 *  Created on: 24-Jul-2026
 *      Author: vishnu
 */


#include "button_interrupt.h"

static GPIO_Handle_t GpioLed;
static GPIO_Handle_t GpioButton;

void button_interrupt_init(void)
{
    /* Enable GPIO clocks */
    GPIO_PeriClockControl(GPIOA, ENABLE);
    GPIO_PeriClockControl(GPIOC, ENABLE);

    /*-----------------------------
      PA5 - Onboard LED
    ------------------------------*/
    GpioLed.pGPIOx = GPIOA;
    GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_5;
    GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
    GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
    GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
    GpioLed.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;

    GPIO_Init(&GpioLed);

    /*-----------------------------
      PC13 - USER Button
    ------------------------------*/
    GpioButton.pGPIOx = GPIOC;
    GpioButton.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
    GpioButton.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IT_FT;
    GpioButton.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
    GpioButton.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;

    GPIO_Init(&GpioButton);

    /* Configure NVIC */
    GPIO_IRQPriorityConfig(IRQ_NO_EXTI15_10, 15);
    GPIO_IRQInterruptConfig(IRQ_NO_EXTI15_10, ENABLE);
}

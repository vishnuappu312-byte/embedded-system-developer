/*
 * button_press.c
 *
 *  Created on: 23-Jul-2026
 *      Author: vishnu
 */
//
//
//#include "stm32f401xx_gpio.h"
//#include "delay.h"
//
//void button_press(void)
//{
//    GPIO_Handle_t GpioLed, GpioButton;
//
//    /* Enable GPIO Clocks */
//    GPIO_PeriClockControl(GPIOA, ENABLE);
//    GPIO_PeriClockControl(GPIOC, ENABLE);
//
//    /* Configure PA5 (Onboard LED) */
//    GpioLed.pGPIOx = GPIOA;
//    GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_5;
//    GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
//    GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
//    GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
//    GpioLed.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;
//
//    GPIO_Init(&GpioLed);
//
//    /* Configure PC13 (Onboard User Button) */
//    GpioButton.pGPIOx = GPIOC;
//    GpioButton.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
//    GpioButton.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
//    GpioButton.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
//    GpioButton.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;
//
//    GPIO_Init(&GpioButton);
//
//    while(1)
//    {
//        /* Active High Button (change to GPIO_PIN_RESET if your board is active low) */
//        if(GPIO_ReadFromInputPin(GPIOC, GPIO_PIN_NO_13) == GPIO_PIN_SET)
//        {
//            delay(200000);
//
//            if(GPIO_ReadFromInputPin(GPIOC, GPIO_PIN_NO_13) == GPIO_PIN_SET)
//            {
//                GPIO_ToggleOutputPin(GPIOA, GPIO_PIN_NO_5);
//
//                /* Wait until button is released */
//                while(GPIO_ReadFromInputPin(GPIOC, GPIO_PIN_NO_13) == GPIO_PIN_SET);
//            }
//        }
//    }
//}

#include "stm32f401xx_gpio.h"
#include "delay.h"

static GPIO_Handle_t GpioLed, GpioButton;

void button_press_init(void)
{
    GPIO_PeriClockControl(GPIOA, ENABLE);
    GPIO_PeriClockControl(GPIOC, ENABLE);

    /* PA5 - Onboard LED */
    GpioLed.pGPIOx = GPIOA;
    GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_5;
    GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
    GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
    GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
    GpioLed.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;

    GPIO_Init(&GpioLed);

    /* PC13 - User Button */
    GpioButton.pGPIOx = GPIOC;
    GpioButton.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
    GpioButton.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
    GpioButton.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
    GpioButton.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;

    GPIO_Init(&GpioButton);
}

void button_press_task(void)
{
	if(GPIO_ReadFromInputPin(GPIOC, GPIO_PIN_NO_13) == GPIO_PIN_RESET)
	{
	    delay(200000);

	    if(GPIO_ReadFromInputPin(GPIOC, GPIO_PIN_NO_13) == GPIO_PIN_RESET)
	    {
	        GPIO_ToggleOutputPin(GPIOA, GPIO_PIN_NO_5);

	        while(GPIO_ReadFromInputPin(GPIOC, GPIO_PIN_NO_13) == GPIO_PIN_RESET);
	    }
	}
}



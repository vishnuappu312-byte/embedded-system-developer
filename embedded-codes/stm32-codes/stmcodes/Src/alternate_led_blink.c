/*
 * alternate_led_blink.c
 *
 *  Created on: 23-Jul-2026
 *      Author: vishnu
 */
//
//
//#include "stm32f401xx_gpio.h"
//#include "delay.h"
//
//void alternate_led_blink(void)
//{
//    GPIO_Handle_t GpioLed1, GpioLed2;
//
//    /* Enable GPIOA Clock */
//    GPIO_PeriClockControl(GPIOA, ENABLE);
//
//    /* Configure PA6 */
//    GpioLed1.pGPIOx = GPIOA;
//    GpioLed1.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_6;
//    GpioLed1.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
//    GpioLed1.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
//    GpioLed1.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
//    GpioLed1.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;
//
//    GPIO_Init(&GpioLed1);
//
//    /* Configure PA7 */
//    GpioLed2.pGPIOx = GPIOA;
//    GpioLed2.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_7;
//    GpioLed2.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
//    GpioLed2.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
//    GpioLed2.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
//    GpioLed2.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;
//
//    GPIO_Init(&GpioLed2);
//
//    while(1)
//    {
//        /* LED1 ON, LED2 OFF */
//        GPIO_WriteToOutputPin(GPIOA, GPIO_PIN_NO_6, GPIO_PIN_SET);
//        GPIO_WriteToOutputPin(GPIOA, GPIO_PIN_NO_7, GPIO_PIN_RESET);
//
//        delay(250000);
//
//        /* LED1 OFF, LED2 ON */
//        GPIO_WriteToOutputPin(GPIOA, GPIO_PIN_NO_6, GPIO_PIN_RESET);
//        GPIO_WriteToOutputPin(GPIOA, GPIO_PIN_NO_7, GPIO_PIN_SET);
//
//        delay(250000);
//    }
//}

#include "stm32f401xx_gpio.h"
#include "delay.h"

static GPIO_Handle_t GpioLed1, GpioLed2;

void alternate_led_init(void)
{
    /* Enable GPIOA Clock */
    GPIO_PeriClockControl(GPIOA, ENABLE);

    /* Configure PA6 */
    GpioLed1.pGPIOx = GPIOA;
    GpioLed1.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_6;
    GpioLed1.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
    GpioLed1.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
    GpioLed1.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
    GpioLed1.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;

    GPIO_Init(&GpioLed1);

    /* Configure PA7 */
    GpioLed2.pGPIOx = GPIOA;
    GpioLed2.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_7;
    GpioLed2.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
    GpioLed2.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
    GpioLed2.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
    GpioLed2.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;

    GPIO_Init(&GpioLed2);
}
void alternate_led_task(void)
{
    static uint8_t state = 0;

    if(state == 0)
    {
        /* LED1 ON, LED2 OFF */
        GPIO_WriteToOutputPin(GPIOA, GPIO_PIN_NO_6, GPIO_PIN_SET);
        GPIO_WriteToOutputPin(GPIOA, GPIO_PIN_NO_7, GPIO_PIN_RESET);
    }
    else
    {
        /* LED1 OFF, LED2 ON */
        GPIO_WriteToOutputPin(GPIOA, GPIO_PIN_NO_6, GPIO_PIN_RESET);
        GPIO_WriteToOutputPin(GPIOA, GPIO_PIN_NO_7, GPIO_PIN_SET);
    }

    state = !state;

    delay(250000);
}




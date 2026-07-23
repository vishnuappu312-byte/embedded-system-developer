/*
 * delay.c
 *
 *  Created on: 23-Jul-2026
 *      Author: vishnu
 */


#include "delay.h"
#include <stdint.h>

void delay(uint32_t count)
{
    volatile uint32_t i;

    for(i = 0; i < count; i++);
}

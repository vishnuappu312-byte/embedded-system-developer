/*
 * external_intterupt_modular_approch.c
 *
 * Created: 26-04-2026 14:28:20
 * Author : hp
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include "external_interrupt.h"

void gpio_init()
{
	DDRB |=((1<<DDB5)| (1<<DDB4));
}


int main(void)
{
    /* Replace with your application code */
	gpio_init();
	external_interrupt_init();
    while (1) 
    {
		PORTB |=(1<<PB5);
		PORTB &=~(1<<PB4);
    }
}


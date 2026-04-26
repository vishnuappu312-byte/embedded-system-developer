/*
 * external_interrupt.c
 *
 * Created: 26-04-2026 14:35:43
 *  Author: hp
 */ 


//#define F_CPU 16000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "external_interrupt.h"


ISR(INT0_vect)
{
	PORTB |=(1<<PB4);
	_delay_ms(5000);//for testing
}

void external_interrupt_init()
{
	DDRD &=~(1<<DDD2);
	EIMSK |=(1<<INT0);
	EICRA |= ((1<<ISC00)|(1<<ISC01));
	sei();
}
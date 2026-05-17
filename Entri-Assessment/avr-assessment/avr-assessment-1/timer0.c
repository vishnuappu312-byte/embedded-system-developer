/*
 * timer0.c
 *
 * Created: 17-05-2026 06:14:49
 *  Author: hp
 */ 


#include "timer0.h"
void timer0_delay_ms(uint16_t ms)
{
	uint16_t i;

	for(i = 0; i < ms; i++)
	{
		// Preload value for 1ms delay
		TCNT0 = 6;

		// Start Timer0 with 1024 prescaler
		TCCR0B = (1 << CS02) | (1 << CS00);

		// Wait until overflow occurs
		while (!(TIFR0 & (1 << TOV0)));

		// Clear overflow flag
		TIFR0 |= (1 << TOV0);

		// Stop timer
		TCCR0B = 0;
	}
}
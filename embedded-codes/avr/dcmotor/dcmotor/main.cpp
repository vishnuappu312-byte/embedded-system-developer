/*
 * dcmotor.cpp
 *
 * Created: 22-03-2026 16:20:58
 * Author : hp
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    /* Replace with your application code */
	DDRD|=((1<<DDD1)|(1<<DDD2));
	
    while (1) 
    {
		PORTD |=(1 << PD1);
		PORTD &=~(1 << PD2);
		_delay_ms(1000);
		PORTD |=(1 << PD2);
		PORTD &=~(1 << PD1);
		_delay_ms(1000);

		
    }
}


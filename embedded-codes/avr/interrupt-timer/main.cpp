/*
 * interrupt-timer.cpp
 *
 * Created: 09-04-2026 16:00:09
 * Author : hp
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
volatile uint16_t count = 0;

ISR(TIMER0_OVF_vect)
{
	
	if(count >= 976)
	{
		PORTB^=(1<<PB2);
		count = 0;
	}
	else
	{
		count++;
	}
}

void timer0_interrupt()
{
	
	//enable global
	sei();
	//timer0 normal mode
	TCCR0A &=~((1<<WGM00)|(1<<WGM01));
	//CHOOSE PRESCALAR VALUE
	TCCR0B |= ((1<<CS01)|(1<<CS00));
	TCCR0B&=~(1<<CS02);
	//ENABLETO OVERFLOW
	TIMSK0 |=(1<<TOIE0);
}


int main(void)
{
    /* Replace with your application code */
	timer0_interrupt();
	DDRB |= ((1<<DDB1)|(1<<DDB2));
	PORTB &=~((1<<PB1)|(1<<PB2));
    while (1) 
    {
		PORTB |=(1<<PB1);
    }
}


/*
 * TIMER-CTCMODE-INTERRUPT.cpp
 *
 * Created: 09-04-2026 16:13:16
 * Author : hp
 */
 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
volatile uint16_t count = 0;

ISR(TIMER0_COMPA_vect)
{
	
	if(count >= 1000)
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
	//timer0 CTC mode
	TCCR0A |=(1<<WGM01);
	TCCR0A &=~(1<<WGM00);
	TCCR0B &=~(1<<WGM02);
	
	//PRESCALAR64
	TCCR0B |=((1<< CS01)|(1<<CS00));
	TCCR0B &=~(1<<CS02);
	
	//COMPARE VALUE 
	OCR0A =249;
	
	// ENAB;E COMPARE INTERRUPT
	TIMSK0 |=(1<<OCIE0A);
	
	

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



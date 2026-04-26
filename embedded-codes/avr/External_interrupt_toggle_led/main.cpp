/*
 * external_interrupt_led_toggle.cpp
 *
 * Created: 26-04-2026 12:48:05
 * Author : hp
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
#define LED PB5

ISR(INT0_vect)
{
PORTB^=(1<<LED);	
}

void gpio_init()
{
	DDRB |=(1<<DDB5);
	
}

void external_interrupt_config()
{
	DDRD &=~(1<<DDD2);
	
	EIMSK |=(1<<INT0);
	EICRA |= ((1<<ISC01)| (1<<ISC00));
	sei();
}
int main(void)
{
    /* Replace with your application code */
	gpio_init();
	external_interrupt_config();
    while (1) 
    {
    }
}




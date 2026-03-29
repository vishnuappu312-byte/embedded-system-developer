/*
 * led_blink_T0.cpp
 *
 * Created: 23-03-2026 20:50:40
 * Author : hp
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
void delay1s(void)
{
/*	
with out prescalar
    //LOAD
	TCNT0 = 0;
	//MODE
	TCCR0A &=~((1<<WGM01) | (1<<WGM00));
	TCCR0B &=~(1<<WGM12);
	//PRESCALAR
	TCCR0B &=~((1 << CS01) | (1<<CS02));
	//PRESCALAR1
	TCCR0B |= (1<<CS00);
	
	// FCLK = 16MHz = 16000000
	//1 TICK = 1/16000000 = 62.5ns
	//256 ticks = 256*62.5 = 16 micro second = 1 overflow = 16*10^-6
	//for 1 sec = 1/16 micro sec = 62500 overflow 1 sec delay
	
	for(uint16_t i=0; i<62500;i++)
	{
		
		while(!(TIFR0 &(1<<TOV0)));
		TIFR0 |=(1<<TIFR0);
	}
	*/


/*
with prescalar
fclk = 16000000
prescalar =  1024
tick-time = 16000000/1024 = 15625
1 tick = 1/15625 = 64
256 ticks = 256 * 64 = 16384
1 sec = 1/16384 = 61overflows





*/
TCNT0 = 0;
//MODE
TCCR0A &=~((1<<WGM01) | (1<<WGM00));
TCCR0B &=~(1<<WGM12);
//PRESCALAR
TCCR0B &=~((1 << CS01));
TCCR0B |=((1 << CS02));
//PRESCALAR1
TCCR0B |= (1<<CS00);
	for(uint16_t i=0; i<61;i++)
	{
		
		while(!(TIFR0 &(1<<TOV0)));
		TIFR0 |=(1<<TIFR0);
	}
}
int main(void)
{
    /* Replace with your application code */
	
	DDRB |=(1<<DDB2);
	PORTB &=(1<<PB2);
    while (1) 
    {
		PORTB^=(1<<PB2);
		delay1s();
		
		
    }
}


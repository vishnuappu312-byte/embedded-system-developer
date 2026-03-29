/*
 * timer-ctc-mode.cpp
 *
 * Created: 29-03-2026 11:44:23
 * Author : hp
 */ 
#define  F_CPU 16000000UL
#include <avr/io.h>

void delay(unsigned int ms)
{
	    /* Replace with your application code */
	    //STEP-1 LOAD INITIAL VALUE
	    TCNT0 = 0;
	    //SET CTC MODE
	    TCCR0A |=(1<<WGM01);
	    TCCR0A &=~(1<<WGM00);
	    //SET PRESCALAR 64
	    TCCR0B |=((1<<CS01) |(1<<CS00));
	    TCCR0B &=~(1<<CS02);
	    OCR0A = 249;
	    for(uint16_t i = 0; i<ms;i++)
	    {
		    while(!(TIFR0 & (1<<OCF0A)));
		    TIFR0 |=(1<<OCF0A);
	    }
}
int main(void)
{

	DDRB |=(1<<DDB2);
	PORTB &=(1<<PB2);
	while (1)
	{
		PORTB^=(1<<PB2);
		delay(1000);
		
		
	}
}
/*
METHOD 1
fclk = 16000000
prescalar = 64
newfrq = 16000000/64 = 25000
1 tick = 1/25000 = 4sec
1ms = 1000/4 = 250
250 - 1 = 249 
this 249 load OCR0A

nb:if we create 2ms 3ms 4ms ... the loading value under 255 so we change prescalar value and check

METHOD 2

fclk = 16000000
prescalr = 64
OCR0A = freq/((prescalr value *frequency) - 1)

1ms = 1*10^-3
freq = 1/timeperiod
    = 1/10^-3
	
CASE =1ms
OCR0A = 16000000 /(64*1000) - 1
 = 249
 
 case = 2ms 
 OCR0A = 16000000/(128*500)-1
 = 249
 
 
 nb: change prescalar bcz of value become under 255



*/

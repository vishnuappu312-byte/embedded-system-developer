/*
 * INPUT_BUTTON_PRESS.cpp
 *
 * Created: 22-03-2026 16:29:54
 * Author : hp
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    /* Replace with your application code */
	DDRD &=~(1<<DDD4);
	DDRC |=(1<<DDC1);
	
    while (1) 
    {
		if(PIND &(1<<PIND4))
		{
			
			PORTC |= (1<<PC1);
		}
		else
		{
			PORTC &=~(1<<PC1);
		}
}
}


/*
 * LED_BLINK_PULLUP.cpp
 *
 * Created: 22-03-2026 16:44:07
 * Author : hp
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    /* Replace with your application code */
	DDRD &=~(1<<DDD2);
	PORTD |=(1<<PD2); //PULL UP
	DDRC |=(1<<DDC2);
	
    while (1) 
    {
// 		if(!(PIND & (1<<PIND2)))
// 		
// 		{
// 			
// 			PORTC |=(1<<PC2);
// 		}
// 		else
// 		{
// 			PORTC &=~(1<<PC2);
// 		}


              if(!(PIND & (1<<PIND2)))
			  
			  {
				  PORTC ^=(1<<PC2);
				  while(!(PIND & (1<<PIND2)));
				  
			  }
    }
}


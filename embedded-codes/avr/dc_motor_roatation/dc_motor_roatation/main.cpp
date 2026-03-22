/*
 * dc_motor_roatation.cpp
 *
 * Created: 22-03-2026 18:04:56
 * Author : hp
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

#define BTN_START PD2   // Pull-up
#define BTN_DIR   PD3   // Pull-down

#define OUT1 PB0
#define OUT2 PB1

uint8_t  motoron = 0;
uint8_t  direction = 0;


int main(void)
{
	// Outputs
	DDRB |= (1 << OUT1) | (1 << OUT2);

	// Inputs
	DDRD &= ~((1 << BTN_START) | (1 << BTN_DIR));

	// Enable pull-up for BTN_START
	PORTD |= (1 << BTN_START);


	while (1)
	{
		
		       if (PIND & (1 << BTN_DIR))
		       {
				   direction ^=1;
				   
				   while(PIND & (1 << BTN_DIR));
				
			   }
			   		
			   		if (!(PIND & (1 << BTN_START)))
			   		{
				   		motoron^=1;
				   		
				   		while(!(PIND & (1 << BTN_START)));
				   		
			   		}
					           if (motoron)
					           {
						           if (direction == 0)
						           {
							           // Forward
							           PORTB |= (1 << OUT1);
							           PORTB &= ~(1 << OUT2);
						           }
						           else
						           {
							           // Reverse
							           PORTB &= ~(1 << OUT1);
							           PORTB |= (1 << OUT2);
						           }
					           }
					           else
					           {
						           // Stop
						           PORTB &= ~((1 << OUT1) | (1 << OUT2));
					           }
					   

					   
					   
		
	}
	}

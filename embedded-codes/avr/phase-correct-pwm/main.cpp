/*
 * phase-correct-pwm.cpp
 *
 * Created: 01-04-2026 00:03:44
 * Author : hp
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

void phasecorrectpwm()
{
	
	// config dd6
	DDRD |= (1<<DDD6);
	//SET phase correct PWM MODE
	
	TCCR0A |=(1<<WGM00);
	TCCR0A &=~(1<<WGM01);
	TCCR0B &=~ (1<<WGM02);

	//CHOSSING NONINVERTING MODE // high -> low transition
	//choosing inverting mode // low->high transition
	TCCR0A |=(1<<COM0A1);
	TCCR0A &=~(1<<COM0A0);
	// PHASE CORRECT  PWM MODE FCLK /(N*510)
	//FCLK = 16000000
	//N = 8
	//16000000/8*510 = 3921 ~= 3.9KHz
	//SET PRESCALAR
	TCCR0B |= ((1<<CS01));
	
	// SETTING OCRA VALUE 255*50/100 = 128
	OCR0A = 0;
}

int main(void)
{
	/* Replace with your application code */
	phasecorrectpwm();
	
           DDRD|=((1<<DDD1)|(1<<DDD2));	
	
	while (1)
	{
		
				PORTD |=(1 << PD1);
				PORTD &=~(1 << PD2);
				//speed up
				for(uint16_t i = 0; i <=255; i++)
				{
					OCR0A = i;
					_delay_ms(10);
				}
				//speed down 
						for(uint16_t i = 255; i >=0; i--)
						{
							OCR0A = i;
							_delay_ms(10);
						}
				
		
	}
}



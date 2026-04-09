/*
 * motor-ctl-switch.cpp
 *
 * Created: 09-04-2026 15:33:30
 * Author : hp
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
uint8_t duty_steps[5] = {0,64,128,192,255};
	uint8_t index = 0;

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

void button_init()
{
	DDRD &=~(1<<DDD3);
	PORTD |=(1<<PD3); //PULL-UP
	
}

int main(void)
{
	/* Replace with your application code */
	phasecorrectpwm();
	
	DDRD|=((1<<DDD1)|(1<<DDD2));
	button_init();
	
	while (1)
	{
		
		PORTD |=(1 << PD1);
		PORTD &=~(1 << PD2);
		
		 if(!(PIND & (1<<PIND3)))
		{
			_delay_ms(50);
			
			index++;
			if(index >=5)
			{
				index = 0;
			}
			OCR0A = duty_steps[index];
			  while(!(PIND & (1<<PIND3)));
			  _delay_ms(50);
			
			
		}
		
		
		
		
	}
}





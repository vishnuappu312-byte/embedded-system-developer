/*
 * fast-pwm.cpp
 *
 * Created: 31-03-2026 21:50:24
 * Author : hp
 */ 
#define  F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

void fastpwm()
{
	
	// config dd6
	DDRD |= (1<<DDD6);
	//SET FAST PWM MODE
	TCCR0A |=((1<<WGM00) | (1<<WGM01));
	TCCR0B &=~(1<<WGM02);
	//CHOSSING NONINVERTING MODE // high -> low transition
	//choosing inverting mode // low->high transition 
	TCCR0A |=(1<<COM0A1);
	TCCR0A &=~(1<<COM0A0);
	// FAST PWM MODE FCLK /(N*256)
	//FCLK = 16000000
	//N = 64
	//16000000/(64*256) = 976 ~=1KHz
	//SET PRESCALAR 
	TCCR0B |= ((1<<CS01)|(1<<CS00));
	// SETTING OCRA VALUE 256*50/100 = 128
	OCR0A = 0;
}

int main(void)
{
    /* Replace with your application code */
	fastpwm();
    while (1) 
    {
		for(uint16_t i =0; i<=255;i++)
		{
			OCR0A = i;
			_delay_ms(20);
		}
    }
}


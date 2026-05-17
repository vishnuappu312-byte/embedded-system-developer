/*
 * adc_initial.c
 *
 * Created: 16-05-2026 14:23:07
 * Author : hp
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include "adc.h"


int main(void)
{
    /* Replace with your application code */
	adc_init();
	DDRD |= ((1<<DDD0)|(1<<DDD1)|(1<<DDD2)|(1<<DDD3)|(1<<DDD4));
	
    while (1) 
    {
		uint16_t adc_value = read_adc(0);
		if(adc_value < 100)
		{
			PORTD = 0x00;
		}
		else if(adc_value <=204)
		{
			PORTD = 0x01;
		}
				else if(adc_value <=409)
				{
					PORTD = 0x03;
				}
						else if(adc_value <=614)
						{
							PORTD = 0x07;
						}
								else if(adc_value <=819)
								{
									PORTD = 0x0f;
								}
								else
								{
									PORTD = 0x1f;
								}
    }
	return 0;
}


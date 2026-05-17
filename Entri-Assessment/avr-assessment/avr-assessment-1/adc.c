/*
 * adc.c
 *
 * Created: 16-05-2026 15:05:52
 *  Author: hp
 */ 


#include "adc.h"
#include <avr/io.h>


void adc_init(void){
	
	//ADMUX |= ((1<<REFS1)|(1<<REFS0));
	 ADMUX = (1 << REFS0);
	
	ADCSRA |= (1<<ADEN);
	ADCSRA |=((1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0));
	
	
}

uint16_t read_adc(uint16_t channel)
{
	
	channel &=0x07;
	//to clear the previous channel and update the register with new value 
	ADMUX = (ADMUX & 0xF0) | channel;
	
	ADCSRA |= (1<<ADSC);
	while(ADCSRA & (1<<ADSC));
	return ADC;
	
}


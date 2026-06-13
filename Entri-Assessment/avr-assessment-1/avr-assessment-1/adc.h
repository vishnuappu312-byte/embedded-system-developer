/*
 * adc.h
 *
 * Created: 16-05-2026 15:06:25
 *  Author: hp
 */ 


#ifndef ADC_H_
#define ADC_H_

//#define F_CPU 16000000UL
#include <avr/io.h>
#include <stdint.h>

void adc_init(void);
uint16_t read_adc(uint16_t channel);


#endif /* ADC_H_ */
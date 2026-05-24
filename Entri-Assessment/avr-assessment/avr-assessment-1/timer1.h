/*
 * timer0.h
 *
 * Created: 17-05-2026 06:15:05
 *  Author: hp
 */ 
#ifndef TIMER_H_
#define TIMER_H_

//#define F_CPU 16000000UL

#include <avr/io.h>
#include <stdint.h>

void timer1_init(uint16_t ms);

#endif /* TIMER_H_ */
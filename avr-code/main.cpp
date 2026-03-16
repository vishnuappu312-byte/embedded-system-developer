/*
 * blink.cpp
 *
 * Created: 16-03-2026 16:08:22
 * Author : hp
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>  

int main(void)
{
	DDRD = 0b11111111;
    /* Replace with your application code */
    while (1) 
    {
		PORTD = 0b00010101;
		_delay_ms(1000);
		PORTD = 0b00101010;
		_delay_ms(1000);
    }
}


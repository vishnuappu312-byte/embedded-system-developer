/*
 * traffic_light.cpp
 *
 * Created: 22-03-2026 18:00:47
 * Author : hp
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

//  RED ON
void red()
{
	PORTD &= ~((1 << PD2) | (1 << PD3)); // OFF Green, Yellow
	PORTD |= (1 << PD1);                 // ON Red
	_delay_ms(3000);
}

//GREEN ON
void green()
{
	PORTD &= ~((1 << PD1) | (1 << PD3)); // OFF Red, Yellow
	PORTD |= (1 << PD2);                 // ON Green
	_delay_ms(3000);
}

//YELLOW ON
void yellow()
{
	PORTD &= ~((1 << PD1) | (1 << PD2)); // OFF Red, Green
	PORTD |= (1 << PD3);                 // ON Yellow
	_delay_ms(1000);
}

int main(void)
{
	DDRD |= (1 << PD1) | (1 << PD2) | (1 << PD3); // outputs

	while (1)
	{
		red();
		green();
		yellow();
	}
}


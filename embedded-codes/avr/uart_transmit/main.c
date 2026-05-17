/*
 * uart_transmit.c
 *
 * Created: 16-05-2026 22:57:07
 * Author : hp
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include "uart.h"
#include <util/delay.h>

int main(void)
{
    /* Replace with your application code */
	
	uart_init();
	char data = 'h';
    while (1) 
    {
		uart_transmit(data);
		uart_transmit('\n');
		_delay_ms(500);
    }
}


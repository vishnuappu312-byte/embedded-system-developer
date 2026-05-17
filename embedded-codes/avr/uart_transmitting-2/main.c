/*
 * uart_transmitting-2.c
 *
 * Created: 17-05-2026 02:27:04
 * Author : hp
 */ 

#define F_CPU 16000000UL
#include "uart.h"
#include <avr/io.h>
#include <stdlib.h>

int main(void)
{
	UART_init();

	UART_TxChar('H');
	
	UART_String("\r\n");

	UART_String("Hello Vishnu\r\n");

	UART_TxHex(0x2A);

	UART_TxNumber(1234);

	UART_String("\r\n");

	while (1)
	{

	}
}



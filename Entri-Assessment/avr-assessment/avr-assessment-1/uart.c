/*
 * uart.c
 *
 * Created: 17-05-2026 02:28:36
 *  Author: hp
 */ 

#include "uart.h"
#include <stdlib.h>

void UART_init(void)
{
	UBRR0H = (unsigned char)(UBRR_VALUE>>8); // 103 -> 0000 0000 0110 0111 >> 8 = 0000 0000 
	UBRR0L = (unsigned char)UBRR_VALUE; 
	
	UCSR0B = (1<<TXEN0);
	UCSR0C = ((1 << UCSZ01)|(1<< UCSZ00));
}
void UART_TxChar(char data)
{
	while(!(UCSR0A&(1<<UDRE0)));
	UDR0 =  data;
	
}

void UART_String(const char *str)
{
	
	while(*str)
	{
		UART_TxChar(*str++);
	}
}

void UART_TxHex(uint8_t value)
{
	const char hexChars[] = "0123456789ABCDEF";
	char hex[5];
	hex[0] = hexChars[(value >> 4) & 0x0f];
	hex[1] = hexChars[value & 0x0f];
	hex[2] = '\r';
	hex[3] = '\n';
	hex[4] = '\0';
	UART_String("0x");
	UART_String(hex);
}

void UART_TxNumber(uint32_t num)
{
	
	char buffer[12];
	ltoa(num,buffer,10);
	UART_String(buffer);
}

void UART_TxFloat(float value)
{
	char buffer[10];

	dtostrf(value,4,2,buffer);

	UART_String(buffer);
}
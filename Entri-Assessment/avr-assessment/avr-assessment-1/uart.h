/*
 * uart.h
 *
 * Created: 17-05-2026 02:28:50
 *  Author: hp
 */ 


#ifndef UART_H_
#define UART_H_

#define F_CPU 16000000UL
#define BAUDRATE 9600

#define UBRR_VALUE ((F_CPU / (16UL * BAUDRATE)) - 1)

#include <avr/io.h>
#include <stdint.h>
#include <stdlib.h>

void UART_init(void);

void UART_TxChar(char data);

void UART_String(const char *str);

void UART_TxHex(uint8_t value);

void UART_TxNumber(uint32_t num);

void UART_TxFloat(float value);

#endif /* UART_H_ */
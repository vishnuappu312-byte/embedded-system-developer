/*
 * avr-assessment-1.c
 *
 * Created: 17-05-2026 04:09:18
 * Author : hp
 */ 

#define F_CPU 16000000UL

#include <avr/io.h>
#include <stdlib.h>

#include "lcd.h"
#include "adc.h"
#include "uart.h"
#include "timer0.h"



int main(void)
{
	uint16_t adc_value;
	float temperature;

	DDRB |= (1 << PB0);   // D8 LED output

	lcd_init();

	adc_init();

	UART_init();

	lcd_set_cursor(0,0);
	lcd_print("TEMP:");

	while (1)
	{
		// Read ADC0
		adc_value = read_adc(0);

		// Convert to Celsius
		temperature = (adc_value * 5.0 * 100.0) / 1024.0;

		// LCD Display
		lcd_set_cursor(0,6);

		lcd_print("      ");

		lcd_set_cursor(0,6);

		lcd_print_float(temperature);

		lcd_data(223);

		lcd_data('C');

		// UART Output
		UART_String("Temperature = ");

		char buffer[10];

		UART_TxFloat(temperature);

		UART_String(" C\r\n");

		// LED Blink
		PORTB ^= (1 << PB0);

		// Custom delay
	   timer0_delay_ms(1000);
	}
}


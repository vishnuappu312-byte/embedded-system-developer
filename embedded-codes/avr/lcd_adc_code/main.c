/*
 * lcd_adc_code.c
 *
 * Created: 16-05-2026 17:36:46
 * Author : hp
 */ 

#define F_CPU 16000000UL
#include "adc.h"
#include "lcd.h"
#include <util/delay.h>
#include <avr/io.h>

int main(void)
{
	uint16_t adc_value;

	lcd_init();

	adc_init();

	_delay_ms(100);

	lcd_set_cursor(0,0);

	lcd_print("ADC:");

	while (1)
	{
		adc_value = read_adc(0);

		lcd_set_cursor(0,5);

		lcd_print("    ");

		lcd_set_cursor(0,5);

		lcd_print_uint16(adc_value);

		_delay_ms(500);
	}
}
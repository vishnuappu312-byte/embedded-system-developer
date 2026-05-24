/*
 * avr-assessment-1.c
 *
 * Created: 17-05-2026 04:09:18
 * Author : hp
 */ 

#define F_CPU 16000000UL

#include <avr/io.h>
#include <stdlib.h>
#include <avr/interrupt.h>


#include "lcd.h"
#include "adc.h"
#include "uart.h"
#include "timer1.h"

volatile uint8_t one_sec_flag = 0;

ISR(TIMER1_COMPA_vect)

{
   static uint8_t count = 0;


   PORTB ^= (1 << PB0);
   count++;
   if(count >= 2) // Toggle every 1 second (2 * 500 ms)
   {
	   one_sec_flag = 1;
	   count = 0;
   }

}


int main(void)
{
	uint16_t adc_value;
	float temperature;

	DDRB |= (1 << PB0);   // D8 LED output

	lcd_init();

	adc_init();

	UART_init();
    // Custom delay
	timer1_init(500); // 500 ms delay

	sei();


	lcd_set_cursor(0,0);
	lcd_print("TEMPERATURE:");

	while (1)
	{
		if(one_sec_flag)
		{
		one_sec_flag = 0;
		
		// Read ADC0
		adc_value = read_adc(0);

		// Convert to Celsius
		temperature = (adc_value * 5.0 * 100.0) / 1024.0;

		// LCD Display
		lcd_set_cursor(1,0);

		lcd_print("      ");

		lcd_set_cursor(1,0);

		lcd_print_float(temperature);

		lcd_data(223); // decimal 223 is the degree symbol in the LCD character set

		lcd_data('C');

		// UART Output
		UART_String("Temperature = ");

		UART_TxFloat(temperature);

		UART_String(" C\r\n");

		// LED Blink
		//PORTB ^= (1 << PB0);


	}
   }
}


#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
#include "uart.h"
#include "spi.h"
#include "bmp280.h"
#include "lcd.h"







int main()

{

  UART_init();
  spi_init();
  bmp280_init();
  read_chipID();
      read_calibration_data();   
          lcd_init();

                  lcd_clear();


        lcd_set_cursor(0,0);

        lcd_print("TEMP:");

  while(1)
  { 

int32_t raw_temperature = read_raw_temperature_value();


  



UART_String("Raw Temperature Value:");
UART_TxNumber(raw_temperature);
UART_String("\r\n");


int32_t actual_temperature = bmp280_compensation_calculation(raw_temperature);//2578 -> 25.78c


int32_t whole_deg = actual_temperature / 100;
int32_t fraction_deg = actual_temperature % 100;

if(fraction_deg < 0)

{

fraction_deg = -fraction_deg;


}

UART_String("Temperature in C : ");
UART_TxNumber(whole_deg);
UART_String(".");

if(fraction_deg < 10)

{

UART_String("0");


}

UART_TxNumber(fraction_deg);
UART_String("\r\n");

   lcd_set_cursor(1,0);

    float temp_c = actual_temperature / 100.0;

    lcd_print_float(temp_c);

    lcd_data(0xDF);

    lcd_data('C');

_delay_ms(1000);



  }

 return 0;
}
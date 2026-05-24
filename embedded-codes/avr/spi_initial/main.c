#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
#include "uart.h"
#include "spi.h"
#include "bmp280.h"
int main()

{

  UART_init();
  spi_init();
  bmp280_init();
  read_chipID();

  while (1)
  {

    int32_t raw_temperature = read_raw_temperature_value();

    UART_String("Raw Temperature Value:");
    UART_TxNumber(raw_temperature);
    UART_String("\r\n");
    _delay_ms(1000);
  }

  return 0;
}

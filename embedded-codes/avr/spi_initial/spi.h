
#ifndef SPI_H_
#define SPI_H_
#include <avr/io.h>

#define SPI_DDR DDRB
#define SPI_PORT PORTB

#define MOSI PORTB3
#define MISO PORTB4
#define SCK PORTB5
#define SS PORTB2

#define SLAVE_SELECT PORTB2

void spi_init();
uint8_t spi_transmit(uint8_t data);
void slave_select_low();
void slave_select_high();

#endif


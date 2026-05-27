#include "spi.h"



void spi_init()
{


  SPI_DDR |=((1<<MOSI)|(1<<SCK)|(1<<SS));
  SPI_DDR &=~(1<<MISO);
  SPCR = (1 << SPE) | (1 << MSTR) | (1 << SPR0);

  SPI_PORT |=(1<< SLAVE_SELECT);


}

uint8_t spi_transmit(uint8_t data)

{


  SPDR = data;
  while(!(SPSR & (1<<SPIF)));
  return SPDR;
}

void slave_select_high()
{

  SPI_PORT |=(1<<SLAVE_SELECT);
}

void slave_select_low()
{
    SPI_PORT &=~(1<<SLAVE_SELECT);

}

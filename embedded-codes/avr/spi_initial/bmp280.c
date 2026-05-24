

#include "bmp280.h"
#include <util/delay.h>
void read_chipID()
{
  uint8_t chip_ID;
  slave_select_low();

  spi_transmit(0xD0 | 0x80); // read mode msb = 1 readmode 0 = write mode
  chip_ID = spi_transmit(0x00);
  slave_select_high();
  UART_String("chip ID:");
  UART_TxHex(chip_ID);
  UART_String("\r\n");

}

void bmp280_init()

{

  slave_select_low();
  spi_transmit(0xF4 & 0x7F);// clear the address result = 0111 0100 choose the register in write mode 
  // 0xF4 control register noe write mode 8 bit data

  /*

  7-5 bits : temperature over sampling (010) = temperature oversampling *2
  4-2 bits: pressure (000) ignore pressure
  1-0 bits: mode (11) normal mode
  0x43 -> 0100 0011 
  */
  spi_transmit(0x43);// normal mode

  slave_select_high();
  _delay_ms(20);
}

int32_t read_raw_temperature_value(void)

{
//20 bit data
uint8_t msb , lsb , xlsb;
int32_t raw_temp;
slave_select_low();
spi_transmit(0xFA | 0x80);//to read value from 0xFA, 0xFB , 0xFC frequently

msb = spi_transmit(0x00);
lsb = spi_transmit(0x00);
xlsb = spi_transmit(0x00);
    slave_select_high();
raw_temp = ((int32_t)msb<<12 | (int32_t)lsb << 4 | (int32_t)xlsb >> 4);

/*

// msb = "1111 1010" : lsb = " 1000 1111" xlsb : 1010 0111
// after shifting :
// msb = 0000 0000
// lsb = 1111 0000
// xlsb =     1010

/* 
							msb  : 1111 1011
							lsb  : 1000 1001
							xlsb : 1001 1010
							
							1111 1011 0000 0000 0000 | msb << 12
									  1000 1001 0000 | lsb << 4
									            1001 | xlsb >> 4
						---------------------------------
						    1111 1011 1000 1001 1001	*/
/*
11111011 00000000 0000
00000000 10001001 0000
00000000 00000000 1001
--------------------------------
11111011 10001001 1001

        */                
    return raw_temp;



}
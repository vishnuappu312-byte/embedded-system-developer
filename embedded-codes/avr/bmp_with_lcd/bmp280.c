

#include "bmp280.h"
#include <util/delay.h>



static uint16_t dig_T1;
static int16_t dig_T2;
static int16_t dig_T3;
static int32_t t_fine;

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

// void bmp280_init()
// {
//     slave_select_low();

//     /*
//     0xF4 = ctrl_meas register

//     In SPI:
//     MSB = 0 -> write operation

//     0xF4 = 1111 0100
//     0x7F = 0111 1111

//     AND operation:

//         1111 0100
//     &   0111 1111
//     ----------------
//         0111 0100 = 0x74

//     Result:
//     Select ctrl_meas register in write mode
//     */

//     spi_transmit(0xF4 & 0x7F);

//     /*
//     ctrl_meas register format:

//     7 6 5   4 3 2   1 0
//     osrs_t  osrs_p  mode

//     osrs_t = temperature oversampling
//     osrs_p = pressure oversampling
//     mode   = sensor mode

//     0x43 = 0100 0011

//     010 -> temperature oversampling x2
//     000 -> pressure measurement skipped
//     11  -> normal mode

//     Result:
//     Temperature ADC enabled
//     Pressure ADC disabled
//     Continuous temperature measurement mode
//     */

//     spi_transmit(0x27);

//     slave_select_high();

//     _delay_ms(100);
// }

void bmp280_init()
{
// BMP280 CONFIG REGISTER (0xF5)

/*
Register format:

7 6 5   4 3 2    1    0
t_sb    filter   res  spi3w_en

t_sb      = standby time between measurements
filter    = IIR filter setting
spi3w_en  = SPI mode selection

0 = normal 4-wire SPI
1 = 3-wire SPI
*/


slave_select_low();

// write operation to config register (0xF5)
spi_transmit(0xF5 & 0x7F);

/*

0xA0 = 1010 0000

Bits explanation:

101 -> standby time setting
000 -> filter OFF
0   -> reserved
0   -> 4-wire SPI enabled

Final:
BMP280 works in normal 4-wire SPI mode
(MOSI, MISO, SCK, CS)

*/

/*
0xF5 = 1111 0101   -> BMP280 config register address

In SPI communication:

MSB = 0 -> write operation
MSB = 1 -> read operation

0x7F = 0111 1111

AND operation:

    1111 0101   (0xF5)
&   0111 1111   (0x7F)
-------------------
    0111 0101   (0x75)

Result:
MSB becomes 0 -> write mode

So:

spi_transmit(0xF5 & 0x7F);

means:
"Select BMP280 register 0xF5 in write mode"
*/

spi_transmit(0xA0);

slave_select_high();

    // ctrl_meas register
    slave_select_low();

    spi_transmit(0xF4 & 0x7F);

    /*
    temp oversampling = x2
    pressure skipped
    normal mode

    0100 0011 = 0x43
    */

    spi_transmit(0x43);

    slave_select_high();

    _delay_ms(100);
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




void read_calibration_data(void)
{

uint8_t data[6];

slave_select_low();

spi_transmit(0x88 | 0x80); // 0x888 is the register from which the continous data burst should start , 0x88 -> 0x89 , 0x8a..

for(uint8_t i = 0; i < 6;++i)
{

data[i] = spi_transmit(0x00);
}
slave_select_high();

//data[0] = lsb , data[1] = msb , data[2] = lsb , data[3] = msb , data[4] = lsb , data[5] = msb combine the data

dig_T1 = (uint16_t)((data[1] << 8) | (data[0])); 
//msb: 0x73  0111 0011
//lsb: 0x1a  0001 1010 

//0111 0011 -> 0000 0000   (msb << 8)
//0000 0000    0001 1010 (lsb)
//0111 0011 0001 1010

dig_T2 = (int16_t)((data[3] << 8) | (data[2])); 
dig_T3 = (int16_t)((data[5] << 8) | (data[4])); 





}

int32_t bmp280_compensation_calculation(int32_t adc_value)

{

  int32_t var1, var2, T;
  /* >> 3 = 8/8 | << 1 = multiply by 2 | >> 11 = divide by 48 |  */  // 1100 >> 3 0001

var1 = ((((adc_value >> 3) - ((int32_t)dig_T1 << 1))) * ((int32_t)dig_T2)) >> 11; 
/*scaling down by dividing by 16 on adc value then - dig_1 find its square,  >>(divide) << (mul) >> 12 is equal to divide by 4096 mul by dig_T# then divide by 14 16384*/ 
var2 = (((((adc_value >> 4) - ((int32_t)dig_T1)) * ((adc_value >> 4) - ((int32_t)dig_T1))) >> 12) * ((int32_t)dig_T3)) >> 14;

t_fine = var1 + var2;
T = (t_fine * 5 + 128) >> 8;
return T;

}
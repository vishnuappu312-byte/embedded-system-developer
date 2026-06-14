#include "i2c.h"

void i2c_init(void) {
  /* SCL Frequency = 100kHz */

  TWSR = 0x00;         // Prescaler = 1
  TWBR = 72;           // SCL = 100kHz
  TWCR = (1 << TWEN);  // Enable TWI Hardware
}
/*

F_CPU = 16 MHz
SCL = 100 kHz
Prescaler = 1

TWBR = ((16000000 / 100000) - 16) / 2
TWBR = (160 - 16) / 2
TWBR = 72
*/

void i2c_start(void) {

  /*

     TWSTA = 1 -> START
     TWEN  = 1 -> Enable TWI
     TWINT = 1 -> Clear Interrupt Flag



*/


  TWCR = (1 << TWINT) | (1 << TWSTA) | (1 << TWEN);
   while (!(TWCR & (1 << TWINT)));
}

void i2c_stop(void) {

  /*      TWSTO = 1 -> STOP
*/



  TWCR = (1 << TWINT) | (1 << TWSTO) | (1 << TWEN);
}

void i2c_write(uint8_t data) {

  /*
Load Data into TWI Data Register
*/
  TWDR = data;
  TWCR = (1 << TWINT) | (1 << TWEN);
  while (!(TWCR & (1 << TWINT)))
    ;
}

uint8_t i2c_read_ack(void) {
  TWCR = (1 << TWINT) | (1 << TWEN) | (1 << TWEA);
  while (!(TWCR & (1 << TWINT)))
    ;
  return TWDR;
}

uint8_t i2c_read_nack(void) {
  TWCR = (1 << TWINT) | (1 << TWEN);
  while (!(TWCR & (1 << TWINT)))
    ;
  return TWDR;
}
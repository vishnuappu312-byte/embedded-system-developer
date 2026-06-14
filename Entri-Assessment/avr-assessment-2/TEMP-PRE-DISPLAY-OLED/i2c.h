/*
important registers

TWBR = BIT RATE
TWSR = STATUS (PRESCALAR + FLAGS)
TWDR = DATA REGISTER 
TWCR = CONTRL REGISTER
TWAR = SLAVE ADDRESS
SCL frequency = Cpu clock frequency / 16 + 2 (TWBR).(prescalar value)

 OXO8 = START TRANSMITTED
 0X10 = REPEATED START 
 0X18 = SLA + W + ACK 
 0X20 = SLA + W + N ACK 
 0X28 = DATA SEND ACK RECEIVED
 0X30 = DATA SEND NO ACK 
 0X40 = SLA + R , ACK RECEIVED
 0X48 = SLR + R , NO ACK 
 0X50 = DATA RECEIVED , ACK RETURED 
 0X58 = DTA RECEIVED N ACK  

 100KHZ NORMAL FREQUNCY 

  NB : PUT THIS 100 IN THE EQN SO WE CALCULATE THE TWBR AND LOAD THE VALUE



*/

#ifndef I2C_H_
#define I2C_H_

#include <avr/io.h>
#include <stdint.h>

void i2c_init(void);
void i2c_start(void);
void i2c_stop(void);
void i2c_write(uint8_t data);
uint8_t i2c_read_ack(void);
uint8_t i2c_read_nack(void);

#endif
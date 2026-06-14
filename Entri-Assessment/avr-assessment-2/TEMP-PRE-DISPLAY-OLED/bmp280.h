
#ifndef BMP280_H_

#define BMP280_H_


#include <avr/io.h>
#include "uart.h"
#include <stdint.h>
#include "i2c.h"

void read_chipID();
void bmp280_init();
void read_calibration_data();
int32_t read_raw_temperature_value(void);
int32_t bmp280_compensation_calculation(int32_t adc_value);
int32_t read_raw_pressure_value(void);
uint32_t bmp280_pressure_compensation(int32_t adc_P);




#endif
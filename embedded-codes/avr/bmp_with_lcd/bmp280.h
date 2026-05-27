
#ifndef BMP280_H_

#define BMP280_H_


#include <avr/io.h>
#include "spi.h"
#include "uart.h"
#include "bmp280.h"
void read_chipID();
void bmp280_init();
void read_calibration_data();
int32_t read_raw_temperature_value(void);
int32_t bmp280_compensation_calculation(int32_t adc_value);








#endif
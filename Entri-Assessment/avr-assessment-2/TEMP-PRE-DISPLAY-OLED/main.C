#include <avr/io.h>
#include <util/delay.h>
#include <stdint.h>

#include "uart.h"
#include "i2c.h"
#include "bmp280.h"
#include "oled.h"
#include "font.h"

int32_t raw_temperature;
int32_t actual_temperature;
int32_t raw_pressure;
uint32_t pressure;
int32_t whole_deg;
int32_t fraction_deg;
uint32_t pressure_hpa;
uint32_t pressure_decimal;

int main(void) {
  UART_init();
  i2c_init();
  bmp280_init();
  read_chipID();
  read_calibration_data();
  oled_clear();
  while (1) {
    /* Read Raw Values */
    raw_temperature = read_raw_temperature_value();
    raw_pressure = read_raw_pressure_value();
    /* Compensation */
    actual_temperature =bmp280_compensation_calculation(raw_temperature);
    pressure =bmp280_pressure_compensation(raw_pressure);

 /* Convert Pressure to hPa */
    pressure_hpa = pressure / 100;
    pressure_decimal = pressure % 100;

    /* Split Temperature */
    whole_deg = actual_temperature / 100;
    fraction_deg = actual_temperature % 100;

    if (fraction_deg < 0) {
      fraction_deg = -fraction_deg;
    }

    UART_String("\r\n====================\r\n");

    UART_String("Raw Temp ADC : ");
    UART_TxNumber(raw_temperature);
    UART_String("\r\n");

    UART_String("Raw Press ADC: ");
    UART_TxNumber(raw_pressure);
    UART_String("\r\n");

    UART_String("Temperature  : ");
    UART_TxNumber(whole_deg);
    UART_String(".");

    if (fraction_deg < 10) {
      UART_String("0");
    }

    UART_TxNumber(fraction_deg);
    UART_String(" C\r\n");

    UART_String("Pressure     : ");
    UART_TxNumber(pressure_hpa);
    UART_String(".");

    if (pressure_decimal < 10) {
      UART_String("0");
    }

    UART_TxNumber(pressure_decimal);
    UART_String(" hPa\r\n");

    /* Temperature */

    oled_set_cursor(0, 0);
    oled_print("Temp:       ");

    oled_set_cursor(0, 36);

    oled_print_uint16(whole_deg);
    oled_print(".");

    if (fraction_deg < 10) {
      oled_print("0");
    }

    oled_print_uint16(fraction_deg);
    oled_print(" C");

    /* Pressure */

    oled_set_cursor(2, 0);
    oled_print("P:            ");

    oled_set_cursor(2, 12);

    oled_print_uint32(pressure_hpa);
    oled_print(".");

    if (pressure_decimal < 10) {
      oled_print("0");
    }

    oled_print_uint32(pressure_decimal);
    oled_print("hPa");

    _delay_ms(1000);
  }
}

/*
BMP280 I2C ADDRESS: 0x76 OR 0x77
OLED I2C ADDRESS: 0x3C OR 0x3D

HARDWARE CONNECTIONS:
BMP280 VDD -> 3.3V
BMP280 GND -> GND
BMP280 SDA -> PB0 (Arduino A4)
BMP280 SCL -> PB2 (Arduino A5)

OLED VDD -> 3.3V
OLED GND -> GND
OLED SDA -> PB0 (Arduino A4)
OLED SCL -> PB2 (Arduino A5)

SPECIFICATIONS:
- BMP280: I2C, 0x76 or 0x77
- OLED: I2C, 0x3C or 0x3D
- UART: 9600 baud
- F_CPU: 16 MHz

RESOLUTION:
- Temperature: 0.01°C
- Pressure: 0.01 hPa



*/


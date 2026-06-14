#define F_CPU 16000000UL

#include <avr/io.h>
#include <stdint.h>

#include "adc.h"
#include "pwm.h"
uint16_t adc_value = 0;
uint8_t pwm_value = 0;

uint16_t read_potentiometer(void) {
  return read_adc(0);  // ADC Channel 0
}

uint8_t scale_to_pwm(uint16_t adc_value) {
  return ((uint32_t)adc_value * 255) / 1023;  // matching adc value to 255

  //general mapping eqn : Output = (Input × Output Range) / Input Range

}

int main(void) {


  adc_init();
  pwm0_init();

  while (1) {
    adc_value = read_potentiometer();
    pwm_value = scale_to_pwm(adc_value);
    OCR0A = pwm_value;  // update value
  }
}

/*why choose pwm for t0 */
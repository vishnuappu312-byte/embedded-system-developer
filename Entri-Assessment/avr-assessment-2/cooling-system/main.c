
#define F_CPU 16000000UL


#include <avr/io.h>
#include <stdint.h>
#include <util/delay.h>

#include "adc.h"
#include "pwm.h"
#include "interrupt.h"

#define SWITCH PD2
volatile uint8_t flag = 0;
uint16_t temperature;
uint8_t duty;
uint8_t system_state = 0;
uint16_t adc_readings = 0;


ISR(INT0_vect)
{
  flag = 1;
}


uint16_t read_temperature(void)
{
  return read_adc(0);  // LM35 on ADC0
}


uint8_t calculate_speed(uint16_t temp) {
  if (temp < 25) {
    return 64;  // 25%
  } else if (temp < 35) {
    return 128;  // 50%
  } else if (temp < 50) {
    return 192;  // 75%
  } else {
    return 255;  // 100%
  }
}
void motor_control(uint8_t duty) {

  OCR0A = duty;
}

int main(void)
{
  pwm0_init();
  adc_init();

  DDRD &= ~(1 << SWITCH);//switch input
  PORTD |= (1 << SWITCH);// pull up
  interrupt_int();

  while (1)
  {
    if (flag)
    {
      _delay_ms(20);
      system_state ^= 1;
      flag = 0;
    }
    if (system_state)

    {
      adc_readings = read_temperature();
      temperature = (adc_readings * 5.0 * 100.0) / 1024.0;
      duty = calculate_speed(temperature);
      motor_control(duty);
    }
    else
    {
      OCR0A = 0;
    }
  }
}


#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
#include "pwm.h"

#define SWITCH PD2
#define BUTTON_PRESSED (!(PIND & (1 << SWITCH)))

#define DUTY_25 64
#define DUTY_50 128
#define DUTY_75 192
#define DUTY_100 255

uint8_t duty_state = 0;

int main(void) {
  // input set
  DDRD &= ~(1 << SWITCH);
  // Internal Pull-Up
  PORTD |= (1 << SWITCH);
  pwm0_init();
  OCR0A = DUTY_25;
  while (1) {
    if (BUTTON_PRESSED) {
      _delay_ms(20);
      if (BUTTON_PRESSED) {
        duty_state++;
        if (duty_state > 3) {
          duty_state = 0;
        }
        switch (duty_state) {
          case 0:
            OCR0A = DUTY_25;  //25%
            break;
          case 1:
            OCR0A = DUTY_50;  //50%
            break;
          case 2:
            OCR0A = DUTY_75;  //75%
            break;
          case 3:
            OCR0A = DUTY_100;  //100%
            break;
        }
        while (BUTTON_PRESSED)
          ;
        _delay_ms(20);
      }
    }
  }
}

#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
#include <stdint.h>
#include <stdio.h>
#include "lcd.h"

#define SWITCH PD6
#define BUTTON_PRESSED (!(PIND & (1 << SWITCH)))

uint32_t count = 0;

void lcd_display_count(uint32_t value) {
  char buffer[10];

  sprintf(buffer, "%09lu", value);

  lcd_set_cursor(0, 0);
  lcd_print(buffer);
}

int main(void) {
  uint16_t press_time;

  DDRD &= ~(1 << SWITCH);// set button 
  PORTD |= (1 << SWITCH); // pull up 

  lcd_init();
  lcd_clear();
  lcd_display_count(count);

  while (1) {
    if (BUTTON_PRESSED) {
      _delay_ms(20);

      if (BUTTON_PRESSED) {
        press_time = 0;

        while (BUTTON_PRESSED) {
          _delay_ms(10);
          press_time += 10;
          if (press_time >= 2000) {
            count = 0;
            lcd_display_count(count);
            while (BUTTON_PRESSED)
              ;
            _delay_ms(20);
            break;
          }
        }
        if (press_time < 2000) {
          count++;
          if (count > 999999999UL) {
            count = 0;
          }
          lcd_display_count(count);
          while (BUTTON_PRESSED)
            ;
          _delay_ms(20);
        }
      }
    }
  }
}
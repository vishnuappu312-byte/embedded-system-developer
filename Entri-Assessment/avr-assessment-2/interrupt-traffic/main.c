#define F_CPU 16000000UL

#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdint.h>

#include "timer.h"
#include "interrupt.h"

#define GREEN_LED PB0
#define ORANGE_LED PB1
#define RED_LED PB2
#define SWITCH PD2


#define GREEN_STATE 0
#define ORANGE_STATE 1
#define RED_STATE 2

volatile uint8_t sec = 0;
volatile uint8_t emergency_flag = 0;
volatile uint8_t led_state = GREEN_STATE;

ISR(TIMER1_COMPA_vect)

{
  sec++;
}

ISR(INT0_vect)

{
  emergency_flag = 1;
}

void green_on(void)

{
  PORTB |= (1 << GREEN_LED);
  PORTB &= ~((1 << ORANGE_LED) | (1 << RED_LED));
}

void orange_on(void)

{
  PORTB |= (1 << ORANGE_LED);
  PORTB &= ~((1 << GREEN_LED) | (1 << RED_LED));
}

void red_on(void)

{
  PORTB |= (1 << RED_LED);
  PORTB &= ~((1 << GREEN_LED) | (1 << ORANGE_LED));
}

void emergency_green(void) {
  green_on();
  sec = 0;
  while (sec < 10)
    ;
  emergency_flag = 0;
  led_state = GREEN_STATE;
  sec = 0;
}

int main(void) {
  /* LEDs as output */
  DDRB |= (1 << GREEN_LED) | (1 << ORANGE_LED) | (1 << RED_LED);

  /* INT0 switch input */
  DDRD &= ~(1 << SWITCH);

  /* Internal pull-up */
  PORTD |= (1 << SWITCH);

  /* Initial state */
  green_on();

  timer1_init(1000);
  interrupt_int();

  while (1) {
    switch (led_state) {
      case GREEN_STATE:

        if (sec >= 10) {
          if (emergency_flag) {
            emergency_green();
            break;
          }
          orange_on();
          led_state = ORANGE_STATE;
          sec = 0;
        }

        break;

      case ORANGE_STATE:

        if (sec >= 3) {
          if (emergency_flag) {
            emergency_green();

            break;
          }
          red_on();
          led_state = RED_STATE;
          sec = 0;
        }

        break;

      case RED_STATE:

        if (sec >= 10) {
          if (emergency_flag) {
            emergency_green();

            break;
          }

          green_on();

          led_state = GREEN_STATE;

          sec = 0;
        }

        break;
    }
  }
}
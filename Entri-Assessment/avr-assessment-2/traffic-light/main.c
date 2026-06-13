#define F_CPU 16000000UL

#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdint.h>
#include "timer.h"

#define GREEN_LED PB0
#define ORANGE_LED PB1
#define RED_LED PB2


#define GREEN_STATE 0
#define ORANGE_STATE 1
#define RED_STATE 2

volatile uint8_t sec = 0;
volatile uint8_t led_state = GREEN_STATE;

ISR(TIMER1_COMPA_vect)

{

  sec++;
}

int main(void)

{

  DDRB |= (1 << GREEN_LED) | (1 << ORANGE_LED) | (1 << RED_LED);  // set out

  // initisl condition
  PORTB |= (1 << GREEN_LED);

  PORTB &= ~((1 << ORANGE_LED) | (1 << RED_LED));

  timer1_init(1000);  // 1 second interrupt

  while (1)

  {
    if (led_state == GREEN_STATE)

    {
      if (sec >= 10)

      {

        PORTB &= ~(1 << GREEN_LED);
        PORTB |= (1 << ORANGE_LED);
        led_state = ORANGE_STATE;
        sec = 0;
      }
    }
    else if (led_state == ORANGE_STATE)

    {
      if (sec >= 3)

      {
        PORTB &= ~(1 << ORANGE_LED);
        PORTB |= (1 << RED_LED);
        led_state = RED_STATE;
        sec = 0;
      }

    } else if (led_state == RED_STATE) {
      if (sec >= 10) {
        PORTB &= ~(1 << RED_LED);
        PORTB |= (1 << GREEN_LED);
        led_state = GREEN_STATE;
        sec = 0;
      }
    }
  }
}

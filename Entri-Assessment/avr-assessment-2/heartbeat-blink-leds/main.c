#define F_CPU 16000000UL

#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdint.h>
#include "timer_1.h"
#include "timer_2.h"

#define STATUS_LED PB1
#define HEARTBEAT_LED PB2

volatile uint8_t t2_tick = 0;

ISR(TIMER1_COMPA_vect)  // 2sec

{

  PORTB ^= (1 << STATUS_LED);
}

ISR(TIMER2_COMPA_vect)  // 500ms

{

  t2_tick++;
  if (t2_tick >= 50)

  {

    t2_tick = 0;
    PORTB ^= (1 << HEARTBEAT_LED);
  }
}

int main(void) {

  DDRB |= (1 << STATUS_LED) | (1 << HEARTBEAT_LED);  // out

  timer1_init(2000); /* 2 second interrupt */
  timer2_init();     /* 10ms interrupt */

  while (1)

  {
  }
}
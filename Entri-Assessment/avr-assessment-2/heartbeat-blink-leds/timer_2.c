#include <avr/io.h>
#include <avr/interrupt.h>

void timer2_init(void) {
  TCCR2A = 0;
  TCCR2B = 0;
  /* CTC Mode */
  TCCR2A |= (1 << WGM21);
  OCR2A = 155; // time for 10 ms 
  /* Enable Compare Match Interrupt */
  TIMSK2 |= (1 << OCIE2A);
  /* Prescaler = 1024 */
  TCCR2B |= (1 << CS22) | (1 << CS21) | (1 << CS20);

  sei();
}
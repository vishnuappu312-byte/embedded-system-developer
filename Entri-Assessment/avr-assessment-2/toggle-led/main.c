#include <avr/io.h>
#include "timer.h"
#include <avr/interrupt.h>
#include <stdint.h>

#define LED_ON_STATE   0
#define LED_OFF_STATE  1

volatile uint8_t count = 0;

volatile uint8_t led_state = LED_ON_STATE;   // 1 = ON, 0 = OFF

ISR(TIMER1_COMPA_vect)
{

count = count + 1;

}

void LED_TOGGLE()
{

  if(led_state == LED_ON_STATE)

  {
// led has been on fr 3 sec
    if(count >= 3) // 3*1000 = 3sec
    {

      PORTD &= ~(1 << PD5); // led off
      led_state = LED_OFF_STATE;
      count = 0;
    }


  }
  else if (led_state == LED_OFF_STATE)
  {
// led has been off for 5 sec
    if(count >= 5) //  5* 1000 = 5sec
    {

    PORTD |= (1<<PD5);    // LED ON
    led_state = 0;
    count =0;

    }
  }
}




int main()
{
    DDRD |= (1<<PD5); // set as a output 
    PORTD |= (1<<PD5);    // LED ON
    timer1_init(1000); // 1000ms = 1 sec

    while(1)
    {

      LED_TOGGLE();

    }
}
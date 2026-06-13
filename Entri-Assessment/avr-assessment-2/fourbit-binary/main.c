
#define F_CPU 16000000UL

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <stdint.h>
#include "interrupt.h"

#define SWITCH      PD2
#define LED_1       PB0
#define LED_2       PB1
#define LED_3       PB2
#define LED_4       PB3

volatile uint8_t flag = 0;
volatile uint8_t count = 0;


#define BUTTON_PRESSED (!(PIND & (1 << SWITCH)))

ISR(INT0_vect)
{
    flag = 1;
}

void update_leds(void)

{

    PORTB &= 0xF0;           // Clear PB0-PB3

    PORTB |= (count & 0x0F); // Display count // add values 

}


int main()
{

   DDRB |= (1 << LED_1) | (1 << LED_2) | (1 << LED_3) | (1 << LED_4); // set output

   DDRD &= ~(1 << SWITCH); /// set input

 PORTD |= (1 << SWITCH); // internal pull up

   

    update_leds();   // Initial value = 0000
     interrupt_int();

    while(1)

    {

      if(flag)
      {
        _delay_ms(20);

        if(BUTTON_PRESSED)
        {


          count++;

          if(count > 15 )
          {


            count = 0;
          }

          update_leds();

          while(BUTTON_PRESSED);

          _delay_ms(20);


        }
           flag = 0;

      }
    }





}



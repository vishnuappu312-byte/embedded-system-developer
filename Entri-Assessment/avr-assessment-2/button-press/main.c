



#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <stdint.h>
#include "interrupt.h"

#define F_CPU 16000000UL

#define RED_LED     PD5
#define GREEN_LED   PD6
#define SWITCH      PD2

#define RED_STATE    0
#define GREEN_STATE  1

#define BUTTON_PRESSED (!(PIND & (1 << SWITCH)))

volatile uint8_t flag = 0;
volatile uint8_t led_state = RED_STATE;

ISR(INT0_vect)
{
    flag = 1;
}

int main(void)
{
    // LEDs as outputs
    DDRD |= (1 << RED_LED) | (1 << GREEN_LED);

    //switch as input
    DDRD &= ~(1 << SWITCH);

    // internal pull-up
    PORTD |= (1 << SWITCH);

    interrupt_int();

    // Initial state: Red ON, Green OFF
    PORTD |= (1 << RED_LED);
    PORTD &= ~(1 << GREEN_LED);



    while(1)
    {
        if(flag)
        {
            _delay_ms(20);

            if(BUTTON_PRESSED)
            {
                if(led_state == RED_STATE)
                {
                    PORTD &= ~(1 << RED_LED);
                    PORTD |=  (1 << GREEN_LED);

                    led_state = GREEN_STATE;
                }
                else
                {
                    PORTD &= ~(1 << GREEN_LED);
                    PORTD |=  (1 << RED_LED);

                    led_state = RED_STATE;
                }

                while(!(PIND & (1 << SWITCH)));
            }

            flag = 0;
        }
    }
}
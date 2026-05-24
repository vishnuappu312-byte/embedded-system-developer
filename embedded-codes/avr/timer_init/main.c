#include <avr/io.h>
#include "timer.h"

ISR(TIMER1_COMPA_vect)
{
    PORTB ^= (1<<PB5);
}

int main()
{
    DDRB |= (1<<PB5);

    timer1_init(500); // 500ms = 0.5 sec

    while(1)
    {

    }
}
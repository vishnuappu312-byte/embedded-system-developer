#include <avr/io.h>
#include <avr/interrupt.h>

void timer1_init(uint16_t ms)
{
    uint32_t count;

    TCCR1A = 0;
    TCCR1B = 0;

    TCCR1B |= (1<<WGM12);

    count = ((16000000UL/1024) * ms)/1000;

    OCR1A = count - 1;

    TIMSK1 |= (1<<OCIE1A);

    TCCR1B |= (1<<CS10)|(1<<CS12);

    sei();
}
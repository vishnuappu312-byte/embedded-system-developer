#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    uint8_t led = 0x01; // Binary: 00000001

    DDRB = 0xFF;   // PORTB as output

    while(1)
    {
        PORTB = led;// Output current LED pattern to PORTB

        _delay_ms(200);

        led <<= 1; // Shift LED position left by one bit
/*
Example:

           00000001 -> PB0 ON

           00000010 -> PB1 ON

           00000100 -> PB2 ON

           00001000 -> PB3 ON

           00010000 -> PB4 ON

           00100000 -> PB5 ON

           01000000 -> PB6 ON

           10000000 -> PB7 ON
           */

        if(led == 0) //After 10000000 shifts left reset 
        {
            led = 0x01;
        }
    }
}

#include <avr/io.h>
#include <avr/interrupt.h>


void interrupt_int(void)

{

    /* INT0 on Falling Edge */
    EICRA |= (1 << ISC01);
    EICRA &= ~(1 << ISC00);

    /* Enable INT0 */
    EIMSK |= (1 << INT0);

    /* Enable Global Interrupts */
    sei();

}
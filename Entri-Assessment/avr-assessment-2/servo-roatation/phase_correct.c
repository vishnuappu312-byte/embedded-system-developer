#include <avr/io.h>

void Phase_correct_init(void)
{
    // OC1A (PB1) Output 
    DDRB |= (1 << PB1);

    // Phase Correct PWM, TOP = ICR1 
    TCCR1A = 0;
    TCCR1B = 0;

    TCCR1A |= (1 << COM1A1);

    TCCR1A |= (1 << WGM11);

    TCCR1B |= (1 << WGM13);

    /* Prescaler = 8 */
    TCCR1B |= (1 << CS11);

    // 50Hz Servo Signal
/*

Timer1 Phase Correct PWM for Servo Motor

Required Frequency = 50Hz

Formula:

PWM Frequency = F_CPU / (2 × N × TOP)

Where:

F_CPU = 16000000 Hz

N = Prescaler = 8

    (Selected using CS11 = 1)

TOP = ICR1

Substitute values:

50 = 16000000 / (2 × 8 × ICR1)

50 = 16000000 / (16 × ICR1)

50 × 16 × ICR1 = 16000000

800 × ICR1 = 16000000

ICR1 = 16000000 / 800

ICR1 = 20000

Therefore:

ICR1 = 20000

This generates a 50Hz PWM signal

required for servo motor operation.

*/

    ICR1 = 20000;
}
/*
 * uart_transmitting-2.c
 *
 * Created: 17-05-2026 02:27:04
 * Author : hp
 */ 



#define F_CPU 16000000UL
#include "uart.h"
#include <avr/io.h>
#include <stdlib.h>

int main(void)
{
	UART_init();

	UART_TxChar('H');
	
	UART_String("\r\n");

	UART_String("Hello Vishnu\r\n");

	UART_TxHex(0x2A);

	UART_TxNumber(1234);

	UART_String("\r\n");

	while (1)
	{

	}
}

/*



#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

#include "uart.h"
#include "communication.h"




int A     = 1;
int B     = 220;
int C     = 230;
int D     = 240;
int E     = 10;
int F     = 20;
int G     = 0;
int H  = 1;
int I            = 0;
int J        = 1;
int K   = 1;
int L     = 5;


int main(void)
{
    DDRB |= (1<<PB0);

    UART_init();

    while(1)
    {
       
        sendData();

        
        receiveData();

        

        if(receivedCount > 0)
        {
            UART_String("Received:");

            for(uint8_t i=0;i<receivedCount;i++)
            {
                UART_TxNumber(receiveValues[i]);

                UART_TxChar(' ');
            }

            UART_String("\r\n");

         

            if(receiveValues[0] == 1)
            {
                PORTB |= (1<<PB0);
            }

            if(receiveValues[0] == 0)
            {
                PORTB &= ~(1<<PB0);
            }
        }

        _delay_ms(1000);
    }
}




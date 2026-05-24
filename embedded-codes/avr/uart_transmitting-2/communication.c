#include "communication.h"
#include "uart.h"

#include <string.h>
#include <stdlib.h>

int receiveValues[MAX_DATA];
uint8_t receivedCount = 0;

/* Example variables to send */
extern int A;
extern int B;
extern int C;
extern int D;
extern int E;
extern int F;
extern int G;
extern int H;
extern int I;
extern int J;
extern int K;
extern int L;
extern int M;


/* TX Function */

void sendData(void)
{
    int sendValues[MAX_DATA] =
    {
        A,
        B,
        C,
        D,
        E,
        F,
        G,
        H,
        J,
        K,
        L,
        M
    };

    UART_String("B:");

    for(uint8_t i=0;i<MAX_DATA;i++)
    {
        UART_TxNumber(sendValues[i]);

        if(i<(MAX_DATA-1))
        {
            UART_TxChar(',');
        }
    }

    UART_String("\r\n");
}


/* RX Function */

void receiveData(void)
{
    static char receivedChars[BUFFER_SIZE];
    static uint8_t ndx=0;

    char rc;

    while(UART_Available())
    {
        rc=UART_RxChar();

        if(rc!='\n')
        {
            receivedChars[ndx++]=rc;

            if(ndx>=BUFFER_SIZE)
            {
                ndx=BUFFER_SIZE-1;
            }
        }
        else
        {
            receivedChars[ndx]='\0';

            if(parseData(receivedChars))
            {
                sendAck();
            }

            ndx=0;
        }
    }
}


/* Parsing Function */

uint8_t parseData(char *data)
{
    char *token;

    uint8_t i=0;

    token=strtok(data,":");

    if(token!=NULL &&
       strcmp(token,"A")==0)
    {
        token=strtok(NULL,",");

        while(token!=NULL &&
              i<MAX_DATA)
        {
            receiveValues[i]=atoi(token);

            token=strtok(NULL,",");

            i++;
            token=strtok(NULL,",");
        }
        receivedCount = i;

        return 1;
    }

    return 0;
}


/* ACK Function */

void sendAck(void)
{
    UART_String("ACK\r\n");
}
#ifndef COMMUNICATION_H
#define COMMUNICATION_H

#include <stdint.h>

#define MAX_DATA 12
#define BUFFER_SIZE 64

extern int receiveValues[MAX_DATA];
extern uint8_t receivedCount;

void sendData(void);
void receiveData(void);
uint8_t parseData(char *data);
void sendAck(void);

#endif
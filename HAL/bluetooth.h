#ifndef bluetooth_h
#define bluetooth_h

#include "D:\Engineering\S07\Intro to Embedded\Li-fi Project\MCAL\GPIO.h"
#include "D:\Engineering\S07\Intro to Embedded\Li-fi Project\Types.h"
#include "D:\Engineering\S07\Intro to Embedded\Li-fi Project\bitwise_operations.h"
#include "D:\Engineering\S07\Intro to Embedded\Li-fi Project\tm4c123gh6pm.h"
#include "D:\Engineering\S07\Intro to Embedded\Li-fi Project\MCAL\uart.h"



void bluetooth_init(); // Initialize UART5 module for HC-05

int8 bluetooh_read();//Read data from Rx5 pin of TM4C123

void Bluetooth_Write(uint8 data);  // Transmit a character to HC-05 over Tx5 pin 

void Bluetooth_Write_String(int8 *str); // Transmit a string to HC-05 over Tx5 pin 



















#endif
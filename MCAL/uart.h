#ifndef uart_h
#define uart_h
/*************************************************************
*                           Includes
**************************************************************/
//#include "inc/hw_ints.h"
//#include "driverlib/interrupt.h"

#include "D:\Engineering\S07\Intro to Embedded\Li-fi Project\MCAL\GPIO.h"
#include "D:\Engineering\S07\Intro to Embedded\Li-fi Project\tm4c123gh6pm.h"
#include "D:\Engineering\S07\Intro to Embedded\Li-fi Project\Types.h"
/*******************************************************************************
*                                Function Prototypes                           *
*******************************************************************************/



void uart_init();

void UART5_Transmitter(uint8 data);

int8 UART5_Reciever();


void printstring(int8 *str);


void Delay(uint32 counter);
















#endif
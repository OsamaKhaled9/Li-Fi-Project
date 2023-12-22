#include "bluetooth.h"

void bluetooth_init() // Initialize UART5 module for HC-05
{
 uart_init(); 
  
}

int8 bluetooh_read()  //Read data from Rx5 pin of TM4C123
{
  int8 data;
  data = UART5_Reciever();
    return data ;
  
}

void Bluetooth_Write(uint8 data)  // Transmit a character to HC-05 over Tx5 pin 
{
  
  UART5_Transmitter(data);
  
  
}

void Bluetooth_Write_String(int8 *str) // Transmit a string to HC-05 over Tx5 pin 
{
  
  printstring(str);
  
}

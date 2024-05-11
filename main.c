#include "tm4c123gh6pm.h"
#include "Types.h"
#include "bitwise_operations.h"
#include "D:\Engineering\S07\Intro to Embedded\Li-fi Project\MCAL\systick.h"
#include "D:\Engineering\S07\Intro to Embedded\Li-fi Project\MCAL\gptm.h"
#include "D:\Engineering\S07\Intro to Embedded\Li-fi Project\HAL\fume.h"
#include "D:\Engineering\S07\Intro to Embedded\Li-fi Project\HAL\magnetic.h"
#include "D:\Engineering\S07\Intro to Embedded\Li-fi Project\HAL\bluetooth.h"


int main()
{
    bluetooth_init();
SYSCTL_RCGCGPIO_R |= 0x20;   /* enable clock to GPIOF */
    GPIO_PORTF_DIR_R |= 0x0E;         //set PF1, PF2 and PF3 as digital output pin
    GPIO_PORTF_DEN_R|= 0x0E;         // CON PF1, PF2 and PF3 as digital GPIO pins
  	Delay(10); 

    
    while(1)
    {
      char c = bluetooh_read();  
      
        
                if( c=='A'){
			GPIO_PORTF_DATA_R |=(1<<1);
			Bluetooth_Write_String("RED LED ON\n");
		}
		else if( c=='B'){
			GPIO_PORTF_DATA_R &=~(1<<1);
			Bluetooth_Write_String("RED LED OFF\n");
		}
		else if( c=='C'){
			GPIO_PORTF_DATA_R |=(1<<2);
			Bluetooth_Write_String("BLUE LED ON\n");
		}
		else if( c=='D'){
			GPIO_PORTF_DATA_R &=~(1<<2);
			Bluetooth_Write_String("BLUE LED OFF\n");
		}
		if( c=='E'){
			GPIO_PORTF_DATA_R |=(1<<3);
			Bluetooth_Write_String("GREEN LED ON\n");
		}
		else if( c=='F'){
			GPIO_PORTF_DATA_R &=~(1<<3);
			Bluetooth_Write_String("GREEN LED OFF\n");
		}	

      
     
      
    }
    return 0;
   
}



#include "D:\Engineering\S07\Intro to Embedded\Li-fi Project\MCAL\GPIO.h"


void delay(){
  int counter =0;
    while (counter < 1000000){
    ++counter;
    }
}

int main()
{
  
  Clock_Init(PORTF);
 GPIO_Config_pin(PORTF , 1 , 1);
  GPIO_Config_pin(PORTF , 2 , 1);
    GPIO_Config_pin(PORTF , 3 , 1);


  
  
  
  while(1)
  {
    GPIO_WritePort(PORTF,0x02);
                   /*
    GPIO_WritePin(PORTF,2,1);
    delay();
    GPIO_WritePin(PORTF,1,1);
    delay();
       GPIO_WritePin(PORTF,3,1);
 */
    
    
    
  }
    
    
  return 0;
}

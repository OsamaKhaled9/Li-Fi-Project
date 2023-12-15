#include "D:\Engineering\S07\Intro to Embedded\Project\MCAL\GPIO.h"

int main()
{
  
  Clock_Init(PORTF);
 GPIO_Config_pin(PORTF , 2 , 1);
  
  
  
  while(1)
  {
    
    GPIO_WritePin(PORTF,2,1);
    
    
    
  }
    
    
  return 0;
}

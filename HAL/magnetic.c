#include "magnetic.h"

void magnetic_init()
{
  Clock_Init(PORTC);
  GPIO_Config_pin(PORTC , 6 , 0);
  

  
  
}



uint8 magnetic_read()
{
  
       return GET_BIT(GPIO_PORTC_DATA_R, 6);

  
}

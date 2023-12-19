#include "tm4c123gh6pm.h"
#include "Types.h"
#include "bitwise_operations.h"
#include <stdio.h>
#include "D:\Engineering\S07\Intro to Embedded\Li-fi Project\MCAL\systick.h"
#include "D:\Engineering\S07\Intro to Embedded\Li-fi Project\MCAL\gptm.h"
#include "D:\Engineering\S07\Intro to Embedded\Li-fi Project\HAL\fume.h"



int main()
{
    /*Timer_init();

    TimerIntEnable(TIMER0_BASE, TIMER_TIMA_TIMEOUT);

    IntEnable(INT_TIMER0A); 
    
    TimerEnable(TIMER0_BASE,TIMER_A);
    
    Timerdelay(500);*/
 Clock_Init(PORTF);
 GPIO_Config_pin(PORTF , 2 , 1);
  fume_init();
  
    
    while(1)
    {
      
      uint8 value = fume_get_value();
      printf("%d", value);
       if(!value)
     {
          GPIO_WritePin(PORTF,2,1);       
     }
       else{
         GPIO_WritePin(PORTF,2,0);  
       }
     
      
    }
    return 0;
   
}



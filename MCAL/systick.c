#include "systick.h"



void SysTickDisable (void){
  Clear_Bit(NVIC_ST_CTRL_R,0);
}

void SysTickEnable (void)
{
  NVIC_ST_CTRL_R |= 0x07;
}

uint32 SysTickPeriodGet (void)
{
  
  return  (NVIC_ST_CURRENT_R / CLOCK_FREQ);
  

}
void SysTickPeriodSet (uint32 ui32Period)
{
    NVIC_ST_RELOAD_R = (ui32Period * CLOCK_FREQ);
}

uint32 SysTickValueGet (void)
{
  
 return NVIC_ST_RELOAD_R;
  
} 
  
uint8 SysTick_Is_Time_out(void)
{
return GET_BIT(NVIC_ST_CTRL_R,16);
  
  
}
void SysTick_Handler(void)
{
        GPIO_PORTF_DATA_R  ^= 0x0E;  //toggle the white led
}

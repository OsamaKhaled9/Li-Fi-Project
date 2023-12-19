#include"gptm.h"
volatile uint8 flag = 0;
volatile uint8 flag_timer1 = 0;



void Timer_init()
{
    SYSCTL_RCGCTIMER_R |= SYSCTL_RCGCTIMER_R0;
  // open clock for GPIO
     while(( SYSCTL_PRGPIO_R & SYSCTL_RCGCTIMER_R0 ) == 0 ) {}
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF); 
    // delay till clock is ready
    
    // Configure and enable Timer 0 A
    
    TimerConfigure(TIMER0_BASE,TIMER_CFG_A_PERIODIC);
    
    TimerLoadSet(TIMER0_BASE,TIMER_A,16000000);
    
    IntMasterEnable();
    
}



void Timerdelay( uint32 delay ){
 
    // open clock for Timer0
    SysCtlPeripheralEnable(SYSCTL_PERIPH_TIMER1); 
    // delay till clock is ready
    while(! SysCtlPeripheralReady(SYSCTL_PERIPH_TIMER1) );
    
    
    IntMasterEnable();


    while(flag == 0);

}
void timer_0_handler (void) {
  
  if(flag == 1 ){
  GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3, 0x04);         // Open blue light when Timer 0 A throws an interrupt  adjust flag
  flag = 0;
  }
  else{
    GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3, 0x00);      // Close blue light when Timer 0 A throws an interrupt and adjust flag
    flag = 1;
  }
  // Clear flag
  TimerIntClear(TIMER0_BASE,TIMER_TIMA_TIMEOUT);

}



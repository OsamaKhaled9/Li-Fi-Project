#include <stdbool.h>
#include <stdint.h>
#include "inc/hw_ints.h"
#include "inc/hw_memmap.h"
#include "driverlib/gpio.h"
#include "driverlib/interrupt.h"
#include "driverlib/pin_map.h"
#include "driverlib/sysctl.h"
#include "driverlib/timer.h"


#include "D:\Engineering\S07\Intro to Embedded\Li-fi Project\MCAL\GPIO.h"




/*#define SYSCTL_RCGCTIMER_R5      0x00000020  // Timer 5 Run Mode Clock Gating
                                            // Control
#define SYSCTL_RCGCTIMER_R4       0x00000010  // Timer 4 Run Mode Clock Gating
                                            // Control
#define SYSCTL_RCGCTIMER_R3      0x00000008  // Timer 3 Run Mode Clock Gating
                                            // Control
#define SYSCTL_RCGCTIMER_R2     0x00000004  // Timer 2 Run Mode Clock Gating
                                            // Control
#define SYSCTL_RCGCTIMER_R1     0x00000002  // Timer 1 Run Mode Clock Gating
                                            // Control
#define SYSCTL_RCGCTIMER_R0     0x00000001  // Timer 0 Run Mode Clock Gating
                                            // Control
*/
void Timer_init();

void Timerdelay( uint32 delay );

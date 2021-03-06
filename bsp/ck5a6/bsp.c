#include "bsp.h"



/****************************************************************************
 * Public Functions
 ****************************************************************************/

/*****************************************************************************
 * Function
 * 			void BSP_Init (void)
 * Description
 * 			initialize BSP package driver
 * Parameter
 * 			None
 * Return
 * 			None
 ****************************************************************************/
void BSP_Init (void)
{
    CKIntcInit();

    CKEnableInterrupt(VECTOR_TRAP0);
    CKEnableInterrupt(VECTOR_TIMER1);
    CKEnableInterrupt(VECTOR_UART1);

    CKTimerInit(TIMER1, OS_TICK_FREQ);
    CKUartInit(UART_BAUD, 8, 1, LCR_PARITY_NONE);
}

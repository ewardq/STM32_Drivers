#include <stdio.h>
#include "stm32f4xx.h"
#include "fpu.h"
#include "uart.h"
#include "timebase.h"
/* Module:
 * FPU
 * UART
 * GPIO
 * TIMEBASE
 */

#define GPIOAEN  (1U<<0)  // Bit number zero is set to 1
#define PIN5     (1U<<5)
#define LED_PIN  PIN5     // Give it another name so it's more readable

/*
#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif
*/

int main(void)
{
    /* Enable FPU */
	fpu_enable();

	/* Initialize UART */
	debug_uart_init();

	/* Initialize timebase */
	timebase_init();

	while(1){
		printf("Hello from STM32 \n\r");
		delay(1);
	}

	/*     PSEUDO DELAY
	while(1){
		printf("Hello from STM32 \n\r");
		for(int i = 0; i < 9000; i++){};
	}
	*/
}

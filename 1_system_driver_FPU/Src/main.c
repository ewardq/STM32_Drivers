#include <stm32f4xx.h>
#include "fpu.h"

/* Module:
 * FPU
 * UART
 * GPIO
 * TIMEBASE
 */

#define GPIOAEN  (1U<<0)  // Bit number zero is set to 1
#define PIN5     (1U<<5)
#define LED_PIN  PIN5     // Give it another name so it's more readable


int main(void)
{
    /* Enable FPU */
	fpu_enable();

	while(1){
		GPIOA->ODR ^= LED_PIN;
		for(int i = 0; i < 100000; i++){}
	}
}

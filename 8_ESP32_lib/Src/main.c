#include <stdio.h>
#include "stm32f4xx.h"
#include "fpu.h"
#include "uart.h"
#include "timebase.h"
#include "bsp.h"
#include "adc.h"
#include "circular_buffer.h"

/* Modules:
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

bool btn_state;
uint32_t sensor_value;

int main(void)
{
    /* Enable FPU */
	fpu_enable();

	/* Initialize debug UART */
	debug_uart_init();
	slave_dev_uart_init();

	/* Initialize timebase */
	timebase_init();

	/* Initialize LED */
	led_init();

	/* Initialize push button */
	button_init();

	/* Initialize ADC */
	pa1_adc_init();

	/* Start conversion */
	//start_conversion();

	circular_buffer_init();

	while(1){
		// printf("Debug UART... \n\r");

		buffer_send_string("Hello DEBUG\n\r", DEBUG_PORT);
		buffer_send_string("Hello SLAVE DEV\n\r", SLAVE_DEV_PORT);

		delay(1);
	}
}

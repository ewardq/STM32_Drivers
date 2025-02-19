/*
 * circular_buffer.h
 *
 *  Created on: Jan 31, 2025
 *      Author: Katja
 */

#ifndef CIRCULAR_BUFFER_H_
#define CIRCULAR_BUFFER_H_

#include "uart.h"

#define UART_BUFFER_SIZE    100
#define INIT_VAL            0

typedef enum{
	DEBUG_PORT = 0,
	SLAVE_DEV_PORT      // Automatically becomes 1
}portType;

typedef struct
{
	unsigned char buffer[UART_BUFFER_SIZE];
	__IO uint32_t head;
	__IO uint32_t tail;

}circular_buffer;

void circular_buffer_init(void);
void buffer_send_string(const char *s, portType uart);

#endif /* CIRCULAR_BUFFER_H_ */

/*
 * timebase.h
 *
 *  Created on: Jan 24, 2025
 *      Author: Katja
 */

#ifndef TIMEBASE_H_
#define TIMEBASE_H_

#include <stdint.h>

uint32_t get_tick(void);
void delay(uint32_t delay);
void timebase_init(void);

#endif /* TIMEBASE_H_ */

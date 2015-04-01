/**
 * Copyright (c) 2015 by Lukasz Marcin Podkalicki <lukasz@podkalicki.com>
 */

#ifndef	_AVRINO_ANALOG_H_
#define	_AVRINO_ANALOG_H_

#include "avrino/io.h"

int analog_read(uint8_t pin);
void analog_write(uint8_t pin, int value);

#endif	/* !_AVRINO_ANALOG_H_ */

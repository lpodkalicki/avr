/**
 * Copyright (c) 2015 by Lukasz Marcin Podkalicki <lukasz@podkalicki.com>
 */

#ifndef	_AVRINO_IO_H_
#define	_AVRINO_IO_H_

#include <avr/io.h>
#include "avrino.h"

#define	LOW	(0)
#define	HIGH 	(1)
#define	INPUT	(0)
#define	OUTPUT	(1)

uint8_t * port_addr(uint8_t pin);
void pin_mode(uint8_t pin, uint8_t mode);

#endif	/* !_AVRINO_IO_H_ */

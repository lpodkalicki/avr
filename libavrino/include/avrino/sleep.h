/**
 * Copyright (c) 2015 by Lukasz Marcin Podkalicki <lukasz@podkalicki.com>
 */

#ifndef	_AVRINO_SLEEP_H_
#define	_AVRINO_SLEEP_H_

#include "avrino_config.h"
#include <util/delay.h>

#define	sleep(value)	_delay_ms(value)	
#define	usleep(value)	_delay_us(value)

#endif	/* !_AVRINO_SLEEP_H_ */
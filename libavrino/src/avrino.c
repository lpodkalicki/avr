/**
 * Copyright (c) 2015 by Lukasz Marcin Podkalicki <lukasz@podkalicki.com>
 */

#include <avr/interrupt.h>
#include <avr/pgmspace.h>
#include "avrino.h"
#include "avrino/io.h"
#include "avrino/utils.h"

const uint16 PROGMEM port2mode[] = {
#if defined(__AVR_ATtiny13__) || defined(__AVR_ATtiny13A__) || defined(__AVR_ATtiny25__) || defined(__AVR_ATtiny45__) || defined(__AVR_ATtiny85__)
	{(uint16_t)&DDRB},
#elif defined(__AVR_ATmega8__) || defined (__AVR_ATmega328P__) || defined (__AVR_ATmega328__)
	
	{0,0}
#endif
};

pin_info_t *
pin_info(uint8_t pin)
{
	
	return &pin_infos[pin];
}

void
pin_mode(uint8_t pin, uint8_t mode)
{
	uint8_t sreg;
	const pin_info_t *info;
	
	info = pin_info(pin);
	
	if (mode == OUTPUT) {
		sreg = SREG;
		cli();
		sbi(info->port_addr, info->pin_bitnum);
		SREG = sreg;
	} else { // mode == INPUT
		sreg = SREG;
		cli();
		cbi(info->port_addr, info->pin_bitnum);
		SREG = sreg;
	}
}

static void default_setup() {};
static void default_loop() {};

void __attribute__ ((weak, alias ("default_setup"))) setup(void);
void __attribute__ ((weak, alias ("default_loop"))) loop(void);

int
main(void)
{	
	setup();
	while (1) loop();
	return (0);
}

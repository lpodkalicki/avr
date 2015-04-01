/**
 * Copyright (c) 2015 by Łukasz Marcin Podkalicki <lukasz@podkalicki.com>
 * ATtiny85 - very simple blinking led
 */


#include <avrino/digital.h>
#include <avrino/sleep.h>

#define	LED_PIN	D0				// D0 (PB0) as LED pin

void
setup(void)
{

	pin_mode(LED_PIN, OUTPUT);		// Set LED pin as output
}

void
loop(void)
{

	while (1) {
		digital_toggle(LED_PIN);	// Toggle LED pin
		sleep(200); 			// Pause a while (200ms)
	}
}

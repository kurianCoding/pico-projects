#include <stdio.h>

#include "pico/stdlib.h"
#define LED_PIN 25
#define ON 1
#define OFF 0

int main() {
	stdio_init_all();
	gpio_init(LED_PIN);
	gpio_set_dir(LED_PIN, GPIO_OUT);
	char userInput;
	while (1) {
		userInput = getchar();
		if (userInput == 'j') {
			gpio_put(LED_PIN, ON);
			sleep_ms(200);
			gpio_put(LED_PIN, OFF);
		} else {
			gpio_put(LED_PIN, ON);
			sleep_ms(20);
			gpio_put(LED_PIN, OFF);
		}
	}
}

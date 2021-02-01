#include <Arduino.h>

#define LED 3

void setup() {
	/*
	 * Konfigurasi pin, protokol, varibel
	 */
	pinMode(LED,OUTPUT);
}

void loop() {
	/*
	 * perulangan kode
	 */
	uint8_t brightness;

	for(brightness = 0; brightness < 255; ++brightness){
		analogWrite(LED,brightness); // Rentang nilai output dari 0 - 255
		delay(50);
	}

	for(brightness = 255; brightness > 0; --brightness){
		analogWrite(LED,brightness); // Rentang nilai output dari 0 - 255
		delay(50);
	}
}

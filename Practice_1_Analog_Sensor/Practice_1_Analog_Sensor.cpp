#include <Arduino.h>

#define Pot A1

void setup() {
	/*
	 * Konfigurasi pin, protokol, variabel
	 */

}

void loop() {
	/*
	 * Perulangan kode
	 */
	uint16_t potval;
	potval = analogRead(Pot);

	if(potval < 200){

	}
	else if((potval > 200) & (potval < 500)){

	}
	else{

	}
}

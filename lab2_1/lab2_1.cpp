// Do not remove the include below
#include "lab2_1.h"

#define FRONT_LED_PIN 10
#define REAR_LED_PIN 9

boolean increasing = true;
int front_led_value = 0;

//The setup function is called once at startup of the sketch
void setup()
{
	// Add your initialization code here
	pinMode(FRONT_LED_PIN, OUTPUT);
	pinMode(REAR_LED_PIN, OUTPUT);
}

// The loop function is called in an endless loop
void loop()
{
	//Add your repeated code here
	analogWrite(FRONT_LED_PIN, front_led_value);
	analogWrite(REAR_LED_PIN, 255-front_led_value);
	delay(20);
	
	if (increasing == true)
		front_led_value++;
	else
		front_led_value--;
	
	if (front_led_value > 255) {
		front_led_value = 254;
		increasing = false;
	}
	else if (front_led_value <0) {
		front_led_value = 1;
		increasing = true;
	}
}

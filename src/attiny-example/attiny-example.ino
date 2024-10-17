#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define PIN        2
#define NUMPIXELS  1
Adafruit_NeoPixel led(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);


void setup() {
  led.begin();
}

void loop() {
  led.setPixelColor(0, led.Color(200, 0, 200));
  led.setBrightness(50);
  led.show();
  delay(1000);
  
  led.setPixelColor(0, 0);
  led.show();
  delay(1000);
}

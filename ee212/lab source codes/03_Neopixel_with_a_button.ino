#include <Adafruit_NeoPixel.h>

#define PIN 2	 // input pin Neopixel is attached to

#define NUMPIXELS      12 // number of neopixels in Ring

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 100; // timing delay

int redColor = 0;
int greenColor = 0;
int blueColor = 0;

int buttonState = 0;

int lastButtonState = 0;

int buttonPushCounter = 0;

void setup() {
  pixels.begin(); // Initializes the NeoPixel library.
  pinMode(13,OUTPUT);
  pinMode(1, INPUT);
  setColor();
  for(int i=0;i<NUMPIXELS;i++){
    pixels.setPixelColor(i, pixels.Color(redColor, greenColor, blueColor)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time (in milliseconds).
  }
}

void loop() {
  buttonState = digitalRead(1);

  if (buttonState != lastButtonState) {
    if (buttonState == HIGH) {
      buttonPushCounter += 1;
	  setColor();
      
	  for(int i=0;i<NUMPIXELS;i++){
	    pixels.setPixelColor(i, pixels.Color(redColor, greenColor, blueColor)); // Moderately bright green color.
	    pixels.show(); // This sends the updated pixel color to the hardware.
	    delay(delayval); // Delay for a period of time (in milliseconds).
  	  }
    } else {
    }
    delay(5); // Wait for 5 millisecond(s)
  }
  lastButtonState = buttonState;
}

void setColor(){
  redColor = random(0, 255);
  greenColor = random(0,255);
  blueColor = random(0, 255);
}
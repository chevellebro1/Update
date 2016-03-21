#line 1 "Falcon.ino"
#include "Arduino.h"
void setup();
void loop();
#line 1
int ledPin = 32;                 // LED connected to digital pin 13

void setup()
{
  pinMode(ledPin, OUTPUT);      // sets the digital pin as output
}

void loop()
{
  digitalWrite(ledPin, HIGH);   // sets the LED on
  delay(3000);                  // waits for a second
  digitalWrite(ledPin, LOW);    // sets the LED off
  delay(3000);                  // waits for a second
}


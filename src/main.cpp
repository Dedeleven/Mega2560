#include <Arduino.h>

// Define Pins
const int ledPin = 13;
const int ballSwitchPin = 2;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(ballSwitchPin, INPUT);
  digitalWrite(ballSwitchPin, HIGH);
}



void loop()
{
  int digitalVal = digitalRead(ballSwitchPin);
  if (digitalVal == HIGH)
  {
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }
}
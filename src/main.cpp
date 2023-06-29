#include <Arduino.h>
#include <Ultrasonic.h>

// Define Pins
const int triggerPin = 12;
const int echoPin = 11;
Ultrasonic myUltrasonic = Ultrasonic(triggerPin, echoPin);

unsigned int a;

void setup()
{
  Serial.begin(9600); 
  delay(1000);
}



void loop()
{
  a = myUltrasonic.read();
  Serial.print(a);
  Serial.println(" cm");
  delay(500);
}
#include <Arduino.h>
#include <Servo.h>

// Define Pins
const int servoControlPin = 2;
Servo myServo = Servo();

void setup()
{
  myServo.attach(servoControlPin);
  myServo.write(90);  
}



void loop()
{
  myServo.write(90);
  delay(500);
  myServo.write(60);
  delay(500);
  myServo.write(90);
  delay(500);
  myServo.write(120);
  delay(500);
}
#include <Arduino.h>


// Define Pins
#define BLUE 3
#define GREEN 5
#define RED 6

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  // digitalWrite(RED, LOW);
  // digitalWrite(GREEN, LOW);
  // digitalWrite(BLUE, LOW);
}

// declare variable
int redValue;
int greenValue;
int blueValue;
int delayTime;

void loop()
{
  // define variables
  redValue = 255;
  greenValue = 0;
  blueValue = 0;
  delayTime = 10;

  for (int i = 0; i <255; i++ )
  {
    redValue -= 1;
    greenValue += 1;
    analogWrite(RED, redValue);
    analogWrite(GREEN, greenValue);
    delay(delayTime);
  }

  for (int i = 0; i <255; i++ )
  {
    greenValue -= 1;
    blueValue += 1;
    analogWrite(GREEN, greenValue);
    analogWrite(BLUE, blueValue);
    delay(delayTime);
  }

  for (int i = 0; i <255; i++ )
  {
    blueValue -= 1;
    redValue += 1;
    analogWrite(BLUE, blueValue);
    analogWrite(RED, redValue);
    delay(delayTime);
  }

}
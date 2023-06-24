#include <Arduino.h>
#include "pitches.h"

// Define Pins
#define BLUE 3
#define GREEN 5
#define RED 6
#define BLUE_BUTTON 9
#define GREEN_BUTTON 8

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(BLUE_BUTTON, INPUT_PULLUP);
  pinMode(GREEN_BUTTON, INPUT_PULLUP);
  digitalWrite(RED, HIGH);
}



void loop()
{
  if (digitalRead(BLUE_BUTTON)==LOW)
  { 
    if (digitalRead(GREEN_BUTTON)==LOW)
    {
      digitalWrite(RED, HIGH);
      digitalWrite(GREEN, HIGH);
      digitalWrite(BLUE, LOW);
      tone(12,NOTE_C5,10);
    } 
    else
    {    
      digitalWrite(RED, LOW);
      digitalWrite(GREEN, LOW);
      digitalWrite(BLUE, HIGH);
      tone(12,NOTE_E5,10);
    }
  }
  else if (digitalRead(GREEN_BUTTON)==LOW)
  {
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, HIGH);
    digitalWrite(BLUE, LOW);
    tone(12,NOTE_B5,10);
  }
  else
  {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
  }
}
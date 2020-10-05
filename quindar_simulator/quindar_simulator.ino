#include "pitches.h"

int buttonPin = 12;
int introPitch = 2525;
int outroPitch = 2475;
int previousState = 0;
int currentState = 0;
int duration = 250;
 
void setup() {
  pinMode(buttonPin,INPUT_PULLUP);
  currentState = digitalRead(buttonPin);
}
 
void loop() {  
  previousState = currentState;
  if (digitalRead(buttonPin) == LOW){
    currentState = 0;
 } else if (digitalRead(buttonPin) == HIGH){
    currentState = 1;
 }

 if (previousState != currentState){
    if (currentState == 0){
    tone(8,introPitch,duration);
    } else if (currentState == 1){
      tone(8,outroPitch,duration);
    }
    delay(duration);
 }
}

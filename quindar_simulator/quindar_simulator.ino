#include "pitches.h"

int buttonPin = 12;
int buzzerPin = 8;
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
    tone(buzzerPin,introPitch,duration);
    } else if (currentState == 1){
      tone(buzzerPin,outroPitch,duration);
    }
    delay(duration);
 }
}

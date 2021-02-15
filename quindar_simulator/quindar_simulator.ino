#include "pitches.h"

int buttonPin = 12;
int buzzerPin = 8;
//int introPitch = 2525;
//int outroPitch = 2475;
int previousState = 0;
int currentState = 0;
int duration = 250;
int lowTestPitch = 50;
int midTestPitch = 200;
int higherTestPitch = 500;
int tones [11] = {50, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
 
void setup() {
  pinMode(buttonPin,INPUT_PULLUP);
  currentState = digitalRead(buttonPin);
}
 
void loop() {  
  /*for (int x = 0; x < 11; x++){
    tone(buzzerPin,tones[x],duration);
    delay(5000);
    Serial.println(tone[x]);
  }
  for (int x = 0; x < 11; x++){
    tone(buzzerPin,tones[x],duration*2);
    delay(5000);
    Serial.println(tone[x]);
  }*/

  tone(buzzerPin,tones[0],duration);
  delay(duration);
  tone(buzzerPin,tones[1],duration);
  delay(3000);

  tone(buzzerPin,tones[1],duration);
  delay(duration);
  tone(buzzerPin,tones[0],duration);
  delay(3000);

  tone(buzzerPin,500,duration);
  delay(duration);
  tone(buzzerPin,1000,duration);
  delay(3000);
  
  tone(buzzerPin,1000,duration);
  delay(duration);
  tone(buzzerPin,500,duration);
  delay(3000);

  tone(buzzerPin,250,1000);
  delay(3000);
  
  tone(buzzerPin,500,1000);
  delay(3000);

  tone(buzzerPin,40,1000);
  delay(3000);

  tone(buzzerPin,75,1000);
  delay(3000);

  tone(buzzerPin,100,1000);
  delay(3000);

  tone(buzzerPin,tones[0],duration/2);
  delay(duration/2);
  tone(buzzerPin,tones[1],duration/2);
  delay(3000);

  tone(buzzerPin,tones[1],duration/2);
  delay(duration/2);
  tone(buzzerPin,tones[0],duration/2);
  delay(3000);

  tone(buzzerPin,500,duration/2);
  delay(duration/2);
  tone(buzzerPin,1000,duration/2);
  delay(3000);
  
  tone(buzzerPin,1000,duration/2);
  delay(duration/2);
  tone(buzzerPin,500,duration/2);
  delay(3000);

   tone(buzzerPin,250,500);
  delay(3000);
  
  tone(buzzerPin,500,500);
  delay(3000);

  tone(buzzerPin,40,500);
  delay(3000);

  tone(buzzerPin,75,500);
  delay(3000);

  tone(buzzerPin,100,500);
  delay(3000);


  tone(buzzerPin,250,250);
  delay(3000);
  
  tone(buzzerPin,500,250);
  delay(3000);

  tone(buzzerPin,40,250);
  delay(3000);

  tone(buzzerPin,75,250);
  delay(3000);

  tone(buzzerPin,100,250);
  delay(3000);
  
  /*tone(buzzerPin,introPitch,duration);
  delay(5000);
  tone(buzzerPin,outroPitch,duration);
  delay(5000);*/
  /*
  previousState = currentState;
  if (digitalRead(buttonPin) == LOW){
    currentState = 0;
 } else if (digitalRead(buttonPin) == HIGH){
    currentState = 1;
 }

 if (previousState != currentState){
    if (currentState == 0){
    tone(buzzerPin,lowTestPitch,duration);
    } else if (currentState == 1){
      tone(buzzerPin,midTestPitch,duration);
    }
    delay(duration);
 }*/
}

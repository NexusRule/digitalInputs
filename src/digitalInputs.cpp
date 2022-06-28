/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/fxxsj/OneDrive/Desktop/digitalInputs/src/digitalInputs.ino"
void setup();
void loop();
#line 1 "c:/Users/fxxsj/OneDrive/Desktop/digitalInputs/src/digitalInputs.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
bool value;

void setup() {
  pinMode(D7, INPUT);
}

void loop() {
  value = digitalRead(D7);
  if (value == true) {
    digitalWrite(D6, HIGH);
  } else {
    digitalWrite(D6, LOW);
  }
}
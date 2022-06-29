// i have no clue how this worked, i used pins D5 and D7-
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
bool value;

void setup() {
  pinMode(D5, OUTPUT);
  pinMode(D7, INPUT);
}

void loop() {
  value = digitalRead(D7);
  if (value == true) {
    digitalWrite(D5, HIGH);
  } else {
    digitalWrite(D5, LOW);
  }
}

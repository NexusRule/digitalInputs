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
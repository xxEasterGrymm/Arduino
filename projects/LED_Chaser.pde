void setup() {
  for(int i = 1; i <= 4; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for(int i = 4; i >= 1; i--) {
    digitalWrite(i, HIGH);
    delay(1000);
    digitalWrite(i, LOW);
    delay(1000);
  }
}

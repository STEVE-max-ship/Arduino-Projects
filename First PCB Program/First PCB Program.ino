
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

}
void loop() {
  for (int j = 1;  j < 11; j++) {
    for (int i = 2; i < 10; i++) {
      digitalWrite(i, HIGH);
      delay(500/j);
      digitalWrite(i, LOW);
      
    }
  }
}

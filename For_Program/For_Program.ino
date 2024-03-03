int a;




void setup() {
  for (a = 2; a < 10; a++) {
    pinMode(a, OUTPUT);  //this is for function . you dont have to write "pinmode 1 output" and etc. you can shrink the code.
  }

}

void loop() {
  for (int i = 2; i < 10; i++) {
    digitalWrite(i, HIGH);
    delay(20);
    digitalWrite(i, LOW);
    delay(20);
  }

}

int a = 0;
int bst;
int button = 3;
int led = 2;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  bst = digitalRead(button);


  while (bst == HIGH)
  {
    digitalWrite(led, HIGH);
    delay(60);
    digitalWrite(led, LOW);
    delay(60);
    bst = digitalRead(button);
  }

}

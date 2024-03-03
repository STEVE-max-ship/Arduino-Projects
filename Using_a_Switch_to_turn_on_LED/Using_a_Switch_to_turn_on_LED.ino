int led = 4;
int button = 3;
int buttonState;



void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);

}

void loop() {
  buttonState = digitalRead(button);
  if (buttonState == HIGH)
  {
    digitalWrite(led, HIGH);
  }

  else
  {
    digitalWrite(led, LOW);
  }



}

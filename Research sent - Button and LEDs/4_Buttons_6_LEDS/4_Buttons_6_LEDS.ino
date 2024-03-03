int led1 = 6;
int led2 = 7;
int led3 = 8;
int led4 = 9;
int led5 = 10;
int led6 = 11;
int button1 = 2;
int button2 = 3;
int button3 = 4;
int button4 = 5;
int delayTime = 200;
bool buttonState1;
bool buttonState2;
bool buttonState3;
bool buttonState4;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);
}

void loop() {
  buttonState1 = digitalRead(button1);
  buttonState2 = digitalRead(button2);
  buttonState3 = digitalRead(button3);
  buttonState4 = digitalRead(button4);
  if (buttonState1 == HIGH)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
  }
  else if (buttonState2 == HIGH)
  {
    digitalWrite(led1, HIGH);
    delay (delayTime);
    digitalWrite(led2, HIGH);
    delay (delayTime);
    digitalWrite(led3, HIGH);
    delay (delayTime);
    digitalWrite(led4, HIGH);
    delay (delayTime);
    digitalWrite(led5, HIGH);
    delay (delayTime);
    digitalWrite(led6, HIGH);
    delay (delayTime);
    digitalWrite(led1, LOW);
    delay (delayTime);
    digitalWrite(led2, LOW);
    delay (delayTime);
    digitalWrite(led3, LOW);
    delay (delayTime);
    digitalWrite(led4, LOW);
    delay (delayTime);
    digitalWrite(led5, LOW);
    delay (delayTime);
    digitalWrite(led6, LOW);
    delay (delayTime);
  }
  else if (buttonState3 == HIGH)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    delay(delayTime);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);

    delay(delayTime);
  }
  else if (buttonState4 == HIGH)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, LOW);
    delay(delayTime);
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, LOW);
    digitalWrite(led6, HIGH);
    delay(delayTime);

  }
  else
  {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
  }
}

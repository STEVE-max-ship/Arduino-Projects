int button = 3,
    led = 2;
int buttonState;

void setup() {

  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);

}

void loop() {

  buttonState = digitalRead(button);

  if (buttonState == HIGH)
  { digitalWrite(led, HIGH);
    Serial.println("ON");
  }


  else
  { digitalWrite(led, LOW);
    Serial.println("OFF");
  }







}

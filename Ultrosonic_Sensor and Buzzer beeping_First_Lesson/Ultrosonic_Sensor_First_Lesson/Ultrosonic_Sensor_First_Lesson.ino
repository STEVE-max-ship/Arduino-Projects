int trigger = 7;
int echo = 6;
int buzzer = 2;
float distance;
float t;


void setup() {
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);



}

void loop() {
  digitalWrite(trigger, HIGH);
  delay(1);
  digitalWrite(trigger, LOW);
  t = pulseIn(echo, HIGH);
  distance = (t / 2) / 28.9 ;//The 28.9 is what you get from all the calculation to do with temperature.
  Serial.print("Distance  =   ");
  Serial.println(distance);

  if (distance < 10 && distance > 5)
  {
    digitalWrite(buzzer, HIGH);
    delay(300);
    digitalWrite(buzzer, LOW);
    delay(300);
  }

  else if (distance < 5)
  {


    digitalWrite(buzzer, HIGH);
    delay(100);
    digitalWrite(buzzer, LOW);
    delay(100);

  }
  else
    digitalWrite (buzzer, LOW);


}

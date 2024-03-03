int lb = 12;
int rf = 11;
int lf = 3;
int rb = 13;
int trig = 5;
int echo = 7;
float distance;
float t;

void setup() {
  pinMode(lb, OUTPUT); //lb
  pinMode(rf, OUTPUT);//rf
  pinMode(lf, OUTPUT);//lf
  pinMode(rb, OUTPUT);//rb
  pinMode(5, OUTPUT);
  pinMode(7, INPUT);

}

void loop() {
  digitalWrite(trig, HIGH);
  delay(1);
  digitalWrite(trig, LOW);
  t = pulseIn(echo, HIGH);
  distance = (t / 2) / 28.9 ;//The 28.9 is what you get from all the calculation to do with temperature.






  if (distance  < 30)

  { digitalWrite(lf, HIGH);
    digitalWrite(rf, LOW);
    digitalWrite(lb, LOW);
    digitalWrite(rb, LOW);
    delay(300);
  }



  else
  { digitalWrite(rf, HIGH);
    delay(40);
    digitalWrite(lf, HIGH);
    digitalWrite(lb, LOW);
    digitalWrite(rb, LOW);
  }
}

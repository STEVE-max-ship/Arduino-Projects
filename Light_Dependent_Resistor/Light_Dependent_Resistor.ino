const int reed = A0;
const int led = 8;
int reedval;

void setup() {

  pinMode(led, OUTPUT);
  pinMode(reed, INPUT);
  Serial.begin(9600);

}

void loop() {
  reedval = analogRead(reed);
  Serial.println(reedval);

  if (reedval <= -1)
  {
    digitalWrite(led, LOW);
  }

  else
  {
    digitalWrite(led, HIGH);
  }
}

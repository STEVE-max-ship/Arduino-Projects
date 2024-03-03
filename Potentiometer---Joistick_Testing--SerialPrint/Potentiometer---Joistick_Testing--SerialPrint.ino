int y = A0;
int x = A1;
int potx;
int poty;





void setup() {
 Serial.begin(9600);

}

void loop() {
  potx = analogRead(x);
  poty = analogRead(y);
  Serial.print(potx);
  Serial.print("\t");
  Serial.println(poty);
}

int x = 8;
int h = 5;
float a = 2.3456789;





void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.print("a\t");
  Serial.print("    ");
  Serial.print(a,10);
  Serial.print("    ");
  Serial.print(x);
  Serial.print("    ");
  Serial.println(x+h);
  delay(100);

}

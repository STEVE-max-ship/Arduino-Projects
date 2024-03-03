int forward = 2;
int back = 3;
int pot = A0;
int newpot ;
int enable = 5;
int potval;




void setup() {
Serial.begin(9600);
pinMode(forward, OUTPUT);
pinMode(back, OUTPUT);
pinMode(enable, OUTPUT);
pinMode(pot, INPUT);

}

void loop() {
  
potval = analogRead(pot);
newpot = map(potval,0,1023,0,255);
Serial.print(potval);
Serial.print("      ");
Serial.println(newpot);


analogWrite(enable, newpot);
digitalWrite(forward, HIGH);
digitalWrite(back, LOW);




}

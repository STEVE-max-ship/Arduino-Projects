int t = 50;
int h = HIGH;
int l = LOW;



void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(2,h);
delay(t);
digitalWrite(3, h);
delay(t);
digitalWrite(4, h);
delay(t);
digitalWrite(5, h);
delay(t);
digitalWrite(2,l);
delay(t);
digitalWrite(6, h);
delay(t);
digitalWrite(3, l);
delay(t);
digitalWrite(7, h);
delay(t);
digitalWrite(4, l);
delay(t);
digitalWrite(8, h);
delay(t);
digitalWrite(5, l);
delay(t);
digitalWrite(9, h);
delay(t);
digitalWrite(6, l);
delay(t);
digitalWrite(10, h);
delay(t);
digitalWrite(7, l);
delay(t);
digitalWrite(11, h);
delay(t);
digitalWrite(8, l);
delay(t);

digitalWrite(2,l);
digitalWrite(3,l);
digitalWrite(4,l);
digitalWrite(5,l);
digitalWrite(6,l);
digitalWrite(7,l);
digitalWrite(8,l);
digitalWrite(9,l);
digitalWrite(10,l);
digitalWrite(11,l);








}

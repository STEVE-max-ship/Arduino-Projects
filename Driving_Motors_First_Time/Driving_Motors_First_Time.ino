int lf = 2;
int lb = 3;
int rf = 4;
int rb = 5;






void setup() {
pinMode(lf,OUTPUT);
pinMode(lb,OUTPUT);
pinMode(rf,OUTPUT);
pinMode(rb,OUTPUT);

}

void loop() {
digitalWrite(lf,HIGH);
digitalWrite(lb,LOW);
delay(1000);
digitalWrite(lf,LOW);
digitalWrite(lb,HIGH);
delay(1000);







}

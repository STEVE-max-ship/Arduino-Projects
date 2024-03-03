
int bulb = 10;

void setup() {
pinMode(bulb,OUTPUT);
}

void loop() {

digitalWrite(bulb, HIGH);
delay(1000);
digitalWrite(bulb, LOW);
delay(1000);

}

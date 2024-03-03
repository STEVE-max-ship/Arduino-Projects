#include <SoftwareSerial.h>
SoftwareSerial bluth(10, 11); // Name the Module as "bluth". Trasmitt is 10. Recieve is 11. Pin number


void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  bluth.begin(9600);
}
void loop() {
  if (bluth.available()) {
    char data = bluth.read();
Serial.print(data);


  
  if (data = 1) {
    digitalWrite(13,HIGH);
  }
   if (data = 0) {
    digitalWrite(13,LOW);
  }
  }
}

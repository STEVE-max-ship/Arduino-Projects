#include <SoftwareSerial.h>
SoftwareSerial bluth(10, 11);

int ledPin = 13;
int state = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); // Default communication rate of the Bluetooth module
  bluth.begin(9600);

}
void loop() {
  if (bluth.available()) {
    char state = bluth.read();
    Serial.print(state);


    if (state == '0') {
      digitalWrite(ledPin, LOW);
      delay(200);
    }



    if (state == '1') {
      digitalWrite(ledPin, HIGH);
      delay(200);
    }

  }

}

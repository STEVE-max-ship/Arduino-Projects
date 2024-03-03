#include <Adafruit_PN532.h>
#include <Wire.h>
#include <SPI.h>

int nfcsck = 13,
    nfcmiso = 12,
    nfcmosi = 11,
    nfcss = 10;

Adafruit_PN532 reader(nfcss); // "reader" is the name that you can give it.


void setup() {

  pinMode(nfcsck, OUTPUT);
  pinMode(nfcmiso, OUTPUT);
  pinMode(nfcmosi, OUTPUT);
  pinMode(nfcss, OUTPUT);

  Serial.begin(9600);
  reader.begin();
  reader.SAMConfig();

}

void loop() {

  uint8_t success;
  uint8_t uid[] = {0, 0, 0, 0, 0, 0, 0,};
  uint8_t uidLength;
  success = reader.readPassiveTargetID(PN532_MIFARE_ISO14443A, uid, &uidLength);


  if (success) {
    Serial.println(" Card Detected");
    Serial.print("UID Length:  ");     Serial.println(uidLength, DEC);
    Serial.print("UID Value:  ");
    Serial.print(uid[0]);
    Serial.print(",");
    Serial.print(uid[1]);
    Serial.print(",");
    Serial.print(uid[2]);
    Serial.print(",");
    Serial.print(uid[3]);
    Serial.print(",");
    Serial.print(uid[4]);
    Serial.print(",");
    Serial.print(uid[5]);
    Serial.print(",");
    Serial.print(uid[6]);


  }





}

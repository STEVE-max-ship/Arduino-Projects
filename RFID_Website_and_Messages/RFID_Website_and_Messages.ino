#include <NfcAdapter.h>
#include <PN532.h>
#include <PN532_SPI.h>
#include<SPI.h>

PN532_SPI pn532spi(SPI, 10);
NfcAdapter nfc = NfcAdapter(pn532spi);

void setup() {
  Serial.begin(9600);
  nfc.begin();

}

void loop() {
  if (nfc.tagPresent()) {

    bool success = nfc.erase();
    if (success) {
      Serial.println("Card Erased");
    }
    else {
      Serial.println("Card Not Erased");
    }
    delay(1000);

    //  NfcTag tag = nfc.read();
    //   tag.print();   // To read a card.


    NdefMessage message = NdefMessage();
    message.addTextRecord("Hello. Wazz Up?");
    message.addUriRecord("https://www.youtube.com/");
    message.addTextRecord("OK. Bye!");
    success = nfc.write(message);
    if (success) {
      Serial.println("Program Worked");
    }
    else {
      Serial.println("Program Not Working");
    }
    Serial.print("Remove Card");
    delay(5000);
































  }







}

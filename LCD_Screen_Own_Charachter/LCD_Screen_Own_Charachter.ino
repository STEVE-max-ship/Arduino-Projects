#include <LiquidCrystal.h>

LiquidCrystal lcd (12, 11, 5, 4, 3, 2);
byte xd[8] = { // 8 Rows
  B00000, //B means byte. This is the first row
  B10101, // 2nd row
  B01010,
  B10101,
  B00000,
  B10001,
  B01110,
  B00000,


};

byte heart[8] = { // 8 Rows
  B00000, //B means byte. This is the first row
  B00000, // 2nd row
  B01010,
  B11111,
  B11111,
  B01110,
  B00100,
  B00000,


};


void setup() {

  lcd.begin(16, 2);
 // lcd.createChar(1, xd); // Charachter no 1
  lcd.createChar(2, heart); // Charachter no 2

}

void loop() {

lcd.home();
lcd.write(byte(2));




}

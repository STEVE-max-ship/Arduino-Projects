#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int a;
int j;

void setup() {
  lcd.begin(16, 2);  // 16 columns and 2 rows
  // lcd.print(79, HEX); // convert into hex or binary

}

void loop() {
  //lcd.setCursor(5,2); // 5th column and 2nd row
  lcd.setCursor(a, 0);

  for (int j = 0; j < 2; j++) {
    for (int a = 0; a < 16; a++) {
      lcd.setCursor(a, j);
      lcd.print("STEVE");
      delay(200);
      lcd.clear();
      delay(200);
    }
  }
}

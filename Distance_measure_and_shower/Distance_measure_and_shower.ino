// This program measures the distance with a U.S. sensor. Temperature sensor is also used for the calculations. The distance is shown on an lcd screen. Speaker and RGB led is also used.
// When the distance is more than 15 cm, the light is green and there is no sound. When the distance is more than 5, less than 15, the light is yellow and there is a beeping sound. When 
// the distance is less than 5, there is a red light and the speaker is constantly on.

#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int trigger = 9;
int echo = 8;
float distance;
float y;

float the ;


void setup() {
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);

  lcd.begin(16, 2);
  
 
 
}

void loop() {

  digitalWrite(trigger, HIGH);
  delay(1);
  digitalWrite(trigger, LOW);
  y = pulseIn(echo, HIGH);
  distance = (y / 2) / the ;//The 28.9 is what you get from all the calculation to do with temperature.

  lcd.home();
  lcd.print(distance);
  lcd.write(" = CM");
  delay (100);


lcd.clear();
delay(100);




}

// This program measures the distance with a U.S. sensor. Temperature sensor is also used for the calculations. The distance is shown on an lcd screen. Speaker and RGB led is also used.
// When the distance is more than 15 cm, the light is green and there is no sound. When the distance is more than 5, less than 15, the light is yellow and there is a beeping sound. When 
// the distance is less than 5, there is a red light and the speaker is constantly on.

#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#include <DHT.h>
#include <DHT_U.h>
int DHTPIN = 38;
#define DHTTYPE DHT11
float t;
DHT humid(DHTPIN, DHTTYPE);

int buzzer = 11;
int red = 7;
int green = 6;
int blue = 10;
int trigger = 9;
int echo = 8;
float distance;
float y;
float c;
float d;
float e;
float the ;


void setup() {
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);

  lcd.begin(16, 2);
  humid.begin();

 pinMode(buzzer,OUTPUT);
 
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);  
}



void loop() {

  t = humid.readTemperature();

  c = 331.1 * sqrt (1 + t / 273.15);
  d = c * 100;
  e = d / 1000000;
  the  =  1 / e ;


  digitalWrite(trigger, HIGH);
  delay(1);
  digitalWrite(trigger, LOW);
  y = pulseIn(echo, HIGH);
  distance = (y / 2) / the ;//The 28.9 is what you get from all the calculation to do with temperature.

  lcd.home();
  lcd.print(distance);
  lcd.write(" = CM");
  delay (100);

  if (distance <= 5)
  {
      digitalWrite(red, HIGH);
      digitalWrite(blue, LOW);
      digitalWrite(green, LOW);
  
      

      digitalWrite(buzzer, HIGH);
} 

 if ((distance >=6) && (distance<= 14))
 {
  digitalWrite(red, HIGH);
      digitalWrite(blue, LOW);
      digitalWrite(green, HIGH);

      digitalWrite(buzzer, HIGH);
      delay(500);
      digitalWrite(buzzer, LOW);
      delay(50);
 }

  if (distance >=15 )
  {
       digitalWrite(red, LOW);
      digitalWrite(blue, LOW);
      digitalWrite(green, HIGH);

   digitalWrite(buzzer, LOW);   
  }


lcd.clear();




}

#include <DHT.h>
#include <DHT_U.h>
int DHTPIN = 7;
#define DHTTYPE DHT11
float t;

DHT humid(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  humid.begin();
  

}

void loop() {

t = humid.readTemperature();
Serial.print("Temperature is  =  ");
Serial.println(t);




}

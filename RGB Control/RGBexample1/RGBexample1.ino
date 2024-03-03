int redPin = 6;
int greenPin = 13;
int bluePin = 10;

 
void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
}
 
void loop()
{
  digitalWrite(redPin,HIGH);
  
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin,HIGH);
}
 

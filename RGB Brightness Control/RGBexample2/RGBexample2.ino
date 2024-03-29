int redPin = A0;
int greenPin = 11;
int bluePin = 13;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
}
 
void loop()
{
  setColor(1, 0, 0);  // red lowest brightness
  delay(1000);
  setColor(50, 0, 0);  // red brighter
  delay(1000);
  setColor(140, 0, 0);  // red even brighter
  delay(1000);
  setColor(255, 0, 0);  // red brightest
  delay(1000);
  setColor(0, 255, 0);  // green
  delay(1000);
  setColor(0, 0, 255);  // blue
  delay(1000);
  setColor(255, 255, 0);  // yellow
  delay(1000);  
  setColor(80, 0, 80);  // purple
  delay(1000);
  setColor(255, 50, 0);  // Orange
  delay(1000);
}
 
void setColor(int red, int green, int blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}

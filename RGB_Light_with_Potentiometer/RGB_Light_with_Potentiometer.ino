int potR = A3,
    potG = A4,
    potB = A5,
 red = A0,
 green = A1,
 blue = A2,
      potRval,
      potGval,
      potBval,
   newred,newgreen,newblue;






void setup() {
  pinMode(potR, INPUT);
  pinMode(potG, INPUT);
  pinMode(potB, INPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);

}

void loop() {
  potRval = analogRead(potR);
  potGval = analogRead(potG);
  potBval = analogRead(potB);

newred = map(potRval,0,1023,0,255);
newgreen = map(potGval,0,1023,0,255);
newblue = map(potBval,0,1023,0,255);

analogWrite(red, newred);
analogWrite(green, newgreen);
analogWrite(blue, newblue);

}

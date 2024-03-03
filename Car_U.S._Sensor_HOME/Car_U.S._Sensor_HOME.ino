int rf = 2;
int rb = 3;
int lf = 4;
int lb = 5;
int rrf = 6;
int rrb = 7;
int llf = 8;
int llb = 9;
int trig = 10;
int echo = 12;
float distance;
float t;


void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(12,INPUT);


}

void loop() {
 digitalWrite(trig, HIGH);
  delay(1);
  digitalWrite(trig, LOW);
  t = pulseIn(echo, HIGH);
  distance = (t / 2) / 28.9 ;//The 28.9 is what you get from all the calculation to do with temperature.




digitalWrite(lf, HIGH);
digitalWrite(rf, HIGH);
digitalWrite(llf, HIGH);
digitalWrite(rrf, HIGH);

 if (distance < 10)
  {
    digitalWrite(lf, LOW);
digitalWrite(rf, LOW);
digitalWrite(llf, LOW);
digitalWrite(rrf, LOW);


digitalWrite(lb, HIGH);
digitalWrite(rb, HIGH);
digitalWrite(llb, HIGH);
digitalWrite(rrb, HIGH);

digitalWrite(lf,HIGH);
digitalWrite(llf, HIGH);
delay(2000);

  }


else
{
  digitalWrite(lf, HIGH);
digitalWrite(rf, HIGH);
digitalWrite(llf, HIGH);
digitalWrite(rrf, HIGH);
  
  
  
  
  }























  

}

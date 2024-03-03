int lf = 4;
int lb = 5;
int rf = 2;
int rb = 3;
int trig = 6;
int echo = 7;

float distance;
float t;





void setup() {
  pinMode(lf, OUTPUT);
  pinMode(lb, OUTPUT);
  pinMode(rf, OUTPUT);
  pinMode(rb, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  
}

void loop() {

   digitalWrite(trig, HIGH);
  delay(1);
  digitalWrite(trig, LOW);
  t = pulseIn(echo, HIGH);
  distance = (t / 2) / 28.9 ;


    
  
  digitalWrite(lb, HIGH);
  digitalWrite(rf, LOW);
  digitalWrite(lf, LOW);
  digitalWrite(rb, HIGH);
  


 


  if (distance < 15)
    {
     

      digitalWrite(lf, LOW);
      digitalWrite(rb, LOW);
      digitalWrite(lb, LOW);
      digitalWrite(rf, LOW);
      

}

else if (distance > 15)

{
digitalWrite(lf, LOW);
  digitalWrite(rf, LOW);
  
      digitalWrite(lb, HIGH);
      digitalWrite(rb, HIGH);
  

}




















  }

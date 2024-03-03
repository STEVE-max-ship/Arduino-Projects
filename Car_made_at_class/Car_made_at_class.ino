int rf = 2;
int rb = 3;
int lf = 4;
int lb = 5;
int rrf = 6;
int rrb = 7;
int llf = 8;
int llb = 9;


void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

}

void loop() {

  digitalWrite(lf, HIGH);
  digitalWrite(rf, HIGH);
  digitalWrite(llf, HIGH);
  digitalWrite(rrf, HIGH);
  digitalWrite(lb, LOW);
  digitalWrite(rb, LOW);
  digitalWrite(llb, LOW);
  digitalWrite(rrb, LOW);

  delay(1000);

  digitalWrite(lf, HIGH);
  digitalWrite(llf, HIGH);
  digitalWrite(rf, HIGH);
  digitalWrite(rrf, LOW);
  digitalWrite(lb, LOW);
  digitalWrite(rb, LOW);
  digitalWrite(llb, LOW);
  digitalWrite(rrb, HIGH);
  delay(1000);

  digitalWrite(lf, HIGH);
  digitalWrite(rf, HIGH);
  digitalWrite(llf, HIGH);
  digitalWrite(rrf, HIGH);
  digitalWrite(lb, LOW);
  digitalWrite(rb, LOW);
  digitalWrite(llb, LOW);
  digitalWrite(rrb, LOW);
  delay(1000);

  digitalWrite(lf, LOW);
  digitalWrite(rf, 1);
  digitalWrite(llf, LOW);
  digitalWrite(rrf, 1);
  digitalWrite(lb, LOW);
  digitalWrite(rb, LOW);
  digitalWrite(llb, LOW);
  digitalWrite(rrb, LOW);
  delay(1000);


}

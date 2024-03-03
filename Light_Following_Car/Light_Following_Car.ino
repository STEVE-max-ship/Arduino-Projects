int lb = 12;
int rf = 11;
int lf = 3;
int rb = 13;
int lightlf = A0;
int lightlb = A1;
int lightrb = A2;
int lightrf = A3;
int lightval1;
int lightval2;
int lightval3;
int lightval4;



void setup() {
  pinMode(lightlf, INPUT);
  pinMode(lightlb, INPUT);
  pinMode(lightrf, INPUT);
  pinMode(lightrb, INPUT);

  pinMode(lb, OUTPUT);
  pinMode(rf, OUTPUT);
  pinMode(lf, OUTPUT);
  pinMode(rb, OUTPUT);

Serial.begin(9600);
  

}

void loop() {
 lightval1 = analogRead(lightlf);
 lightval2 = analogRead(lightlb);
 lightval3 = analogRead(lightrf);
 lightval4 = analogRead(lightrb);

Serial.print("Value 1= ");
Serial.print(lightval1);
Serial.print("\t");
Serial.print("Value 2= ");
Serial.print(lightval2);
Serial.print("\t");
Serial.print("Value 3= ");
Serial.print(lightval3);
Serial.print("\t");
Serial.print("Value 4= ");
Serial.print(lightval4);
Serial.println("\t");






}

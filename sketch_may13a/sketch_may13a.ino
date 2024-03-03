int ldr = A0;
int isik;

void setup() {
  pinMode(ldr, INPUT);
  Serial.begin(9600);
}

void loop() {
  isik = analogRead(ldr);
  Serial.println(isik);
  if (isik<500){
    
  }

}

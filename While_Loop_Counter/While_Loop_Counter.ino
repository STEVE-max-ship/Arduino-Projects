int a = 0;





void setup() {
  Serial.begin(9600);
}

void loop() {
  while (a < 50){ 
    a = a + 1;
Serial.println(a);
delay(200);

  }
  while(1);
Serial.println(a);


  }

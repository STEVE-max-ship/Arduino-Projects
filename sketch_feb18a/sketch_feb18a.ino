int button1 = 2;
int button2 = 3;
int button3 = 4;
int bs1;
int bs2;
int bs3;
int t = 100;
int a = 0;




void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);




}

void loop() {

  bs1 = digitalRead(button1);
  bs2 = digitalRead(button2);
  bs3 = digitalRead(button3);


  while (bs1 == HIGH) {
    a = a + 1;
    Serial.println(a);
    while (bs1 == HIGH) { //The second while tells the button to JUST READ the button state when it is pressed constantly.
      bs1 = digitalRead(button1);
    }

  }
  while (bs2 == HIGH) {
    a = a - 1;
    Serial.println(a);
    while (bs2 == HIGH) {
      bs2 = digitalRead(button2);
    }
  }



  if (bs3 == HIGH) {
    Serial.print(a);

    if (a == 1) {
     
      Serial.print("st");
    }
    if (a == 2) {
      
      Serial.print("nd");
    }
    if (a == 3) {
      
      Serial.print("rd");
    }

    if (a > 3) {
      Serial.print("th");
    }
    Serial.println("   motor working");

  }
}

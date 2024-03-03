int stud [10] = {2,4,32,65,76,43};



void setup() {
 Serial.begin(9600);

}

void loop() {
  stud[0]= 100;
 Serial.println(stud[0]);
}

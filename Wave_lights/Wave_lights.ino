
//Connect ports 2-11 in columns of the bread board. The positive side of the bulbs should be in the column. The negatuve side of the bulbs should
//be in the long positive side of bread board.Then it shold look like A Wave. Video Reference - https://www.youtube.com/watch?v=c4M-GAS4cWE&t=12s







void setup() {
  for(int pin=2; pin<14; pin++){
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  



  int t = 20;
  
  for(int i=2; i<14; i++){
    digitalWrite(i, HIGH);
    delay(t);

  }
  for(int i=2; i<14; i++){
    digitalWrite(i, LOW);
    delay(t);

  }

}

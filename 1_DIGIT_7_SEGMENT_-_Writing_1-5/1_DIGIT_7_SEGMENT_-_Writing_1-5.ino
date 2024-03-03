
//This code is for 1 Digit 7 Segment LED Matrix.
//Refered Video - https://www.youtube.com/watch?v=kEVdZ1i4Uok       
//Useful Google Image to see the alphabets in the LED Matrix - https://www.google.cz/search?safe=active&rlz=1C1CHBF_enCZ785CZ785&biw=1366&bih=626&tbm=isch&sa=1&ei=mFT4W5CVDofIaPKZv-gC&q=1+DIGIT+7+segment+alphabets+arduino&oq=1+DIGIT+7+segment+alphabets+arduino&gs_l=img.3...7100.8996..9249...0.0..0.219.731.6j1j1......1....1..gws-wiz-img.4HN66iChNSA#imgrc=RnsoaYOKhQRpnM:
//If rebuilding then use port 5-13, 5v, ground.




int a = 8;
int b = 9;
int c = 11;
int d = 12;
int e = 13;
int f = 7;
int g = 6;
int dp = 10;






void setup() {
  // This part just tells the ardiuno which ports to supply electricity from.
pinMode(a, OUTPUT);
pinMode(b, OUTPUT);
pinMode(c, OUTPUT);
pinMode(d, OUTPUT);
pinMode(e, OUTPUT);
pinMode(f, OUTPUT);
pinMode(g, OUTPUT);
pinMode(dp, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(b, HIGH);//These tow lines turn on 2 specific lines on the led to show the number 1.
  digitalWrite(c, HIGH);

  delay(1000);
  digitalWrite(b, 0);//These tow lines turn on 2 specific lines on the led to show the number 1.
  digitalWrite(c, 0);


   digitalWrite(a, HIGH);// These lines are supposed to turn on for the number 2. 
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
delay(1000);
   digitalWrite(a, 0);// To turn of 2. 
  digitalWrite(b, 0);
  digitalWrite(g, 0);
  digitalWrite(e, 0);
  digitalWrite(d, 0);

 digitalWrite(a, HIGH);// These lines are supposed to turn on for the number 3. 
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);

  delay(1000);

   digitalWrite(a, 0);// To turn of 3.
  digitalWrite(b, 0);
  digitalWrite(g, 0);
  digitalWrite(c, 0);
  digitalWrite(d, 0);

   digitalWrite(f, HIGH);// These lines are supposed to turn on for the number 4
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  

  delay(1000);

  
 digitalWrite(f, 0);// To turn of 4
  digitalWrite(b, 0);
  digitalWrite(g, 0);
  digitalWrite(c, 0);


  digitalWrite(a, HIGH);// These lines are supposed to turn on for the word 5
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);

  delay(1000);

   digitalWrite(a, 0);// To turn of 5
  digitalWrite(f, 0);
  digitalWrite(g, 0);
  digitalWrite(c, 0);
  digitalWrite(d, 0);



  



  

  
}

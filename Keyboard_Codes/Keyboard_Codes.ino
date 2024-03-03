//How to interact with the arduino using the keyboard.
//This program turns on the built in led, pin number 13 when 'a' is pressed. Turns the led off when b is pressed.

int data;

void setup() {
  Serial.begin(9600);
pinMode(13,OUTPUT);

}

void loop() {
  /* if (!Serial.available()) //If serial NOT available, it will print "waiting".
   Serial.println("Waiting"); */
   
  if (Serial.available()) {
    data = Serial.read();
switch (data){
  

  case 'a':
  Serial.println("Hello");
  delay(250);
  Serial.println("How are you?");                   //When 'a' is pressed to that.
  delay(250);
  break;
  
 case 'b':
 digitalWrite(13,HIGH);                             //When 'b' is pressed to that.
 break;

 case 'c':
 digitalWrite(13,LOW);                              //When 'c' is pressed to that.
 break;

 case 'd':
 Serial.println("How is it going?");
  delay(250);
  Serial.println("What up?");                       //When 'd' is pressed to that.
  delay(250);
  break;

  case 'e':
 Serial.println("bello");
  delay(250);                                       //When 'e' is pressed to that.
  Serial.println("papadum?");
  delay(250);
  break;

  default:
  Serial.println("This message will always show cuz its DEFAULT");
  break;
}

    

  /*  if (data == 'a')
digitalWrite(13, HIGH);

if (data=='b')
digitalWrite(13, LOW);
    
    } */
















}

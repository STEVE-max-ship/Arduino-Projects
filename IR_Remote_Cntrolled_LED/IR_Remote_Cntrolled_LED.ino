/* This program uses an IR remote and controls the brightness and status of an LED. The Button "1" on the remote turns on or off 
the LED. The buttons "+" and "-" control the brightness of the LED.  */

#include <IRremote.h> 

int RECV_PIN = 8; 
int led1 = 6;
int brightness = 0;
int fadeAmount = 5; 
int itsONled[] = {0};

#define     onoff  16724175 
#define brightinc  16754775 
#define brightdec  16769055 

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
  Serial.begin(9600);   
  irrecv.enableIRIn(); 
  pinMode(led1, OUTPUT);
 
}

void loop() {
  analogWrite(led1, brightness);
    
  if (irrecv.decode(&results)) {
    unsigned int value = results.value;
    switch(value) {
       case onoff:
         if(itsONled[1] == 1) {        
           brightness = 0 ;
            itsONled[1] = 0;           
         } else {                      
           brightness = 255; 
             itsONled[1] = 1;          
         }
          break; 
        
       case brightinc:
         if(itsONled[2] == 1) {
            brightness = brightness + fadeAmount ; 
            itsONled[2] = 0;
         } else {
             brightness = brightness + fadeAmount ; 
             itsONled[2] = 1;
         }
          break;
          
       case brightdec:
         if(itsONled[3] == 1) {
            brightness = brightness - fadeAmount ; 
            itsONled[3] = 0;
         } else {
          brightness = brightness - fadeAmount ; 
             itsONled[3] = 1;
         }
          break;          
    }
   
    irrecv.resume();
  }
}

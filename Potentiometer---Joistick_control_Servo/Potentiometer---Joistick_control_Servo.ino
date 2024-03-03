#include <Servo.h>
Servo test;//test is the servo name.
int x(A0);
int newval;
int potx;

void setup() {
  test.attach(9);

}

void loop() {
 potx = analogRead(x);
 newval = map(potx, 0, 1023, 0, 180);
 test.write(newval);
 delay(40);
  
}

#include <Servo.h>

Servo servo;

void setup() {
  servo.attach(7);
  servo.write(0);

}

void loop() {
  servo.write(0);
  delay(1500);
  servo.write(180);
  delay(1500);

}

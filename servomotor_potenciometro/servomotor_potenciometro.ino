#include <Servo.h>
Servo servo;
int pot = A0;

void setup() {
  servo.attach(7);
  servo.write(0);
  Serial.begin(9600);
}

void loop() {
  int valorPotenciometro = analogRead(pot);
  double angulo= 0.17595308* valorPotenciometro;
  double espera= 0.4887585533* valorPotenciometro;
  rotarServo(angulo,espera);
}

void rotarServo(double angulo, double espera) {
  servo.write(0);
  delay(espera);
  servo.write(angulo);
  delay(espera);
}

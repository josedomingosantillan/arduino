#include <Servo.h>
Servo servo;
int Trigger = 2;
int Echo = 3;
int ledA = 4;
int ledB = 5;
int ledC = 6;
int ledD = 7;
int ledE = 8;
int ledF = 9;
int ledG = 10;
void setup() {
  Serial.begin(9600);
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledC, OUTPUT);
  pinMode(ledD, OUTPUT);
  pinMode(ledE, OUTPUT);
  pinMode(ledF, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(Trigger, OUTPUT);
  pinMode(Echo, INPUT);
  digitalWrite(Trigger, LOW);
  servo.attach(11);
  servo.write(0);
}

void loop() {
  long t;
  long d;

  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trigger, LOW);

  t = pulseIn(Echo, HIGH);
  d = t / 59;

  Serial.println(d);
  abrirPuerta(d);
}

void abrirPuerta(int d) {
  if (d >= 100) {
    servo.write(0);
    apagar();
    return;
  }

  double valor = d * 0.9090909091;
  servo.write(valor);

  if (d >= 0 && d < 21) {
    uno();
    return;
  }

  if (d >= 20 && d < 30) {
    dos();
    return;
  }

  if (d >= 30 && d < 40) {
    tres();
    return;
  }

  if (d >= 40 && d < 50) {
    cuatro();
    return;
  }

  if (d >= 50 && d < 60) {
    cinco();
    return;
  }

  if (d >= 60 && d < 70) {
    seis();
    return;
  }

  if (d >= 70 && d < 80) {
    siete();
    return;
  }

  if (d >= 80 && d < 90) {
    ocho();
    return;
  }

  nueve();
  return;
}

void apagar() {
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
}

void uno() {
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
}
void dos() {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, HIGH);
}
void tres() {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, HIGH);
}
void cuatro() {
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
}

void cinco() {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
}

void seis() {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
}

void siete() {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
}

void ocho() {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
}

void nueve() {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
}
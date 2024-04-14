int ledA = 2;
int ledB = 3;
int ledC = 4;
int ledD = 5;
int ledE = 6;
int ledF = 7;
int ledG = 8;
void setup() {
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledC, OUTPUT);
  pinMode(ledD, OUTPUT);
  pinMode(ledE, OUTPUT);
  pinMode(ledF, OUTPUT);
  pinMode(ledG, OUTPUT);
}

void loop() {
  cero();
  delay(1000);
  uno();
  delay(1000);
  dos();
  delay(1000);
  tres();
  delay(1000);
  cuatro();
  delay(1000);
  cinco();
  delay(1000);
  seis();
  delay(1000);
  siete();
  delay(1000);
  ocho();
  delay(1000);
  nueve();
  delay(1000);
  a();
  delay(1000);
  b();
  delay(1000);
  c();
  delay(1000);
  d();
  delay(1000);
  e();
  delay(1000);
  f();
  delay(1000);
  e();
  delay(1000);
   d();
  delay(1000);
  c();
  delay(1000);
  b();
  delay(1000);
  a();
  delay(1000);
  nueve();
  delay(1000);
  ocho();
  delay(1000);
  siete();
  delay(1000);
  seis();
  delay(1000);
  cinco();
  delay(1000);
  cuatro();
  delay(1000);
  tres();
  delay(1000);
   dos();
  delay(1000);
  uno();
  delay(1000);
}

void cero() {
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, HIGH);
}

void uno() {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
}
void dos() {
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite( ledD, HIGH);
  digitalWrite(ledE, LOW);
  digitalWrite( ledF, HIGH);
  digitalWrite(ledG, LOW);
}
void tres() {
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE,  HIGH);
  digitalWrite(ledF,  HIGH);
  digitalWrite(ledG, LOW);
}
void cuatro() {
  digitalWrite(ledA,  HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC,  HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE,  HIGH);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
}

void cinco() {
  digitalWrite(ledA, LOW);
  digitalWrite(ledB,  HIGH);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE,  HIGH);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
}

void seis() {
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
}

void siete() {
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC,  HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE,  HIGH);
  digitalWrite(ledF,  HIGH);
  digitalWrite(ledG,  HIGH);
}

void ocho() {
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
}

void nueve() {
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC,  HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE,  HIGH);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
}

void a() {
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC,  HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
}

void b() {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
}

void c() {
  digitalWrite(ledA, LOW);
  digitalWrite(ledB,  HIGH);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD,  HIGH);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG,  HIGH);
}

void d() {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, LOW);
}

void e() {
  digitalWrite(ledA, LOW);
  digitalWrite(ledB,  HIGH);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD,  HIGH);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
}

void f() {
  digitalWrite(ledA, LOW);
  digitalWrite(ledB,  HIGH);
  digitalWrite(ledC,  HIGH);
  digitalWrite(ledD,  HIGH);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
}
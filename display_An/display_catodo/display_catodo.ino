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
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, LOW);
}

void uno() {
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
}
void dos() {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, LOW);
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
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, HIGH);
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
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, HIGH);
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
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
}

void a() {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
}

void b() {
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
}

void c() {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, LOW);
}

void d() {
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, HIGH);
}

void e() {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
}

void f() {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
}
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
  encenderDisplay(d);

  delay(100);
}

void encenderDisplay(int d) {
  if (d > 0 && d < 20) {
    uno();
    return;
  }

  if (d > 21 && d < 40) {
    dos();
    return;
  }

  if (d > 41 && d < 60) {
    tres();
    return;
  }

  if (d > 61 && d < 80) {
    cuatro();
    return;
  }

  if (d > 81 && d < 100) {
    cinco();
    return;
  }

  if (d > 101 && d < 120) {
    seis();
    return;
  }

  if (d > 121 && d < 140) {
    siete();
    return;
  }

  if (d > 141 && d < 160) {
    ocho();
    return;
  }

  if (d > 161) {
    nueve();
    return;
  }

  apagar();
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
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, LOW);
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
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, HIGH);
}
void cuatro() {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, LOW);
}

void cinco() {
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
}

void seis() {
   digitalWrite(ledA, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
}

void siete() {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, HIGH);
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
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
}
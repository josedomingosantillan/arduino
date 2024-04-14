const int led2 = 2;
const int led3 = 3;
const int led4 = 4;
const int led5 = 5;
const int led6 = 6;
const int led7 = 7;
const int led8 = 8;
const int led9 = 9;
const int led10 = 10;
const int led11 = 11;
const int led12 = 12;
const int led13 = 13;

void setup() {
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led11, OUTPUT);
  pinMode(led12, OUTPUT);
  pinMode(led13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("Comienza el loop");

  encenderLed2();
  delay(100);
  apagarLed2();

  encenderLed3();
  delay(100);
  apagarLed3();

  encenderLed4();
  delay(100);
  apagarLed4();

  encenderLed5();
  delay(100);
  apagarLed5();

  encenderLed6();
  delay(100);
  apagarLed6();

  encenderLed7();
  delay(100);
  apagarLed7();

  encenderLed8();
  delay(100);
  apagarLed8();

  encenderLed9();
  delay(100);
  apagarLed9();

  encenderLed10();
  delay(100);
  apagarLed10();

  encenderLed11();
  delay(100);
  apagarLed11();

  encenderLed12();
  delay(100);
  apagarLed12();

  encenderLed13();
  delay(100);
  apagarLed13();

  encenderLed2();
  delay(100);
  encenderLed3();
  delay(100);
  encenderLed4();
  delay(100);
  encenderLed5();
  delay(100);
  encenderLed6();
  delay(100);
  encenderLed7();
  delay(100);
  encenderLed8();
  delay(100);
  encenderLed9();
  delay(100);
  encenderLed10();
  delay(100);
  encenderLed11();
  delay(100);
  encenderLed12();
  delay(100);
  encenderLed13();
  delay(100);

  apagarLed13();
  delay(200);
  apagarLed12();
  delay(200);
  apagarLed11();
  delay(200);
  apagarLed10();
  delay(200);
  apagarLed9();
  delay(200);
  apagarLed8();
  delay(200);
  apagarLed7();
  delay(200);
  apagarLed6();
  delay(200);
  apagarLed5();
  delay(200);
  apagarLed4();
  delay(200);
  apagarLed3();
  delay(200);
  apagarLed2();
  delay(200);

  Serial.println("Termina el loop");
}

void encenderLed2() {
  Serial.println("Encendiendo led 2");
  digitalWrite(led2, HIGH);
}

void apagarLed2() {
  Serial.println("Apagando led 2");
  digitalWrite(led2, LOW);
}

void encenderLed3() {
  Serial.println("Encendiendo led 3");
  digitalWrite(led3, HIGH);
}

void apagarLed3() {
  Serial.println("Apagando led 3");
  digitalWrite(led3, LOW);
}

void encenderLed4() {
  Serial.println("Encendiendo led 4");
  digitalWrite(led4, HIGH);
}

void apagarLed4() {
  Serial.println("Apagando led 4");
  digitalWrite(led4, LOW);
}

void encenderLed5() {
  Serial.println("Encendiendo led 5");
  digitalWrite(led5, HIGH);
}

void apagarLed5() {
  Serial.println("Apagando led 5");
  digitalWrite(led5, LOW);
}

void encenderLed6() {
  Serial.println("Encendiendo led 6");
  digitalWrite(led6, HIGH);
}

void apagarLed6() {
  Serial.println("Apagando led 6");
  digitalWrite(led6, LOW);
}

void encenderLed7() {
  Serial.println("Encendiendo led 7");
  digitalWrite(led7, HIGH);
}

void apagarLed7() {
  Serial.println("Apagando led 7");
  digitalWrite(led7, LOW);
}

void encenderLed8() {
  Serial.println("Encendiendo led 8");
  digitalWrite(led8, HIGH);
}

void apagarLed8() {
  digitalWrite(led8, LOW);
  Serial.println("Apagando led 8");
}

void encenderLed9() {
  Serial.println("Encendiendo led 9");
  digitalWrite(led9, HIGH);
}

void apagarLed9() {
  Serial.println("Apagando led 9");
  digitalWrite(led9, LOW);
}

void encenderLed10() {
  Serial.println("Encendiendo led 10");
  digitalWrite(led10, HIGH);
}

void apagarLed10() {
  Serial.println("Apagando led 10");
  digitalWrite(led10, LOW);
}

void encenderLed11() {
  Serial.println("Encendiendo led 11");
  digitalWrite(led11, HIGH);
}

void apagarLed11() {
  Serial.println("Apagando led 1");
  digitalWrite(led11, LOW);
}

void encenderLed12() {
  Serial.println("Encendiendo led 12");
  digitalWrite(led12, HIGH);
}

void apagarLed12() {
  Serial.println("Apagando led 12");
  digitalWrite(led12, LOW);
}

void encenderLed13() {
  Serial.println("Encendiendo led 13");
  digitalWrite(led13, HIGH);
}

void apagarLed13() {
  Serial.println("Apagando led 13");
  digitalWrite(led13, LOW);
}
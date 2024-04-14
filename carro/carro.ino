#include <SoftwareSerial.h>  // Incluimos la librería  SoftwareSerial
SoftwareSerial BT(A4, A5);
int faros = 2;
int intermitente_derecha_trasera = 3;
int intermitente_derecha_frontal = 4;
int intermitente_izquierda_trasera = 13;
int intermitente_izquierda_frontal = A1;
int reversa = 7;
int freno_izquierdo = 8;
int freno_derecho = A2;
int claxon = A3;
int Trigger = 11;
int Echo = 12;
float fotoResistencia = A0;
float cantidad_luz = 0;

int izqA = 5;
int izqB = 6;
int derA = 9;
int derB = 10;
int vel = 255;

void setup() {
  BT.begin(9600);
  Serial.begin(9600);
  pinMode(fotoResistencia, INPUT);
  pinMode(faros, OUTPUT);
  pinMode(intermitente_derecha_trasera, OUTPUT);
  pinMode(intermitente_derecha_frontal, OUTPUT);
  pinMode(intermitente_izquierda_trasera, OUTPUT);
  pinMode(intermitente_izquierda_frontal, OUTPUT);
  pinMode(reversa, OUTPUT);
  pinMode(freno_izquierdo, OUTPUT);
  pinMode(freno_derecho, OUTPUT);
  pinMode(claxon, OUTPUT);
  pinMode(Trigger, OUTPUT);
  pinMode(Echo, INPUT);
  digitalWrite(Trigger, LOW);
  pinMode(izqA, OUTPUT);
  pinMode(izqB, OUTPUT);
  pinMode(derA, OUTPUT);
  pinMode(derB, OUTPUT);
}

void loop() {
  apagar_faros();
  apagar_intermitente_izquierda();
  apagar_intermitente_derecha();
  apagar_reversa();
  apagar_rueda_derecha();
  apagar_rueda_izquierda();
  apagar_frenos();
  cantidad_luz = analogRead(fotoResistencia);
  encender_faros_automaticamente(cantidad_luz);

  if (BT.available()) {

    char dato = BT.read();

    if (dato == 'a') {
      avanzar();
      return;
    }

    if (dato == 'r') {
      encender_reversa();
      return;
    }

    if (dato == 'c') {
      encender_claxon();
      return;
    }

    if (dato == 'd') {
      encender_intermitente_derecha();
      girar_rueda_derecha();
      apagar_rueda_izquierda();
      delay(1000);
      return;
    }

    if (dato == 's') {
      encender_frenos();
      encender_intermitente_derecha();
      encender_intermitente_izquierda();
      delay(2000);
      return;
    }

    if (dato == 'n') {
      for (int a = 0; a < 4; a++) {
        encender_intermitente_derecha();
        encender_intermitente_izquierda();
        delay(500);
        apagar_intermitente_izquierda();
        apagar_intermitente_derecha();
        delay(200);
      }

      return;
    }

    if (dato == 'i') {
      encender_intermitente_izquierda();
      girar_rueda_izquierda();
      apagar_rueda_derecha();
      delay(1000);
      return;
    }

    if (dato == 'f' && cantidad_luz > 0) {
      encender_faros();
      delay(1000);
      return;
    }
  }

  if (Serial.available())  // Si llega un dato por el monitor serial se envía al puerto BT
  {
    BT.write(Serial.read());
  }
}

void distancia_objetos() {
  long t;
  long d;

  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trigger, LOW);

  t = pulseIn(Echo, HIGH);
  d = t / 59;

  if (d <= 10) {
    encender_frenos();
    encender_intermitente_derecha();
    encender_intermitente_izquierda();
    delay(300);
    apagar_intermitente_derecha();
    apagar_intermitente_izquierda();
    delay(300);
  }
  delay(10);
}

void encender_faros_automaticamente(double cantidad_luz) {
  Serial.println(cantidad_luz);
  if (cantidad_luz == 0) {
    encender_faros();
    delay(500);
  } else {
    apagar_faros();
  }
}

void encender_claxon() {
  analogWrite(claxon, 255);
  delay(500);
  analogWrite(claxon, 0);
  delay(100);
  analogWrite(claxon, 255);
  delay(500);
  analogWrite(claxon, 0);
  delay(100);
  analogWrite(claxon, 255);
  delay(500);
  analogWrite(claxon, 0);
  delay(100);
}

void encender_faros() {
  digitalWrite(faros, HIGH);
}

void apagar_faros() {
  digitalWrite(faros, LOW);
}

void encender_intermitente_derecha() {
  digitalWrite(intermitente_derecha_trasera, HIGH);
  digitalWrite(intermitente_derecha_frontal, HIGH);
}

void apagar_intermitente_derecha() {
  digitalWrite(intermitente_derecha_trasera, LOW);
  digitalWrite(intermitente_derecha_frontal, LOW);
}

void encender_intermitente_izquierda() {
  digitalWrite(intermitente_izquierda_trasera, HIGH);
  analogWrite(intermitente_izquierda_frontal, 255);
}

void apagar_intermitente_izquierda() {
  digitalWrite(intermitente_izquierda_trasera, LOW);
  analogWrite(intermitente_izquierda_frontal, 0);
}

void encender_reversa() {
  digitalWrite(reversa, HIGH);
  analogWrite(izqB, vel);
  analogWrite(derB, vel);
  delay(2000);
}

void apagar_reversa() {
  digitalWrite(reversa, LOW);
  analogWrite(izqB, 0);
  analogWrite(derB, 0);
}

void encender_frenos() {
  digitalWrite(freno_izquierdo, HIGH);
  analogWrite(freno_derecho, 255);
}

void apagar_frenos() {
  digitalWrite(freno_izquierdo, LOW);
  analogWrite(freno_derecho, 0);
}


void avanzar() {
  Serial.println("Avanzando");
  girar_rueda_derecha();
  girar_rueda_izquierda();
  distancia_objetos();
  delay(2000);
}

void girar_rueda_izquierda() {
  analogWrite(izqA, vel);
}

void girar_rueda_derecha() {
  analogWrite(derA, vel);
}

void apagar_rueda_izquierda() {
  analogWrite(izqA, 0);
}

void apagar_rueda_derecha() {
  analogWrite(derA, 0);
}

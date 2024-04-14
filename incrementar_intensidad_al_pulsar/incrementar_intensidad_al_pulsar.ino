int pulsador = A0;
int estadoPulsador = 0;
int ledVerde = 3;
int intensidad = 0;
void setup() {
  pinMode(pulsador, INPUT);
  pinMode(ledVerde, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  estadoPulsador = digitalRead(pulsador);

  if (estadoPulsador == 0) {
    for (intensidad = 0; intensidad < 255; intensidad++) {
      analogWrite(ledVerde, intensidad);
      Serial.println(intensidad);
    }
  }

  if (estadoPulsador == 1) {
    digitalWrite(ledVerde, LOW);
  }
}

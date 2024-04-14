int pulsador = A0;
int estadoPulsador = 0;
int ledVerde = 13;
void setup() {
  pinMode(pulsador, INPUT);
  pinMode(ledVerde, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  estadoPulsador = digitalRead(pulsador);

  if (estadoPulsador == 1) {
    digitalWrite(ledVerde, HIGH);
    Serial.println("encendido");
  }

  if (estadoPulsador == 0) {
    digitalWrite(ledVerde, LOW);
    Serial.println("apagado");
  }
}

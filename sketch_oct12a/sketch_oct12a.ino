int ledVerde = 3;
int intensidad = 0;
void setup() {
  pinMode(ledVerde, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for (intensidad = 0; intensidad < 255; intensidad++) {
    analogWrite(ledVerde, intensidad);
    Serial.println(intensidad);
    delay(10);
  }

  for (intensidad = 255; intensidad >= 0; intensidad--) {
    analogWrite(ledVerde, intensidad);
    Serial.println(intensidad);
    delay(10);
  }
}

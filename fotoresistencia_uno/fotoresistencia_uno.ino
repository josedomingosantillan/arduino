int led = 2;
float fotoResistencia = A0;
float salida = 0;
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(fotoResistencia, INPUT);
}

void loop() {
  salida = analogRead(fotoResistencia);
  Serial.print("fotoResistencia => ");
  Serial.println(salida);
  if (salida > 10) {
    digitalWrite(led, LOW);
  }
  if (salida <= 10) {
    digitalWrite(led, HIGH);
  }
  if (salida == 0) {
    digitalWrite(led, LOW);
  }
  delay(20);
}

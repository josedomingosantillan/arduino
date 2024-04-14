int led2 = 2;
float fotoResistencia = A0;
float salida = 0;
void setup() {
  Serial.begin(9600);
  pinMode(led2, OUTPUT);
  pinMode(fotoResistencia, INPUT);
}

void loop() {
  salida = analogRead(fotoResistencia);
  Serial.print("fotoResistencia => ");
  Serial.println(salida);

  if (salida > 0 && salida <=255) {
    
      analogWrite(led2, salida);
    
  }else{
    digitalWrite(led2, LOW);
  }
}

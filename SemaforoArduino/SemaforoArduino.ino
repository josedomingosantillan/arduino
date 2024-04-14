int Rojo = 8;
int Verde = 10;
int Amarillo = 9;
char mensaje;

void setup() {
  pinMode(Rojo, OUTPUT);
  pinMode(Verde, OUTPUT);
  pinMode(Amarillo, OUTPUT); 
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    mensaje = Serial.read();
    if (mensaje == 'B') {
       digitalWrite(Verde, LOW);
      digitalWrite(Amarillo, LOW);
      digitalWrite(Rojo, LOW);
      semaforo();
    }
    else if(mensaje == 'C'){
      digitalWrite(Verde, HIGH);
     digitalWrite(Amarillo, LOW);
     digitalWrite(Rojo, LOW);
    }
     else if(mensaje == 'D'){
      digitalWrite(Verde, LOW);
     digitalWrite(Amarillo, HIGH);
     digitalWrite(Rojo, LOW);
    }
     else if(mensaje == 'A'){
      digitalWrite(Verde, LOW);
     digitalWrite(Amarillo, LOW);
     digitalWrite(Rojo, HIGH);
    }
    else{
      digitalWrite(Verde, LOW);
     digitalWrite(Amarillo, LOW);
     digitalWrite(Rojo, LOW);
    }
  }
}

void semaforo() {
  digitalWrite(Verde, HIGH);
  delay(5000);
  digitalWrite(Verde, LOW);
  digitalWrite(Amarillo, HIGH);
  delay(500);
  digitalWrite(Amarillo, LOW);
  delay(500);
  digitalWrite(Amarillo, HIGH);
  delay(500);
  digitalWrite(Amarillo, LOW);
  delay(500);
   digitalWrite(Amarillo, HIGH);
   delay(500);
  digitalWrite(Amarillo, LOW);
  delay(500);
  digitalWrite(Rojo, HIGH);
  delay(5000);
  digitalWrite(Rojo, LOW);
  delay(10);
}

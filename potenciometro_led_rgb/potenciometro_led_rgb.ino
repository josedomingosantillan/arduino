int ledRojo=5;
int potRojo=A0;
int ledVerde=6;
int potVerde=A2;
int ledAzul=7;
int potAzul=A1;


void setup() {
  pinMode(ledRojo,OUTPUT);
  pinMode(ledVerde,OUTPUT);
  pinMode(ledAzul,OUTPUT);
  Serial.begin(9600);
}

void loop() {
int valorPotRojo= analogRead(potRojo);
int valorPotVerde= analogRead(potVerde);
int valorPotAzul= analogRead(potAzul);

encenderRojo(valorPotRojo);
encenderVerde(valorPotVerde);
encenderAzul(valorPotAzul);
}

void encenderRojo(int valor){
analogWrite(ledRojo, valor);
}

void encenderVerde(int valor){
  analogWrite(ledVerde, valor);
}

void encenderAzul(int valor){
  analogWrite(ledAzul, valor);
}

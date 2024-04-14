int ledRojo=5;
int ledVerde=6;
int ledAzul=7;

void setup() {
  pinMode(ledRojo,OUTPUT);
  pinMode(ledVerde,OUTPUT);
  pinMode(ledAzul,OUTPUT);
}

void loop() {
  digitalWrite(ledRojo,255);
  digitalWrite(ledVerde,0);
  digitalWrite(ledAzul,0);
  delay(500);
  digitalWrite(ledRojo,0);
  digitalWrite(ledVerde,255);
  digitalWrite(ledAzul,0);
  delay(500);
  digitalWrite(ledRojo,0);
  digitalWrite(ledVerde,0);
  digitalWrite(ledAzul,255);
  delay(500);
  digitalWrite(ledRojo,159);
  digitalWrite(ledVerde,203);
  digitalWrite(ledAzul,209);
}

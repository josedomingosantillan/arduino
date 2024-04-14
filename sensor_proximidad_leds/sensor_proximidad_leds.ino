int Trigger = 2;
int Echo = 3;
int ledVerde = 4;
int ledAmarillo = 5;
int ledRojo = 6;
void setup() {
  Serial.begin(9600);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledRojo, OUTPUT);
  pinMode(Trigger, OUTPUT);
  pinMode(Echo, INPUT);
  digitalWrite(Trigger, LOW);
}

void loop() {
  long t;
  long d;

  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trigger, LOW);

  t = pulseIn(Echo, HIGH);
  d = t / 59;

  Serial.println(d);
  encenderLeds(d);

  delay(10);
}

void encenderLeds(int d) {
  if (d > 70) {
    digitalWrite(ledRojo, LOW);
    digitalWrite(ledAmarillo, LOW);
    digitalWrite(ledVerde, HIGH);
    return;
  }
  if (d > 30 && d < 70) {
    digitalWrite(ledRojo, LOW);
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarillo, HIGH);
    return;
  }
  if (d < 30) {
    digitalWrite(ledAmarillo, LOW);
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledRojo, HIGH);
    return;
  }
}
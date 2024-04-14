int Trigger = 2;
int Echo = 3;
int led = 4;
int sonido=5;
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(Trigger, OUTPUT);
  pinMode(sonido, OUTPUT);
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
  encenderLed(d);

  delay(10);
}

void encenderLed(int d) {
  if (d > 0 && d < 20) {
    analogWrite(led, (21 - d) * 12.75);
    digitalWrite(sonido, HIGH);
    return;
  }
  digitalWrite(sonido, LOW);
  analogWrite(led, 0);
}
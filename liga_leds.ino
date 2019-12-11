void setup() {
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(15, OUTPUT);
}

void loop() {
  digitalWrite(5, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  digitalWrite(15, LOW);
  delay(400);

  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(15, LOW);
  delay(400);

  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(15, LOW);
  delay(400);

  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  digitalWrite(15, HIGH);
  delay(400);
}

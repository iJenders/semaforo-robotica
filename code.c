void setup()
{
  for (int i = 0; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
    digitalWrite(2, HIGH);
    delay(1000);
    digitalWrite(2, LOW);
    delay(1000);
}
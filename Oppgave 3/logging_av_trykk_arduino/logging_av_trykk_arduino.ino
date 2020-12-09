int k1 = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(7, INPUT);
}
void loop()
{
  k1 = digitalRead(7);
  if (k1 == HIGH) {
  Serial.write("jepp");
  }
  delay(1000);
}

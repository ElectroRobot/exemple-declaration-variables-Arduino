void setup() {
  // put your setup code here, to run once:
  int NumPort = 12;
  pinMode(NumPort, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int WaitingTime = 250 * (rand() % 100) * 2.5;
  digitalWrite(12, HIGH);
  delay(WaitingTime);
  digitalWrite(12, LOW);
  delay(WaitingTime);
}

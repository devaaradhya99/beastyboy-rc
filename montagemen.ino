void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {

  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(120);
  digitalWrite(LED_BUILTIN, LOW);
  delay(80);

  digitalWrite(LED_BUILTIN, HIGH);
  delay(120);
  digitalWrite(LED_BUILTIN, LOW);
  delay(300);

  
  for(int i = 0; i < 6; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(60);
    digitalWrite(LED_BUILTIN, LOW);
    delay(60);
  }

  delay(200);

  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(400);
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);

}
int value = 0;
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(1,INPUT);
  Serial.begin(9600);
}

void loop() {
  value = analogRead(1);
  Serial.println(value);
  delay(25);
}

int led = 10;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(led, LOW);
  delay(2000);
  digitalWrite(led, HIGH);
  delay(2000);
}

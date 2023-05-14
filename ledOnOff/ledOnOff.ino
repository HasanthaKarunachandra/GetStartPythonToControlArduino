int led = 13;
char input;
void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  delay(200);
  Serial.print("Type Y-ON && N-OFF");
}

void loop() {
  input = Serial.read();
  delay(200);
  Serial.print(input);
  if(input == 'Y')
  digitalWrite(led,HIGH);
  if(input == 'N')
  digitalWrite(led,LOW);

}

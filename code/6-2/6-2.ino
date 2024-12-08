const int lm35 = A0;
int led = 9;
void setup(){
  Serial.begin(9600);
  pinMode(led , OUTPUT);
}
void loop() {
  int sensorvalue = analogRead(lm35);
  float voltage = sensorvalue * (5.0 / 1024.0);
  float tempC = voltage * 100 ;
  Serial.print("temperature : ");
  Serial.print(tempC);
  Serial.println(" `C");
  delay(1000);
  if(tempC > 27)
  {
    Serial.print("cooler on!");
    digitalWrite(led , HIGH);
  }
  else {
    digitalWrite(led , LOW);
  }
}
void setup() {
Serial.begin(9600);
}
unsigned tiempo1;
void loop() {
   tiempo1=millis();
  Serial.println("Timer activado");
  delay(2000);
  
}

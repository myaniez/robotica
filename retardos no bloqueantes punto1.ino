unsigned tiempo;

void setup() {
Serial.begin(9600);}

void loop() {
  tiempo=millis();
  Serial.print("El tiempo transcurrido desde que se encendió el arduino es de "); Serial.print(tiempo); Serial.println(" milisegundos");
  delay(1000);}

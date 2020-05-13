const int ledR =  9; const int ledA =  10; const int ledV =  11;
long int timer1=1000; long int timer2=2000; long int timer3=3000;
unsigned long tiempo1=0, tiempo2=0, tiempo3 =0, tiempo4 =0;
int estado1 = LOW; int estado2 = LOW; int estado3 = LOW;
boolean verde = true;
boolean amarillo = false;
boolean rojo = false;

void setup() {
pinMode(ledR, OUTPUT);            
pinMode(ledA, OUTPUT);            
pinMode(ledV, OUTPUT);            
Serial.begin(9600);}

void loop() {
  tiempo1=millis();

  //luz roja
  if(rojo == true){
    if((tiempo1-tiempo4)>timer3){
      tiempo4=tiempo1;
    if(estado1==LOW && estado2 == LOW && estado3 == LOW){
      estado3=HIGH;}
    else{
      estado3=LOW;}
    digitalWrite(ledV, estado3);
    rojo = false;
    verde = true;}}


 //luz amarilla 
 if(amarillo = true){
  if((tiempo1-tiempo3)>timer2){
    tiempo3=tiempo1;
    if(estado1==LOW && estado2 == LOW && estado3 == LOW){
      estado2=HIGH;}
    else{
      estado2=LOW;
    }
    digitalWrite(ledA, estado2);
    amarillo = false;
    rojo = true;}}
  
  //luz verde
  if(verde == true){
  if((tiempo1-tiempo2)>timer1){
    tiempo2=tiempo1;

    if(estado1==LOW && estado2 == LOW && estado3 == LOW){
      estado1=HIGH;}
    else{estado1=LOW;}
    digitalWrite(ledR, estado1);
    verde = false; 
    amarillo = true;}}

  }

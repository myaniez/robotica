int led1 =  9; int led2 = 10; 
long int timer1=2000; long int timer2=1000;
unsigned long tiempo1=0, tiempo2=0, tiempo3=0, tiempo4=0;
int estado1 = LOW; int estado2 = LOW;                

void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);          
Serial.begin(9600);
}

void loop() {
  tiempo1=millis();
  tiempo3=millis();

  //led 2 segundos
  if((tiempo1-tiempo2)>timer1){
    tiempo2=tiempo1;
    if(estado1==LOW){
      estado1=HIGH;}
    else{
      estado1=LOW;}
    digitalWrite(led1, estado1);}
  
  //led 1 segundo
  if((tiempo3-tiempo4)>timer2){
    tiempo4=tiempo3;
    if(estado2==LOW){
      estado2=HIGH;}
    else{
      estado2=LOW;}
    digitalWrite(led2, estado2);}
}

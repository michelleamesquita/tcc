#include <SoftwareSerial.h>

int sensorPin=0;
const int ledPin= 13;
const int threshold= 1;

void setup(){
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}


void loop(){
int cont=0;
int id=0;
for(int time=0;time<=60000;time++){
  int val= analogRead(sensorPin);
  

  if (val >= threshold){
    digitalWrite(ledPin, HIGH);
    val=1;
    cont=cont+1;
    id=(id*2)+1;//PLOTAR GRAFICO
    Serial.println(id);
    delay(1000);}
    
   else{
      digitalWrite(ledPin, LOW);
      if(id>=10){
      id=id-1;
      Serial.println(id);}
    }
    
   if((cont>=30)&&(cont<=50)){
      Serial.println(cont);}
      else{
     //  Serial.println("Respiraçõo Ruim!");
       int resp_ruim;
       resp_ruim=cont;}}
      // Serial.println(resp_ruim);}}
    
  
  }

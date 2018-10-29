  #include <SoftwareSerial.h>
  
  int sensorPin=0;
  const int ledPin= 13;
  const int threshold= 5;
  
  
  SoftwareSerial bluetooth(2, 3);
  
  
  void setup(){
  pinMode(ledPin, OUTPUT);
  bluetooth.begin(9600);
  Serial.begin(9600);//le plotagem

  
  }
  
  
  void loop(){
  int cont=0;
  
  
  for(int time=1;time<=60000;time++){
  int val= analogRead(sensorPin);

  
  if (val >= threshold){
  digitalWrite(ledPin, HIGH);
  val=1;
  cont=cont+1;
  //bluetooth.println(cont);
  //Serial.println(cont);
  delay(1000);
  digitalWrite(ledPin, LOW);}
  
  else{
    digitalWrite(ledPin, LOW);
  }
  
  
  
  if((cont>=30)&&(cont<=50)){
   bluetooth.println(cont);
   Serial.println(cont);
  }
   
    else{
     int resp_ruim;
     resp_ruim=cont;
  
     bluetooth.println("Respiraçõo Ruim!");
     delay(1);}}
     //bluetooth.println(cont);}}
    
  
  
  }

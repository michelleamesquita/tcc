import processing.serial.*;
Serial myPort;
int xPos=0;
float yPos = 0;

void setup(){
size(400,300);
frameRate(30);

println((Object)Serial.list());

myPort = new Serial(this,Serial.list()[2],9600);
myPort.bufferUntil('\n');
background(0);}

void draw(){
 
String inString = myPort.readStringUntil('\n');
if(inString!=null){
inString = trim(inString);
float yPos = float (inString);
println(inString);
//float yPos2=map(yPos,0,100,0,height);
stroke(127,34,255);
strokeWeight(10);

line(xPos,height - yPos,xPos,height - yPos);


if(xPos>=width){
xPos=0;
background(0);}
else{
xPos++;}


}}

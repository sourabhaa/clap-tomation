int soundSensor=2;
int LED=4;
boolean LEDStatus=false;

void setup() {
 pinMode(soundSensor,INPUT);
 pinMode(LED,OUTPUT);
Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  int SensorData=digitalRead(soundSensor); 
  if(SensorData==0){
    if(LEDStatus==false){
        LEDStatus=true;
    }
    else LEDStatus=false;
    }
    if(LEDStatus==true){
      digitalWrite(LED,HIGH);
    
  } else
 {
  digitalWrite(LED,LOW);
 }
 }

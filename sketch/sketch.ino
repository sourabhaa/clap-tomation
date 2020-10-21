const int ledpin1=2; // led pin and sound pin are not changed throughout the process
const int ledpin2=3; 
const int ledpin3=4;
const int ledpin4=5;  
const int soundpin=A0;

void setup() {
Serial.begin(9600);
pinMode(ledpin1,OUTPUT);
pinMode(ledpin2,OUTPUT);
pinMode(ledpin3,OUTPUT);
pinMode(ledpin4,OUTPUT);
pinMode(soundpin,INPUT);
}
void loop() {
  int soundsens=analogRead(soundpin); // read analog data from sensor
   Serial.println(soundsens);
  if (soundsens<140 && soundsens<150) {
    digitalWrite(ledpin1, HIGH); // turn led on
    digitalWrite(ledpin2, LOW);
    digitalWrite(ledpin3, LOW);
    digitalWrite(ledpin4, LOW);
    Serial.println(soundsens);
  }
  else if(soundsens>=150 && soundsens<155){
    digitalWrite(ledpin1, LOW);
    digitalWrite(ledpin2, HIGH);
    digitalWrite(ledpin3, LOW);
    digitalWrite(ledpin4, LOW);
    Serial.println(soundsens);
   
  }
   else if(soundsens>=155 && soundsens<160){
    digitalWrite(ledpin1, LOW);
    digitalWrite(ledpin2, HIGH);
    digitalWrite(ledpin3, HIGH);
    digitalWrite(ledpin4, LOW);
    Serial.println(soundsens);
   
  }
  else if(soundsens>=160 && soundsens<170){
    digitalWrite(ledpin1, LOW);
    digitalWrite(ledpin2, LOW);
    digitalWrite(ledpin3, HIGH);
    digitalWrite(ledpin4, LOW);
    Serial.println(soundsens);
     }

     else if(soundsens>=170 && soundsens<175){
    digitalWrite(ledpin1, LOW);
    digitalWrite(ledpin2, LOW);
    digitalWrite(ledpin3, LOW);
    digitalWrite(ledpin4, HIGH);
    Serial.println(soundsens);
     }
     else if(soundsens>=175 && soundsens<180){
    digitalWrite(ledpin1, HIGH);
    digitalWrite(ledpin2, LOW);
    digitalWrite(ledpin3, LOW);
    digitalWrite(ledpin4, HIGH);
    Serial.println(soundsens);
     }
     else if(soundsens>=180){
    digitalWrite(ledpin1, HIGH);
    digitalWrite(ledpin2, HIGH);
    digitalWrite(ledpin3, HIGH);
    digitalWrite(ledpin4, HIGH);
    Serial.println(soundsens);
     }
     else
     {
       digitalWrite(ledpin1, LOW);
        digitalWrite(ledpin2, LOW);
        digitalWrite(ledpin3, LOW);
        digitalWrite(ledpin4, LOW);
        Serial.println(soundsens);
      }
}

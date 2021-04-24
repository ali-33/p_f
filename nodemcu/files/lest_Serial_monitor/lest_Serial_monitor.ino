//UNOcode
//////////////////
#include<SoftwareSerial.h> //Included SoftwareSerial Library
//Started SoftwareSerial at RX and TX pin of ESP8266/NodeMCU
SoftwareSerial s(3,1);
long rx=0;
void setup() {
  //Serial S Begin at 9600 Baud
  Serial.begin(9600);
  
  s.begin(9600);
}

void loop() {
  
    while(Serial.available()<11){
    rx=Serial.parseInt();
   Serial.println(rx);
  //Write '123' to Serial
  s.write(rx);
  delay(1000);
}}

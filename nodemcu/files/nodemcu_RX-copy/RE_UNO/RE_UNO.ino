//nodemcu
#include <LCD_I2C.h>

LCD_I2C lcd(0x27);
#include<SoftwareSerial.h> 
SoftwareSerial s(D6,D5);//RX TX
 int data;
void setup() {

 s.begin(9600);
 Serial.begin(9600);
}

void loop() {
 s.write("s");
 if(s.available()>11){
  data=s.read();
  Serial.println(data);
 }
 }

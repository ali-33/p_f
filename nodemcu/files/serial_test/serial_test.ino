#include <Wire.h> 
#include <LCD_I2C.h>
LCD_I2C lcd(0x27);

#define red D8
#define yelow D6
#define green D5
#define white D4 

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
 lcd.begin(); // If you are using more I2C devices using the Wire library use lcd.begin(false)
                 // this stop the library(LCD_I2C) from calling Wire.begin()
    lcd.backlight();
    pinMode(red,OUTPUT);
    pinMode(yelow,OUTPUT);
    pinMode(green,OUTPUT);
    pinMode(white,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 while(Serial.available()>0){
  long rx=0;
 rx=Serial.parseInt();
 Serial.println(rx);
/* lcd.print("     Glucose"); // You can make spaces using well... spaces
    lcd.setCursor(5, 1);
     lcd.print(rx);
    delay(5LOW);
    */
    if(rx>0 && rx<=75){
 digitalWrite(red,HIGH);
  digitalWrite(yelow,LOW);
   digitalWrite(green,LOW);
   digitalWrite(white,LOW);
 Serial.print("Glucos is Low: ");
  Serial.println(rx);
  lcd.setCursor(0, 0);
  lcd.print("Glucos is Low:");
  lcd.setCursor(0, 1);
   lcd.print(rx);
   
}
}
}

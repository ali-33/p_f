int buzzer=3;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

 

}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0){
  char rx=char (Serial.read());
  Serial.println(rx);
  
  if(rx=='g'){
    tone(buzzer,450);
  }
  //digitalWrite(12,LOW);
    
  }
}

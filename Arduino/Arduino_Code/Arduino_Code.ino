
int insert_strip = 2; 
//int Vref=3;
void setup() {
Serial.begin(9600);
 pinMode(insert_strip, INPUT);//test inserting strip pin
 pinMode(3,OUTPUT);
}

void loop() {
 if( digitalRead(insert_strip)==LOW){
  Serial.println("NO_Strip");
  digitalWrite(3,LOW);
 // Serial.println( digitalRead(insert_strip));

 }
 else if( digitalRead(insert_strip)==HIGH){
  delay(700);
  Serial.println("Drop_Blood");
    digitalWrite(3,HIGH);
delay(100);

float x=analogRead(A0);
Serial.print("Analog Voltage: ");
float y=x*2;
Serial.println(y);
 
 if(y<=16){
   Serial.println("--------------------------");
  Serial.println("The strip was used");
  
 }
 else if(y>16){
  Serial.println("ADC Sample is: ");
  Serial.println(y);
  
 }}
 }

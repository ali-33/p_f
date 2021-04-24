#define t_sW D8  // connected to digital pin 8
//#define t_sR D7    // pushbutton connected to digital pin 7
int t_sR = 2; 
int Vref=3;

// variable to store the read value

void setup() {
  Serial.begin(9600);
  //pinMode(t_sW, OUTPUT);  // sets the digital pin 13 as output
  pinMode(t_sR, INPUT); 
   pinMode(3,OUTPUT);// sets the digital pin 7 as input
}

void loop() {
  //digitalWrite(t_sW,HIGH);
    // read the input pin
  // sets the LED to the button's value
if( digitalRead(t_sR)==LOW){
   analogWrite(3,0);
  Serial.println("NO_Strip");
  Serial.println( digitalRead(t_sR));
  delay(300);
}
else if( digitalRead(t_sR)==HIGH){
 digitalWrite(3,88);
  Serial.println("Drop_Blood");
    Serial.println(digitalRead(t_sR));
delay(1500);




}
}

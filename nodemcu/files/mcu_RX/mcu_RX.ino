void setup() {
// Open serial communications and wait for port to open:
//Serial.begin(115200);
//Serial.println("Ali");
while (!Serial) {
; // wait for serial port to connect. Needed for native USB port only
}
}

void loop() { // run over and over
if (Serial.available()) {
 // Serial.println("Ali");
Serial.write(Serial.read());

}
}

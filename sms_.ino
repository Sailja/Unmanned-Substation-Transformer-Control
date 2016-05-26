const int analogPin = A0; 
const int threshold = 300;

void setup(){
Serial.begin(9600); 
Serial1.begin(9600);
delay(2500);
Serial.println("AT"); 
delay(2000);
}
void loop(){
delay(1500);
int sensorReading = analogRead(A0);

 if (sensorReading > threshold) {
Serial.println("AT+CMGF=1"); 
delay(1500);
Serial.print("AT+CMGS=");
Serial.write(34); 
Serial.print("+919002307731");
Serial.write(34);
delay(1500);
Serial.println();
Serial1.println("Hello, Please call and select press the required key "); 
delay(1500);
Serial.write(26); 
while(1);
Serial1.println("ATA");
}
//its Tx pin is connected to Rx of DTMF decoder (std pin)//
}



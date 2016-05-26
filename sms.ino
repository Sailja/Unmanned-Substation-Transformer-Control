void setup(){
Serial.begin(9600);
delay(2000);
attachInterrupt(1,dtmf,RISING); 
 //pinMode(12,INPUT);  
Serial.println("AT"); 
delay(2000);
}
void dtmf()
{
  Serial.println("ATA");
  Serial.write(26);
}
 void loop(){
  while(1);
 } 
/*void loop(){
/*Serial.println("AT+CMGF=1"); 
delay(1500);
Serial.print("AT+CMGS=");
Serial.write(34); 
Serial.print("8927958202");
Serial.write(34);
delay(1500);
Serial.println();
Serial.println("Hello"); 
delay(1500);
Serial.write(26); */

/*Serial.println("ATA");
//Serial.print("ATD");
//Serial.print("8927958202");
Serial.write(26);
//while(1)
}*/


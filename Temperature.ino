
float temp;
int tempPin = A0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  temp = analogRead(tempPin);
  
  Serial.print("TEMPRATURE = ");
  Serial.print(temp/2);
  
  Serial.print("*C");
  Serial.println(analogRead (A1));
  
  Serial.println();
  delay(1000);
}

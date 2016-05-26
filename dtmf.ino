const int StD=0;    
const int Q[4]={4,6,8,10}; 
volatile int key;
void setup()
{
  Serial.begin(9600);
  attachInterrupt(StD,dtmf,RISING); 
  for(int i=0;i<4;i++)
  pinMode(Q[i],INPUT);             
}
  void dtmf()
{
  key=0;
  for(int i=0;i<4;i++)
  key+=digitalRead(Q[i])<<i; 
  Serial.println(key);
/*switch(key) // whatever to be done corresponding to the selected key
  {
    
    case 1:    
    Serial.println("1");
    break;
    case 2:   
    Serial.println("2");
    break;
    case 3:    
    Serial.println("3");
    break;
    case 4:    
    Serial.println("4");
    break;
    default: Serial.println("default");
  }   */
  //Serial.println(key);
  
}
void loop()
{
// Serial.println("ATA");
 // Serial.write(26);
  
  delay(1); 
 while(1);
}
    
  

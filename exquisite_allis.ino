int sensorPin = A0;
int sensorValue = 0;
void setup()
{
  Serial.begin(9600);
 
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
}
void loop()
{
  sensorValue=analogRead(sensorPin);
  Serial.println(sensorValue);
  if(sensorValue > 100)
  {
    
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    delay(200);
  }
  else
  {
    
    digitalWrite(9,HIGH);
    digitalWrite(8,LOW);
    delay(200);
    
  }
}

  
  
  
 
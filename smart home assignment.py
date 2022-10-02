void setup()
{
  Serial.begin(9600);
  pinMode(7,INPUT);
  pinMode(10, OUTPUT);
  pinMode(3,OUTPUT);
  
}

void loop()
{
  int motion=digitalRead(7);
  if(motion==1)
  {
    digitalWrite(10,HIGH);
    tone(3,800);
    delay(200);
    Serial.println("motion detected");
  }
  else
  {
    Serial.println("nothing happen");
    
    noTone(4);
    delay(2000);
  }
}

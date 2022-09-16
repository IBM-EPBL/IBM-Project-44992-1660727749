


void setup()
{
  Serial.begin(9600);
  pinMode(6,INPUT);
  pinMode(10, OUTPUT);
  pinMode(3,OUTPUT);
  
}

void loop()
{
  int motion=digitalRead(6);
  if(motion==1)
  {
    digitalWrite(10,HIGH);
    tone(3,200);
    delay(200);
    Serial.println("motion detected");
  }
  else
  {
    Serial.println("nothing happen");
    
    noTone(3);
    delay(1000);
  }
}
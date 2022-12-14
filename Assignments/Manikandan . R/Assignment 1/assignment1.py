void setup() 
{ 
  Serial.begin(9600);
  pinMode(4, INPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  int motion=digitalRead(4);
  if(motion==1)
  {
    Serial.println("Motion detected");
    tone(12,500);
  } 
  else
  { 
    Serial.println("Motion not detected");
    noTone(12);
  }
  double data=analogRead(A2);
  double n=data;
  Serial.print("Analog value = ");
  Serial.println(n);
  if(n==229) 
  { 
    tone(12,200);
  }
  else 
  { 
    noTone(12);
  }
}

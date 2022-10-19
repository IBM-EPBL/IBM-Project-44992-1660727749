void setup() 
{ 
  Serial.begin(9600);
  pinMode(7, INPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  int motion=digitalRead(7);
  if(motion==1)
  {
    Serial.println("Motion detected");
    tone(12,800);
  } 
  else
  { 
    Serial.println("Motion not detected");
    noTone(12);
  }
  double data=analogRead(A0);
  double n=data;
  Serial.print("Analog value = ");
  Serial.println(n);
  if(n==227) 
  { 
    tone(12,100);
  }
  else 
  { 
    noTone(12);
  }
}
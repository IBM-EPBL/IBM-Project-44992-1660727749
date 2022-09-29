void setup() 
{ 
  Serial.begin(9600);
  pinMode(5, INPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  int motion=digitalRead(5);
  if(motion==1)
  {
    Serial.println("Motion detected");
    tone(8,500);
  } 
  else
  { 
    Serial.println("Motion not detected");
    noTone(8);
  }
  double data=analogRead(A2);
  double n=data;
  Serial.print("Analog value = ");
  Serial.println(n);
  if(n==227) 
  { 
    tone(8,200);
  }
  else 
  { 
    noTone(8);
  }
}
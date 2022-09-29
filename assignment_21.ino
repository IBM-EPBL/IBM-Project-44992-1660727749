void setup() 
{ 
  Serial.begin(9600);
  pinMode(3, INPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  int motion=digitalRead(3);
  if(motion==1)
  {
    Serial.println("Motion detected");
    tone(9,500);
  } 
  else
  { 
    Serial.println("Motion not detected");
    noTone(9);
  }
  double data=analogRead(A2);
  double n=data;
  Serial.print("Analog value = ");
  Serial.println(n);
  if(n==227) 
  { 
    tone(9,200);
  }
  else 
  { 
    noTone(9);
  }
}
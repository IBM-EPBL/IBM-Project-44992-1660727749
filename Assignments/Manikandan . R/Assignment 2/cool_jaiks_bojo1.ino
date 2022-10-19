

void setup()
{
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  int motion=digitalRead(8);
  if(motion==1)
  {
    Serial.println("Motion detected");
    tone(12,300);
  }
  else
  {
    Serial.println("Nothing happpen");
    noTone(12);
  }
  double data=analogRead(A0);
  double n=data;
  Serial.print("Analog value = ");
  Serial.println(n);
  if(n==229)
  {
    tone(12,500);
  }
  else
  {
    noTone(12);
  }
}  
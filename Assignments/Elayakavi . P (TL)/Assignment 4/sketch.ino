const int TRIG_PIN = 7;
const int ECHO_PIN = 8;
const unsigned int MAX_DIST = 23200;
void setup() 
{
  pinMode(TRIG_PIN, OUTPUT);
  digitalWrite(TRIG_PIN, LOW);
  pinMode(ECHO_PIN, INPUT);
  Serial.begin(9600);
}
void loop() {
  unsigned long t1;
  unsigned long t2;
  unsigned long pulse_width;
  float cm;
  float inches;
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  while (digitalRead(ECHO_PIN) == 0);
  t1 = micros();
  while (digitalRead(ECHO_PIN) == 1);
  t2 = micros();
  pulse_width = t2 - t1;
  cm = pulse_width / 58;
  inches = pulse_width / 148.0;
  if (pulse_width > MAX_DIST)  
  {
    Serial.println("unreachable");
  }
  else
  {
    Serial.println("##########################");
    Serial. println("The Measured Distance in cm:");
    Serial.println(cm);
    if (cm < 100)
    {
      {
        Serial.println("Alert!");
      }
    }
    Serial.println("##########################");
  }
  delay(1000);
}

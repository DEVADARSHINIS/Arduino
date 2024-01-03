// C++ code
//variables
int passiveBuzz = 9;

void setup()
{
  pinMode(passiveBuzz,OUTPUT);
}

void loop()
{
  // turn on the passive buzzer
  digitalWrite(passiveBuzz,50);
  delay(1000); // Wait for 1000 millisecond(s)
  // turn off the passive buzzer
  digitalWrite(passiveBuzz,0);
  delay(1000); // Wait for 1000 millisecond(s)
}
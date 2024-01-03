// C++ code
//variables
int redPin = 9;

void setup()
{
  pinMode(redPin,OUTPUT);
}

void loop()
{
  analogWrite(redPin,255);
  delay(3000); // Wait for 3000 millisecond(s)
  analogWrite(redPin,40);
  delay(5000); // Wait for 5000 millisecond(s)
}
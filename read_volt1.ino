// C++ code
//variable
int readPin = A5;

void setup()
{
  pinMode(readPin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(analogRead(readPin));
  delay(1000); // Wait for 1000 millisecond(s)
}
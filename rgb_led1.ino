// C++ code
//varibles

int redPin = 9;
int greenPin = 10;
int bluePin = 11;

void setup()
{
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
}

void loop()
{
  analogWrite(redPin,255);
  analogWrite(greenPin,0);
  analogWrite(bluePin,255);
}
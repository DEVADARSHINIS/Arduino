// C++ code
//varibles

int redPin = 9;
int greenPin = 10;
int bluePin = 11;
String setColor;

void setup()
{
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  setColor = Serial.readString();
  Serial.println(setColor);
  if(setColor == "red")
  {
    analogWrite(redPin,255);
  	analogWrite(greenPin,0);
  	analogWrite(bluePin,0);
  }
  else if(setColor == "green")
  {
    analogWrite(redPin,0);
  	analogWrite(greenPin,255);
  	analogWrite(bluePin,0); 
  }
  else if(setColor == "blue")
  {
    analogWrite(redPin,0);
  	analogWrite(greenPin,0);
  	analogWrite(bluePin,255);
  }
  else
  {
    Serial.println("color not found");
  }
}
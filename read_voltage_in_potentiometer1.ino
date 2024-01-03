// C++ code
//variable
int readPin = A5;
float Calculate_Value;  //Make the range from 0-1023 to 0V-5V

void setup()
{
  pinMode(readPin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  //Serial.println(analogRead(readPin));
  //delay(1000); // Wait for 1000 millisecond(s)
  Calculate_Value = (5./1023.)*(analogRead(readPin));
  delay(1000);
  Serial.println(Calculate_Value);
}
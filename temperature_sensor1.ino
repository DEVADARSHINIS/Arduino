// C++ code
//variables
int readPin = A2;
float scaleFactor = 0.01;
float Temp;
float readValue;
float calculateValue;
float farenheit;
float kelvin;

void setup()
{
  pinMode(readPin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  readValue = analogRead(readPin);
  calculateValue = readValue * (5.0/1023.0); //voltage
  Temp = calculateValue/scaleFactor;
  farenheit = (Temp *(9.0/5.0))+32;
  kelvin = Temp + 273.15;
  Serial.print("C:");
  Serial.println(Temp);
  Serial.print("F:");
  Serial.println(farenheit);
  Serial.print("K:");
  Serial.println(kelvin);
  delay(1000); // Wait for 1000 millisecond(s)
}
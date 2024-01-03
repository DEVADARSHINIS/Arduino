// C++ code
//variables
int Delay_Time = 5000;
int Digital_Pin_7 =7;
int Digital_Pin_4 =4;
int Digital_Pin_2 =2;

void setup()
{
  pinMode(Digital_Pin_7, OUTPUT);
  pinMode(Digital_Pin_4,OUTPUT);
  pinMode(Digital_Pin_2,OUTPUT);
}

void loop()
{
  //Red LED
  digitalWrite(Digital_Pin_7, HIGH);
  delay(Delay_Time); // Wait for 5000 millisecond(s)
  digitalWrite(Digital_Pin_7, LOW);
  
  // Yellow LED
  digitalWrite(Digital_Pin_4, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(Digital_Pin_4, LOW);

  //Green LED
  digitalWrite(Digital_Pin_2, HIGH);
  delay(Delay_Time); // Wait for 5000 millisecond(s)
  digitalWrite(Digital_Pin_2, LOW);
}
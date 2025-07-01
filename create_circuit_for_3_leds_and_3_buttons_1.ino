// C++ code
//for  buttons
const int button1 = 7;
const int button2 = 8;
const int button3 = 9;

// for LEDs 
const int led1 = 10;
const int led2 = 11;
const int led3 = 12;

void setup()
{ 
  //initialisation the buttons as INPUT
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
  pinMode(button3,INPUT);
  
  //initialisation the LEDs as OUTPUT
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop()
{
  //for the led1
  //if the button is pressed,it should be HIGH,otherwise will be LOW
  if(digitalRead(button1)==HIGH)
  {
    digitalWrite(led1,HIGH); //turn on led
  }
  else
  {
    digitalWrite(led1,LOW);//turn off led
  }
  
  //for the led2
  //if the button is pressed,it should be HIGH, Otherwise will be LOW
  if(digitalRead(button2)==HIGH)
  {
    digitalWrite(led2,HIGH); //turn on  led 
  }
  else
  {
    digitalWrite(led2,LOW); //turn off led
  }
  
  //for the led3
  //if the button is pressed, it should be HIGH, Otherwise will be LOW
  if (digitalRead(button3)==HIGH)
  {
    digitalWrite(led3,HIGH); //turn on led
  }
  else
  {
    digitalWrite(led3,LOW); //turn off led
  }
  
}
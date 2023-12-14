#include<Servo.h>
Servo myservo;
int pos;

void setup()
{
  myservo.attach(9);
}

void loop()
{
  for(pos=-10; pos<=90;pos +=1)
  {
    myservo.write(pos);
    delay(15);
  }

  
  for(pos=90; pos>=-10;pos-=1)
  {
    myservo.write(pos);
    delay(15);
  }
}

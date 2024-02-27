#include <Servo.h>//including the servo library

//define our servos
Servo servo1; // For X direction
Servo servo2; // For Y direction

//define joystick pin (Analog)
int joyX =0;
int joyY =1;

//variable to read the values from the analog pins 
int joyVal;

void setup()
{ //attaches our servos on pins PWM 3-5
  servo1.attach(3);
  servo2.attach(5);
}

void loop()
{
  //read the value of joystick (between 0-1023) for x direction
  joyVal = analogRead(joyX);
  joyVal = map (joyVal, 0, 1023, 0, 180); //servo value between 0-180
  servo1.write(joyVal); //set the servo position according to the joystick value
// for x direction
  joyVal = analogRead(joyY);
  joyVal = map (joyVal, 0, 1023, 0, 180);
  servo2.write(joyVal);
  delay(15);
}

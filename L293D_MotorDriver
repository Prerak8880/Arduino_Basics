--> L293D Motor Driver Module or Shield <--
--> It contains 2 Input ports   (a) 12V Input DC Supply
                                (b) GND Port
--> Two Output Ports <--
--> L293D IC which is a 16 Legged IC <--
--> 8 Ports <--
        (a)  IN1
        (b)  IN2
        (c)  IN3
        (d)  IN4
        (e)  EN1
        (f)  EN2
        (g)  5V
        (h)  5V
------------------------------------------------------------------------------------------------------------------------------------------------
QUESTION: WHY WE NEED L293D MOTOR DRIVER MODULE?
ANSWER  : (1)  A MICROCONTROLLER CANNOT RUN SMALL MOTORS.
          (2)  CANNOT REVERSE THE MOTOR.
------------------------------------------------------------------------------------------------------------------------------------------------
 _______
|  CODE |
|_______|

void setup() {
  // initialize digital pins as an output.
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);  // For CW Direction
  delay(1000);                      // wait for a second
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);   // For CCW Direction
  delay(1000);                      // wait for a second
}

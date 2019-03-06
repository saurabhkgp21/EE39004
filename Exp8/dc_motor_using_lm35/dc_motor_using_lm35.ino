#include <AFMotor.h>
 
AF_DCMotor motor(1, MOTOR12_64KHZ); // create motor #2, 64KHz pwm

int input_pin = A5;
void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Motor test!");
  pinMode(input_pin, INPUT);
}
int value;
void loop() {
  int v = analogRead(input_pin);
  Serial.println(v);
//  value = (value*256)/100;
  if(v > 60) value = 230;
  else value = 150;
//  if(value < 100) value = 100;
  motor.setSpeed(value);
//  Serial.println(value);
  motor.run(FORWARD);      // turn it on going forward
}

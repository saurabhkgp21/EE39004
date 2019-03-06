#include <AFMotor.h>
 
AF_DCMotor motor(1, MOTOR12_64KHZ); // create motor #2, 64KHz pwm
 
void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Motor test!");
}
int value;
void loop() {
  if(Serial.available() > 0){
    Serial.println("New value");
    char v = Serial.read();
    if(v == 'H') value = 255;
    else if(v == 'M') value = 150;
    Serial.println(value);
    int speed_motor = value;
    motor.setSpeed(value);
  }
  motor.run(FORWARD);      // turn it on going forward
}

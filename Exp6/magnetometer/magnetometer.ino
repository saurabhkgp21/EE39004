#include <Arduino.h>
#include <Wire.h>
#include <HMC5883L_Simple.h>

void setup() {
  Serial.begin(9600);
  Wire.begin();
  Compass.SetDeclination(-0,9,'W');
}

void loop() {
  float heading = Compass.GetHeadingDegrees();
  Serial.println(heading);
  delay(500);
}

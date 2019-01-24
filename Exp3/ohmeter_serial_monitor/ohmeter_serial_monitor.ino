int known = 0;
int known_resistance = 1000;
void setup() {
  pinMode(known, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int observed_voltage = analogRead(known);
  float voltage = (float)(5*observed_voltage)/1024;
  float current = (5 - voltage)/known_resistance;
  float unknown_resistance = voltage/current;
  Serial.print("Value of unknown resistance(ohm) = ");
  Serial.println(unknown_resistance);
  delay(100);
}

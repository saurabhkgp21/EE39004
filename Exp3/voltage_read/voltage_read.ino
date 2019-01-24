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
  Serial.println(voltage);
  delay(100);
}

int input_pin = 1;
void setup() {
  // put your setup code here, to run once:
  pinMode(1, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int read_value = analogRead(input_pin);
  float temp = (float)(read_value*500)/1023;
  Serial.print("Temperature(Celsius) = ");
  Serial.println(temp);
}

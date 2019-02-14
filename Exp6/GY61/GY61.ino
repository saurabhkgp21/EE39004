int x_pin = 1;
int y_pin = 2;
int z_pin = 3;
void setup() {
  pinMode(x_pin, INPUT);
  pinMode(y_pin, INPUT);
  pinMode(z_pin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int x_value = analogRead(x_pin);
  int y_value = analogRead(y_pin);
  int z_value = analogRead(z_pin);
//  Serial.print("Acc(x): ");
//  Serial.print(x_value);
//  Serial.print(",Acc(y): ");
//  Serial.print(y_value);
//  Serial.print(",Acc(z): ");
//  Serial.println(z_value);
  int deg = map(x_value,266,395,0,180);
  Serial.write(abs(deg));
  delay(2);
}

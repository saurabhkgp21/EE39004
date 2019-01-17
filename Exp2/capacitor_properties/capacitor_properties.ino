int analog_value, analog_pin = 0, led = 9;
int scaled_value;
void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  analog_value = analogRead(analog_pin);
  if(analog_value > 800){
        Serial.print("High ");
        analogWrite(led, 255); 
  }
  else{
    analogWrite(led, 0);
  }
  Serial.println(analog_value);
}

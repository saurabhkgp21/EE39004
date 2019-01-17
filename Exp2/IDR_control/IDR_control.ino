int pin = 0;
void setup() {
//  pinMode(pin, INPUT);
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  int analog_value = analogRead(pin);
  if(analog_value > 20){
      digitalWrite(LED_BUILTIN, HIGH);  
  }
  else{
    digitalWrite(LED_BUILTIN, LOW);
  }
  Serial.println(analog_value);
  delay(1);
}

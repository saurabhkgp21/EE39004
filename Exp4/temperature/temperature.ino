int input_pin = 1;
void setup() {
  // put your setup code here, to run once:
  pinMode(1, INPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int read_value = analogRead(input_pin);
  float temp = (float)(read_value*500)/1023;
//  Serial.print("Tempera/ture(Celsius) = ");
  if(temp > 26){
    digitalWrite(5, HIGH);
  }
  else{
    digitalWrite(5,LOW);
  }
  Serial.println(temp);
}

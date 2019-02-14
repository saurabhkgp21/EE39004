int pin[8] = {0};
void setup() {
  for(int i=0;i<8;i++){
    pinMode(i+2,INPUT); 
  }
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()){
      char data = Serial.read();
//      Serial.println(data);
      pin[data-'A'] = 1;
      for(int i=0;i<7;i++){
        digitalWrite(i+2,pin[i]);
      }
      int value = analogRead(1);
      Serial.println(value);
  }
}

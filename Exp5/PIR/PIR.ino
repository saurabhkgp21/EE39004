int input_pin = 7;
void setup() {
  Serial.begin(9600);
  pinMode(input_pin, INPUT);
}

void loop() {
  int motion_state = digitalRead(input_pin);
  Serial.println(motion_state);
//  if(motion_state){
//    Serial.println("Motion Detected");
//  }
//  else{
//    Serial.println("No Motion");
//  }
  delay(100);
}

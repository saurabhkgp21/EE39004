int push_button = 2;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(push_button, INPUT);
  Serial.begin(9600);
}

void loop() {
  int button_state = digitalRead(push_button);
  Serial.print("State of button is ");
  Serial.println(button_state);
  if(button_state){
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else{
    digitalWrite(LED_BUILTIN, LOW);  
  }
  delay(10);
}

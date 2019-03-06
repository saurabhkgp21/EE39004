int pin[8] = {0};
int pin_no[8] = {10,9,8,7,6,5,4,3}; //pin_no[0] == LSB, pin_no[7] == msb
int input_pin = A0; //Enter input pin number here
void setup() {
  for(int i=0;i<8;i++){
    pinMode(pin_no[i],OUTPUT); 
  }
  pinMode(input_pin, INPUT);
  Serial.begin(9600);
}

void loop() {
//  Serial.print("Enter voltage[0-5V]");/
  if(Serial.available() > 0){
      int data = Serial.read();
      int transformed_value = (data*255)/5;
      int i=0;
      while(transformed_value){
          pin[i] = transformed_value%2;
          transformed_value = transformed_value/2;
          i++;
      }
      for(i = 0; i< 8; i++){
        pin[i] = 1; 
      }
      for(i = 0; i < 8;i++) Serial.println(pin[i]);
      for(i = 0; i < 8; i++){
        if(pin[i] == 1){
          digitalWrite(pin_no[i],HIGH);
        }
        else{
          digitalWrite(pin_no[i],LOW);
        }
      }
      int input_value = analogRead(input_pin);
      Serial.print("Input value: ");
      Serial.println(input_value);
  }
}

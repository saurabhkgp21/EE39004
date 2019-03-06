int window_size = 30;
float frequency;
const float pi = 3.14;
int input_pin_number = 13; //input pin number here

int pin[8] = {0};
int pin_no[8] = {10,9,8,7,6,5,4,3}; //pin_no[0] == LSB, pin_no[7] == MSB


void convert_to_binary(float volt){
//  Convert float value of voltage into binary form (after typecasting into int). Write binary values into pin[] such that pin[0] is LSB
//  pin[7] is MSB.
  int transformed_value = (volt*255)/5;
  int i=0;
  while(transformed_value){
    pin[i] = transformed_value%2;
    transformed_value = transformed_value/2;
    i++;
  }
}

void setup() {
  for(int i=0;i<8;i++){
    pinMode(pin_no[i], OUTPUT);
  }
  pinMode(input_pin_number, INPUT);
  Serial.begin(9600);
}

void test(int delay_time, float values[]){
  for(int i = 0; i< window_size; i++){
    Serial.println(values[i]);
    delay(delay_time);
  }
}

void loop() {
  Serial.println("Enter frequency[Hz]");
  if(Serial.available() > 0){
    frequency = Serial.read();
    
    float time_period = 1/frequency;
    float time_each_windows = time_period/window_size;
    unsigned int delay_time = time_each_windows*1000;
    float values[window_size];

//  Write sin values in values array at each time instant. 
//  Number of instants in one cycle = window_size
    for(int i = 0; i < window_size; i++ ){
      values[i] = 5*sin(2*pi*frequency*i*time_each_windows);
    }

    
    for(int i = 0; i < window_size; i++){
      
      convert_to_binary(values[i]);
      for(int j = 0; j < 8; j++){
        if(pin[j] == 1){
          digitalWrite(pin_no[j], HIGH);
        }
        else{
          digitalWrite(pin_no[j], LOW);
        }
      }

      int input_value = analogRead(input_pin_number);
      Serial.println(input_value);
      delay(delay_time);
    }
  }
}

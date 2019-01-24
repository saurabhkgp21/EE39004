void setup() {
  Serial.begin(9600);
}

int x = 1;

void loop() {
  // put your main code here, to run repeatedly:
  if(x==1){
    Serial.println("Asdfsaf");
    x = 0;
  }
  else{
    Serial.println("asdfasdfA");
    x = 1;
  }
  delay(100);
}

int a=2,b=4, LED=9;
void setup() {
  pinMode(a, INPUT);
  pinMode(b, INPUT);
  pinMode(LED, OUTPUT);
}

int past=0;

void loop() {
  int A, B, C;
  A = digitalRead(a);
  B = digitalRead(b);
  if(B == 1){
    analogWrite(LED, 255);
    past = 255;
  }
  else if(A == 1){
    analogWrite(LED, 127);
    past = 127;
  }
  else{
    analogWrite(LED, past);
  }
  delay(1);
}

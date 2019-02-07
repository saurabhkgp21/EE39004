int trigpin =10;
int echopin =9;
int duration=0;
float distance=0;
int input_pin = 7;

void setup() {
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(input_pin, INPUT);
  // put your setup code here, to run once:

  Serial.begin(9600);

}

void loop() {
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  int motion_state = digitalRead(input_pin);
  //q2Serial.println(motion_state);
  if(motion_state){
      Serial.println("Motion Detected");
      digitalWrite(trigpin,HIGH);
      delayMicroseconds(10);
      digitalWrite(trigpin,LOW);
      
      
      duration = pulseIn(echopin, HIGH);
      
      distance= duration*0.034/2;
      
      Serial.print("Distance: ");
      Serial.println(distance);
 }
else{
  Serial.println("no motion");
  }

 
}



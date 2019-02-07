int trigpin =10;
int echopin =9;
int duration=0;
float distance=0;

void setup() {
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  // put your setup code here, to run once:

  Serial.begin(9600);

}

void loop() {
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);


  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);


 duration = pulseIn(echopin, HIGH);

distance= duration*0.034/2;

Serial.print("Distance: ");
Serial.println(distance);
}



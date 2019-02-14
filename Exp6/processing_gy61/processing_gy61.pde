import processing.serial.*;
Serial myport;
int inByte;
void setup(){
  String port = Serial.list()[0];
  myport = new Serial(this, port, 9600);
}

void serialEvent (Serial myPort) {
  // get the byte:
  inByte = myPort.read();
  // print it:
  //println(inByte);
}

void draw(){
  println(inByte);
  fill(255,255,255);
  rect(0,0,200,200);
  fill(255,0,0);
  int length = (inByte*100)/180;
  rect(0,0,length,200);
}

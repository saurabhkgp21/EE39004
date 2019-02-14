import processing.serial.*;
Serial myport;

void setup(){
  String port = Serial.list()[0];
  myport = new Serial(this, port, 9600);
}

void draw(){
  if(myport.available() > 0 ){
    String val = myport.readStringUntil('\n');
    println(val);
    if(val != null){
      println(val);
      int value = Integer.parseInt(val.trim());
      print(value);
    }
  }
}

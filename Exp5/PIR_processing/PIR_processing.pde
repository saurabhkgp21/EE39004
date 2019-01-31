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
      int status = Integer.parseInt(val.trim());
      if(status == 1){
        fill(255,255,0);
        rect(0,0,200,200);
      }
      else{
        fill(0,255,255);
        rect(0,0,200,200);
      }
    }
  }
}

import processing.serial.*;
Serial myPort;  // Create object from Serial class
String val;     // Data received from the serial port
void setup()
{
  String portName = Serial.list()[0]; ///dev/ttyACM0
  myPort = new Serial(this, portName, 9600);
}
void draw()
{
  if ( myPort.available() > 0) 
  {  // If data is available,
    val = myPort.readStringUntil('\n');         // read it and store it in val
    //println(val); //print it out in the console 
    if(val != null){
      //println(val);
      float temp = float(val);
      println(temp);
      if(temp > 27){
        fill(255,0,0);
        rect(30,20,200,200);
      }
      else{
        fill(0,255,0);
        rect(30,20,200,200);
      }
    }
  }  
}

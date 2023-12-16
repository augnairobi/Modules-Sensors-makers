//Sample code for use with an ultrasonic sensor specifically HC-SR04 :)
//Start by downloading the ultrasonic sensor library named "NewPing" by Tim Eckel or any other 
//If you have any questions feel free to ask : github--"Swayy03"

//This includes the header file of the NewPing library allowing you to get data easier
#include <NewPing.h>

//This block of code is used to just define various variables that will be used to set the library to get data
#define MAX_DISTANCE 400
#define MAX_SPEED 355
#define MAX_SPEED_OFFSET 25
#define Trig A1
#define Echo A2

//Create an object in the class to start your sensor. Define  the variables (Trig, Echo, Maximum distance) in that order. Can be input directly or defined previously. Recommended to define before
NewPing sonar(Trig,Echo,400);




void setup() {
  // put your setup code here, to run once:
  //Begin the serial monitor at a 9600 baud rate and delay the time a bit to avoid unwanted errors
  Serial.begin(9600);
  delay(20);

}

void loop() {
  // put your main code here, to run repeatedly:
  //Read the data from the sensor once the microcontroller is properly connected to the sensor
  int distance = sonar.ping_cm();
  Serial.println(distance);
  delay(50);
}
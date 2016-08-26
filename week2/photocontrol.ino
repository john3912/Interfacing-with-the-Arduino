/*
   photocontrol
   Turns on an LED when the analog read value from a 
   photresisitor (in a voltage dividor) is less than
   775.

   This program is for the Week 2 assignment in the
   Coursera Interfacing with the Arduino course.

   Instructions:
      Build a circuit that lights an LED when it is 
      sufficiently dark in a room. Demonstrate the circuit 
      by covering the photoresistor to simulate darkness.

   Filename: photocontrol.ino
      Version: 1.0
      Date: 26 Aug 2016
      Author: Brent P. Johnson

   Verification environment:
      Windows 7
      Arduino 1.6.9
      Arduino UNO

*/

// create a constant for the pin numbers
const int sensorPin = 0;
const int ledPin = 13;

// create an integer for the reading of the analog input
int lightLevel;

// the setup function runs once when you press reset or power the board
void setup() {
  
  // set ledPin as an output
  pinMode(ledPin, OUTPUT);
  
}

// the loop function runs over and over again forever
void loop() {

  // delay for 100 ms
  delay(100);

  // read from analog input A0
  lightLevel = analogRead(sensorPin);
  
  // if lightLevel is < 775 turn on LED on pin 13
  // else LED is off (775 was determined by testing
  // and printing values on serial port)
  if (lightLevel < 775) {
     digitalWrite(ledPin, HIGH);   
  }
  else {
     digitalWrite(ledPin, LOW);    
  }   
   
}

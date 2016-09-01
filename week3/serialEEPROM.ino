
/*
   serialEEPROM
   Read and write control of the EEPROM through
   the serial monitor.
   
   This program is for the Week 3 assignment in the
   Coursera Interfacing with the Arduino course.
   
   Instructions:
      Write a sketch that allows a user to access data 
      in EEPROM using the serial monitor. In the serial 
      monitor the user should be able to type one of 
      two commands: “read” and “write. "Read" takes one 
      argument, an EEPROM address. "Write" takes two 
      arguments, an EEPROM address and a value.

      For example, if the user types “read 3” then 
      the contents of EEPROM address 3 should be 
      printed to the serial monitor. If the user types 
      “write 3 10” then the value 10 should be written 
      into address 3 of the EEPROM
   
   Filename: serialEEPROM.ino
      Version: 1.0
      Date: 01 Sep 2016
      Author: Brent P. Johnson
   
   Verification environment:
      Windows 7
      Arduino 1.6.9
      Arduino UNO
*/

#include <EEPROM.h>

// create a character to read received data on serial port
String receivedString;
int address;
int data;

// the setup function runs once when you press reset or power the board
void setup() {
  
  // opens serial port, sets data rate to 9600 bps
  Serial.begin(9600);
  // print a message to enter a command
  Serial.println("Enter read or write Command:");
  Serial.println("Example:  'read 3' reads the contents of EEPROM address 3");
  Serial.println("          'write 3 10' writes the value 10 to EEPROM address 3");
}

// the loop function runs over and over again forever
void loop() {

  // check if there is data to be read
  if (Serial.available() > 0) {
     // read the command
     receivedString = Serial.readStringUntil(' ');
     // is the command read or write
     if (receivedString.startsWith("read")) {
        // get address
        address = Serial.parseInt();
        // read data
        data = EEPROM.read(address);
        // print data
        Serial.println(data);
     } 
     else if (receivedString.startsWith("write")) {
        // get address and data
        address = Serial.parseInt();
        data = Serial.parseInt();
        // write data to address
        EEPROM.write(address, data);
     }
  }
 
}



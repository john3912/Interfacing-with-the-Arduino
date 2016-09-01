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

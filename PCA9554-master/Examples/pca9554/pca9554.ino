/***************************************************************************
Title: PCA9554 sketch (PCA9554) - Output Example
Created by: Mach-1 Electronics - AD0ND
For: Arduino Users Everywhere!

This file is free software; you can redistribute it and/or modify
it under the terms of either the GNU General Public License version 2
or the GNU Lesser General Public License version 2.1, both as
published by the Free Software Foundation.
***************************************************************************/

#include <PCA9554.h>  // Load the PCA9554 Library
#include <Wire.h>     // Load the Wire Library

PCA9554 ioCon1(0x20);  // Create an object at this address
//PCA9554 ioCon1(0x21); // Additional object at next address, etc


void setup()
{
  Serial.begin(9600);
  Wire.begin();
  ioCon1.portMode0(ALLOUTPUT); //Set the port as all output
}



void loop()
{
   ioCon1.digitalWrite0(0, LOW);
   ioCon1.digitalWrite0(1, LOW);
   ioCon1.digitalWrite0(2, LOW);
   ioCon1.digitalWrite0(3, LOW);
   ioCon1.digitalWrite0(4, LOW);
   ioCon1.digitalWrite0(5, LOW);
   ioCon1.digitalWrite0(6, LOW);
   ioCon1.digitalWrite0(7, HIGH);
   delay(25);
   ioCon1.digitalWrite0(0, LOW);
   ioCon1.digitalWrite0(1, LOW);
   ioCon1.digitalWrite0(2, LOW);
   ioCon1.digitalWrite0(3, LOW);
   ioCon1.digitalWrite0(4, LOW);
   ioCon1.digitalWrite0(5, LOW);
   ioCon1.digitalWrite0(6, HIGH);
   ioCon1.digitalWrite0(7, HIGH);
   delay(25);
   ioCon1.digitalWrite0(0, LOW);
   ioCon1.digitalWrite0(1, LOW);
   ioCon1.digitalWrite0(2, LOW);
   ioCon1.digitalWrite0(3, LOW);
   ioCon1.digitalWrite0(4, LOW);
   ioCon1.digitalWrite0(5, HIGH);
   ioCon1.digitalWrite0(6, HIGH);
   ioCon1.digitalWrite0(7, HIGH);
   delay(25);
   ioCon1.digitalWrite0(0, LOW);
   ioCon1.digitalWrite0(1, LOW);
   ioCon1.digitalWrite0(2, LOW);
   ioCon1.digitalWrite0(3, LOW);
   ioCon1.digitalWrite0(4, HIGH);
   ioCon1.digitalWrite0(5, HIGH);
   ioCon1.digitalWrite0(6, HIGH);
   ioCon1.digitalWrite0(7, HIGH);
   delay(25);
   ioCon1.digitalWrite0(0, LOW);
   ioCon1.digitalWrite0(1, LOW);
   ioCon1.digitalWrite0(2, LOW);
   ioCon1.digitalWrite0(3, HIGH);
   ioCon1.digitalWrite0(4, HIGH);
   ioCon1.digitalWrite0(5, HIGH);
   ioCon1.digitalWrite0(6, HIGH);
   ioCon1.digitalWrite0(7, HIGH);
   delay(25);
   ioCon1.digitalWrite0(0, LOW);
   ioCon1.digitalWrite0(1, LOW);
   ioCon1.digitalWrite0(2, HIGH);
   ioCon1.digitalWrite0(3, HIGH);
   ioCon1.digitalWrite0(4, HIGH);
   ioCon1.digitalWrite0(5, HIGH);
   ioCon1.digitalWrite0(6, HIGH);
   ioCon1.digitalWrite0(7, LOW);
   delay(25);
   ioCon1.digitalWrite0(0, LOW);
   ioCon1.digitalWrite0(1, HIGH);
   ioCon1.digitalWrite0(2, HIGH);
   ioCon1.digitalWrite0(3, HIGH);
   ioCon1.digitalWrite0(4, HIGH);
   ioCon1.digitalWrite0(5, HIGH);
   ioCon1.digitalWrite0(6, LOW);
   ioCon1.digitalWrite0(7, LOW);
   delay(25);
   ioCon1.digitalWrite0(0, HIGH);
   ioCon1.digitalWrite0(1, HIGH);
   ioCon1.digitalWrite0(2, HIGH);
   ioCon1.digitalWrite0(3, HIGH);
   ioCon1.digitalWrite0(4, HIGH);
   ioCon1.digitalWrite0(5, LOW);
   ioCon1.digitalWrite0(6, LOW);
   ioCon1.digitalWrite0(7, LOW);
   delay(25);
   ioCon1.digitalWrite0(0, HIGH);
   ioCon1.digitalWrite0(1, HIGH);
   ioCon1.digitalWrite0(2, HIGH);
   ioCon1.digitalWrite0(3, HIGH);
   ioCon1.digitalWrite0(4, LOW);
   ioCon1.digitalWrite0(5, LOW);
   ioCon1.digitalWrite0(6, LOW);
   ioCon1.digitalWrite0(7, LOW);
   delay(25);
   ioCon1.digitalWrite0(0, HIGH);
   ioCon1.digitalWrite0(1, HIGH);
   ioCon1.digitalWrite0(2, HIGH);
   ioCon1.digitalWrite0(3, LOW);
   ioCon1.digitalWrite0(4, LOW);
   ioCon1.digitalWrite0(5, LOW);
   ioCon1.digitalWrite0(6, LOW);
   ioCon1.digitalWrite0(7, LOW);
   delay(25);
   ioCon1.digitalWrite0(0, HIGH);
   ioCon1.digitalWrite0(1, HIGH);
   ioCon1.digitalWrite0(2, LOW);
   ioCon1.digitalWrite0(3, LOW);
   ioCon1.digitalWrite0(4, LOW);
   ioCon1.digitalWrite0(5, LOW);
   ioCon1.digitalWrite0(6, LOW);
   ioCon1.digitalWrite0(7, LOW);
   delay(25);
   ioCon1.digitalWrite0(0, HIGH);
   ioCon1.digitalWrite0(1, LOW);
   ioCon1.digitalWrite0(2, LOW);
   ioCon1.digitalWrite0(3, LOW);
   ioCon1.digitalWrite0(4, LOW);
   ioCon1.digitalWrite0(5, LOW);
   ioCon1.digitalWrite0(6, LOW);
   ioCon1.digitalWrite0(7, LOW);
   delay(25);
   ioCon1.digitalWrite0(0, LOW);
   ioCon1.digitalWrite0(1, LOW);
   ioCon1.digitalWrite0(2, LOW);
   ioCon1.digitalWrite0(3, LOW);
   ioCon1.digitalWrite0(4, LOW);
   ioCon1.digitalWrite0(5, LOW);
   ioCon1.digitalWrite0(6, LOW);
   ioCon1.digitalWrite0(7, LOW);
   delay(25);
   for(byte i = 0; i < 16; i++)
  {
    ioCon1.digitalWritePort0(~(1 << i));
    delay(75);
  }
}

// Copyright (c) 2023 Evan Beaudoin All rights reserved
//
// Created by: Evan Beaudoin
// Created on: March 2023
// This moves a servo from 0 degrees to 180 degrees


#include <Servo.h>

Servo servo;

int angle = 0;

void setup() {
  // This is the setup
  Serial.begin(9600); //Used for testing
  
  servo.attach(8);
  servo.write(angle);
  
  delay(2000);
}

void loop() {
  // This is the main loop which moves the servo from 0 to 180 degrees and back
  for(angle = 0; angle < 180; angle++) {                                  
    servo.write(angle);
    Serial.println(angle);               
    delay(50);                   
  } 

  for(angle = 180; angle > 0; angle--) {                                
    servo.write(angle);   
    Serial.println(angle);        
    delay(50);       
  } 
}

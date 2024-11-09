#include <ESP32Servo.h>

#include "ESC.h"

#define ESC_PIN 16

/* This example shows how to use an ESC controller that can go
 * only forward
 */
ESC esc(ESC::MODE_FORWARD_BACKWARD);


void setup()
{ 

    Serial.begin(115200);


    esc.attach(ESC_PIN);

    esc.setSpeed(50);
    delay(1000);
    
    esc.setSpeed(100);
    delay(1000);

    esc.setSpeed(250);
    delay(1000);


    esc.setSpeed(400);
    delay(1000);

    esc.setSpeed(500);
    delay(1000);

    esc.setSpeed(200);
    delay(1000);

    esc.setSpeed(0);
    delay(1000);

    delay(1000);


    
} 
 
void loop() 
{ 

} 

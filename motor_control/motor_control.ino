#include <ESP32Servo.h>

#include "ESC.h"

#define ESC_PIN 16

/* This example shows how to use an ESC controller that can go
 * only forward
 */
ESC esc(ESC::MODE_FORWARD_BACKWARD);

void setup() 
{ 
    esc.attach(ESC_PIN);
    esc.setSpeed(30);
    vTaskDelay(1000);
    esc.setSpeed(0);
    vTaskDelay(1000);
    esc.setSpeed(35);
    vTaskDelay(1000);
    esc.setSpeed(30);
    vTaskDelay(1000);
    esc.setSpeed(-30);
    vTaskDelay(10000);

} 
 
void loop() 
{ 

} 

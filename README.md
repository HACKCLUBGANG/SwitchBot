# SwitchBot

Hi! This is switchbot a bot to turn off switches or turn them on 
This is made for people who have difficulties moving and switches are far or higher than them they can use a remote to turn on switch and turn them off

Components used - 
ESP32 development board
2 × SG90 Mini Servo motors
IR receiver module acompatible with ESP32
IR remote control
Jumper wires
5V power source

Connections
Servo 1 - ESP32 GPIO 13
Servo 2 - ESP32 GPIO 12
IR Receiver OUT - ESP32 GPIO 15
VCC/GND - 5V/GND of ESP32

Libraries used
IRremoteESP8266
ArduinoServoLibrary

How it works
The ESP32 reads signals from the IR remote.

Specific buttons are mapped to servo positions
Button 1 - Servo 1 to 0°
Button 2 - Servo 1 to 180°
Button 3 - Servo 2 to 0°
Button 4 - Servo 2 to 180°

To make this more cost friendly i am using 205 Gsm cardstock paper which i have available
















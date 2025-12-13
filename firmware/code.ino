#include <IRremoteESP8266.h>
#include <IRrecv.h>
#include <IRutils.h>
#include <Servo.h>

const uint16_t RECV_PIN = 15;  // ESP32 pin for IR receiver
IRrecv irrecv(RECV_PIN);
decode_results results;

Servo servo1;
Servo servo2;

const int servo1Pin = 13; // Servo 1 pin
const int servo2Pin = 12; // Servo 2 pin

void setup() {
  Serial.begin(115200);
  irrecv.enableIRIn();  // Start the receiver
  servo1.attach(servo1Pin);
  servo2.attach(servo2Pin);
  servo1.write(90);  // Middle position
  servo2.write(90);  // Middle position
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX); // Print IR code

    // Example: Change codes for your remote buttons
    switch(results.value) {
      case 0xFFA25D: // Button 1
        servo1.write(0);
        break;
      case 0xFF629D: // Button 2
        servo1.write(180);
        break;
      case 0xFFE21D: // Button 3
        servo2.write(0);
        break;
      case 0xFF22DD: // Button 4
        servo2.write(180);
        break;
    }

    irrecv.resume(); // Receive the next value
  }
}

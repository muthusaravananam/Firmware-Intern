#include <EEPROM.h>

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    // Read the starting address and length of the string from serial monitor
    int startAddress = Serial.parseInt();
    int strLength = Serial.parseInt();
    
    // Read each character of the string from EEPROM and assemble it
    String receivedString = "";
    for (int i = 0; i < strLength; i++) {
      char ch = EEPROM.read(startAddress + i);
      receivedString += ch;
    }
    
    // Print the received string to serial monitor
    // Serial.print("Read string from EEPROM: ");
    Serial.println(receivedString);
    
    // Wait for a moment to allow serial data to be received
    delay(100);
  }
}

#include <EEPROM.h>

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    String r_str = Serial.readStringUntil('\n');
    
    
    int l = r_str.length();
    
    // Write each character of the string to EEPROM
    int address = 0; // starting address in EEPROM
    for (int i = 0; i < l; i++) {
      EEPROM.write(address + i, r_str[i]);
    }
    
    // Print feedback to serial monitor
    Serial.print("Received string: ");
    Serial.println(r_str);
    
    // Wait for a moment to allow serial data to be received
    delay(100);
  }
}

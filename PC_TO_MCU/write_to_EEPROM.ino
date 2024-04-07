#include <EEPROM.h>

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    String r_str = Serial.readStringUntil('\n');
    int l = r_str.length();
    int index = 0; 
    for (int i = 0; i < l; i++) {
      EEPROM.write(index + i, r_str[i]);
    }
    Serial.print("Received string: ");
    Serial.println(r_str);
    delay(100);
  }
}

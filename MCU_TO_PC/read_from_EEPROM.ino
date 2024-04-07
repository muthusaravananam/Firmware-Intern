#include <EEPROM.h>

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    int initial_add = Serial.parseInt();
    int len = Serial.parseInt();
    String r_str = "";
    for (int i = 0; i < len; i++) {
      char ch = EEPROM.read(initial_add + i);
      r_str=r_str+ch;
    }
    Serial.println(r_str);
    delay(100);
  }
}

#include <EEPROM.h>

void setup() {
  Serial.begin(2400);
}
void loop() {
  if (Serial.available()>0) {
    int init_add=Serial.parseInt();
    int len=Serial.parseInt();
    String rec_str="";
    for (int i=0;i<len;i++) {
      char ch=EEPROM.read(init_add + i);
      rec_str+=ch;
    }
    Serial.println(rec_str);
    delay(100);
  }
}
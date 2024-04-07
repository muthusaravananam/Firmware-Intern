#include <EEPROM.h>
void setup(){
  Serial.begin(2400);
}
void loop(){
  if (Serial.available()>0){
    String rec_str=Serial.readStringUntil('\n');
    int len=rec_str.length();
    int add=0; 
    for (int i = 0;i < len;i++) {
      EEPROM.write(add + i,rec_str[i]);
    }
    Serial.print("Received string: ");
    Serial.println(rec_str);
    delay(100);
  }
}
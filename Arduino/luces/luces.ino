#define BLYNK_PRINT SwSerial
#include<SoftwareSerial.h>
SoftwareSerial SwSerial (10,111);

#include<BlynkSimpleStream.h>
char auth[]="";

void setup() {
  SwSerial.begin(9600);
  Serial.begin(9600);
  Blynk.begin(Serial,auth);
}

void loop() {
  Blynk.run();
}

#include"SevSeg.h"
SevSeg sevseg;
void setup() {
 byte numDigits=1; // put your setup code here, to run once:
byte digitPins[]={};
byte segmentPins[]={3,2,8,7,6,4,5,9};
bool resistorsOnSegments=true;
sevseg.begin(COMMON_ANODE,numDigits,digitPins,segmentPins,resistorsOnSegments);
sevseg.setBrightness(90);
}

void loop() {
for(int i=0;i<10;i++){
  sevseg.setNumber(i);
  sevseg.refreshDisplay();
  delay(2000);// put your main code here, to run repeatedly:
}

}

/*
1 Find the datasheet 
2 Set the radio to Npr 
3 Set the cycle between 3 stats
*/

#include <Wire.h>
void setup(){
    Wire.begin();
}

void loop(){
    setFrequency(100.7);
    delay(10000); // 10 sec 
    setFrequency(90.9);
    delay(10000); // 10 sec 
    setFrequency(92.9);
    delay(10000); // 10 sec 
}

void setFrequency(float frequency)
{
    unsigned int freqB = 4 * (frequency * 1000000 + 225000) / 32768;
    byte freqH = freqB >> 8;
    byte freqL = freqB & 0xff; 

    Wire.beginTransmission(0x60);
    Wire.write(freqH);
    Wire.write(freqL); 
    Wire.write(0xb0); 
    Wire.write(0x10); 
    Wire.write(0x00);
    Wire.endTransmission();
    delay(100);

}
//3-08 sketch 
int ledPin = 13; 
int delayPeriod = 100; 

void setup(){
    pinMode(ledPin, OUTPUT);

}

void loop(){
    for(int i = 0; i < 20; i ++){
    digitalWrite(ledPin, HIGH);
    delay(delayPeriod);
    digitalWrite(ledPin, LOW);
    delay(delayPeriod);
    }
    delay(3000);
}
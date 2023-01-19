int ledPin = 13; 
int delayPeriod = 100;
int count = 0; 

void setup(){
    pinMode(ledPin, OUTPUT);

}

void loop(){
    digitalWrite(ledPin, HIGH);
    delay(delayPeriod);
    digitalWrite(ledPin, LOW);
    delay(delayPeriod);
    count++;
    if (count == 20){
        delay(3000);
        count = 0; 

    }
    
}
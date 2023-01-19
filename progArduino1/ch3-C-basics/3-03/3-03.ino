//3-02 sketch 
int ledPin = 13; 
int delayPeriod = 100; 

void setup(){
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
    Serial.println("start");

}

void loop(){
    digitalWrite(ledPin, HIGH);
    delay(delayPeriod);
    digitalWrite(ledPin, LOW);
    delay(delayPeriod);
    delayPeriod = delayPeriod + 100;
    Serial.println(delayPeriod);
    Serial.println("yo");
}
    
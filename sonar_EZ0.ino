#include "SonarEZ0pw.h"
SonarEZ0pw Sonar(7); // pin D7
int ledPin = 12;
float value=0.00;
float vibration=0.00;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly: 
  value = Sonar.Distance(cm);
  if(value <= 100) // 1 metre max
  {
    digitalWrite(ledPin, HIGH);
    delay(300);
    digitalWrite(ledPin, LOW);
    delay(value*7); // coeficient amplificateur
    Serial.print("Distance= " );
    Serial.print(value);
    Serial.println(" cm ");
   }
   delay(100);
}

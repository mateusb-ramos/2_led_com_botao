int buttonPin = 7;
int ledPin = 10;
int ledPin2 = 11;
int estadoLed = 0;



void setup() {
    pinMode(ledPin, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(buttonPin, INPUT);
}

void loop() {
  
  if (digitalRead(buttonPin) == HIGH) {
     estadoLed = estadoLed + 1;
  }
  if (estadoLed == 1){
    digitalWrite(ledPin, HIGH);
  } else if(estadoLed == 2){
  	digitalWrite(ledPin, LOW);
    digitalWrite(ledPin2, HIGH);
  }  else if (estadoLed == 3){
  	digitalWrite(ledPin2, LOW);
    estadoLed = 0;
  }   
  delay(500);
}
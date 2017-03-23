int redLed = 10;
int greenLed = 9;

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  char recivedChar = Serial.read();

  if(recivedChar == '1') {
    digitalWrite(greenLed, LOW);
    digitalWrite(redLed, HIGH);
    delay(2000);
    digitalWrite(redLed, LOW);
  } else if (recivedChar == '2') {
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, HIGH);
    delay(2000);
    digitalWrite(greenLed, LOW);
  }
}

const int ldrpin = A0;
const int ledpin = 13;
void setup(){
  Serial.begin(9600);
  pinMode(ldrpin,INPUT);
  pinMode(ledpin,OUTPUT);
}

void loop(){
  int ldrstatus = analogRead(ldrpin);

  if (ldrstatus >= 50 ) {
    digitalWrite(ledpin, HIGH);
    Serial.print("light intensity is: ");
    Serial.println(ldrstatus);
  }

  else {
    
    digitalWrite(ledpin, LOW);
    Serial.print("light intensity is: ");
    Serial.println(ldrstatus);
  }
}
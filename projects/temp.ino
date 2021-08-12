const int pingPin = 7;
const int red=11;
const int blue=10;
int green=9;
void setup() {
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop() {
  
  long duration, inches, cm;

  pinMode(pingPin, OUTPUT);
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin, LOW);

  pinMode(pingPin, INPUT);
  duration = pulseIn(pingPin, HIGH);

  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);

  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  
  if(inches<10){
    digitalWrite(red,HIGH);
    digitalWrite(green,LOW);
    digitalWrite(blue,LOW);
  }
  else if (inches>10 && inches<50){
    digitalWrite(red,LOW);
    digitalWrite(green,LOW);
    digitalWrite(blue,HIGH); 
  }
  
  else{ 
    digitalWrite(red,LOW);
    digitalWrite(green,HIGH);
    digitalWrite(blue,LOW); 
  }
}
long microsecondsToInches(long microseconds) {
  
  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
  
  return microseconds / 29 / 2;
}
  {
  if(digitalRead(2) == HIGH)
  {
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    delay(50);
  }
  else
  {
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    delay(50);
  }
}

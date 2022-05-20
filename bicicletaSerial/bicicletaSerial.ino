#define pinledL 2
#define pinledR 4

void setup() {
  Serial.begin(115200);
  pinMode(pinledL, OUTPUT);
  pinMode(pinledR, OUTPUT);

}

char letra;
void loop() {
  if(Serial.available() > 0){
     letra = Serial.read();
     Serial.println(letra);
  }
  if(letra == 'A'){
    digitalWrite(pinledR, HIGH);
    delay(500);
    digitalWrite(pinledR, LOW);
    delay(500);
    digitalWrite(pinledL, LOW);
    
  } else if(letra == 'S'){
    digitalWrite(pinledL, HIGH);
    delay(500);
    digitalWrite(pinledL, LOW);
    delay(500);
    digitalWrite(pinledR, LOW);
    
  } else if(letra == 'D'){
    digitalWrite(pinledL, HIGH);
    digitalWrite(pinledR, HIGH);
    delay(500);
    digitalWrite(pinledR, LOW);
    digitalWrite(pinledL, LOW);
    delay(500);
    
  } else if(letra == 'F'){
    digitalWrite(pinledL, LOW);
    digitalWrite(pinledR, LOW);
  }
  // put your main code here, to run repeatedly:

}

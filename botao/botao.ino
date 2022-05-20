#define BTN 21
bool statusButton;
int cont = 0;
void setup() {
  pinMode(BTN, INPUT_PULLUP);
  Serial.begin(115200);
}

void loop() {
  statusButton = digitalRead(BTN);

  if(statusButton==LOW){
    Serial.println("BOTAO PRESSIONADO");
    cont++;
    delay(600);
    } 
    else{
      Serial.println("BOTAO SOLTO");
      delay(600);
    }
    delay(600);
    Serial.println(cont);
}

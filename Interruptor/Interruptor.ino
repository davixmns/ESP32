#define pinoBotao 4  
#define pinoLed 5
    
int estadoBotao = 0;
int flagBotao;
int estadoLed = 1;

void setup() { 
  pinMode(pinoBotao, INPUT);
  pinMode(pinoLed, OUTPUT);
}

void loop() {
  
  estadoBotao = digitalRead(pinoBotao);
 
  if (estadoBotao == 1 && flagBotao==0){
    flagBotao = 1;
      if(estadoLed == 1){
        estadoLed = 0;
        digitalWrite(pinoLed, HIGH);
      }
      else if(estadoLed == 0){
        estadoLed = 1;
        digitalWrite(pinoLed, LOW);
     }
     delay(100);
  }
  if(estadoBotao==0){
    flagBotao = 0;
  }
}
  

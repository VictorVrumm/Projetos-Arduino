const int led1Verde = 4 ;  
const int led1Amarelo = 3 ; 
const int led1Vermelho = 2 ; 
const int led2Vermelho = 7 ; 
const int led2Verde = 5 ;
const int botao = 8;

void setup() 
{
  pinMode(led1Verde, OUTPUT);
  pinMode(led1Amarelo, OUTPUT);
  pinMode(led1Vermelho, OUTPUT);
  pinMode(led2Vermelho, OUTPUT);
  pinMode(led2Verde, OUTPUT);
  pinMode(botao, INPUT);
}

void loop()
{ 
  digitalWrite(led1Verde, HIGH); 
  digitalWrite(led1Amarelo, LOW);
  digitalWrite(led1Vermelho, LOW); 
  digitalWrite(led2Vermelho, HIGH); 
  digitalWrite(led2Verde, LOW);
  
  if(digitalRead(botao)==LOW)
  {
    digitalWrite(led1Verde, LOW);
    digitalWrite(led1Amarelo, HIGH);
    
    for(int i=0; i<5; i+=1){
      digitalWrite(led2Vermelho, HIGH);
      delay(500);
      digitalWrite(led2Vermelho, LOW); 
      delay(500);
    }
    delay(100);
    
    digitalWrite(led2Vermelho, LOW);
    digitalWrite(led1Amarelo, LOW);
    digitalWrite(led1Verde, LOW);
    digitalWrite(led1Vermelho, HIGH);
    digitalWrite(led2Verde, HIGH);
    delay(5000);
    
    digitalWrite(led2Verde, LOW);
    digitalWrite(led2Vermelho, HIGH);
    delay(2000);
    
    digitalWrite(led1Vermelho, LOW);
    digitalWrite(led1Verde, HIGH); 
  }
}
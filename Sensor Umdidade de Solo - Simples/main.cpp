int sa = A0;
int vsa = 0;

void setup(){
  pinMode(sa, INPUT);
  Serial.begin(9600);
}

void loop() {
  vsa = analogRead(sa);
  Serial.print("Sinal analogico:");
  Serial.println(vsa);
  
  if(vsa > 500){
    Serial.println("Esta chovendo!\n");
  }else{
    Serial.println("Nao esta chovendo!\n");
  }
  delay(1000);
}
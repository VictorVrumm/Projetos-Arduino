const int ledPinsVermelho[] = {2, 4, 6, 8, 10, 12};
const int ledPinsVerde[] = {3, 5, 7, 9, 11, 13};
const int numLeds = 6;

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPinsVermelho[i], OUTPUT);
    pinMode(ledPinsVerde[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < numLeds; i++) {
    if (i > 0) {
      digitalWrite(ledPinsVerde[i - 1], LOW);
      digitalWrite(ledPinsVermelho[i - 1], HIGH);
    }
    digitalWrite(ledPinsVerde[i], HIGH);
    delay(5000);
  }

  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPinsVermelho[i], LOW);
    digitalWrite(ledPinsVerde[i], LOW);
  }
  delay(1000);

  for (int i = numLeds - 1; i >= 0; i--) {
    if (i < numLeds - 1) {
      digitalWrite(ledPinsVerde[i + 1], LOW);
      digitalWrite(ledPinsVermelho[i + 1], HIGH);
    }
    digitalWrite(ledPinsVerde[i], HIGH);
    delay(5000);
  }

  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPinsVermelho[i], LOW);
    digitalWrite(ledPinsVerde[i], LOW);
  }
}

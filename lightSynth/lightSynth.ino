int LDR = A0;
int buzzer = 11;
int maxLight = 200;
int minLight = 0;
int light = 0;

void setup() {
    while(millis() < 5000) { light = analogRead(LDR); if(light > maxLight) maxLight = light;
      if(light < minLight) minLight = light;
    }
}

void loop() {
  light = analogRead(LDR);

  int pitch = map(light,minLight,maxLight,50,4000);

  tone(buzzer, pitch, 10);
  delay(5);
}

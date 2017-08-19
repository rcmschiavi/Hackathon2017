#define higrometro A0

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(115200);
}

// the loop function runs over and over again forever
void loop() {
  float umidade_solo = 0;
  for (int i = 0; i < 10; i++)
    umidade_solo += analogRead(higrometro);
  umidade_solo = round(umidade_solo / 10);
  umidadeSolo = map(umidadeSolo, 130, 200, 0, 100);
  umidadeSolo = 100 - umidadeSolo;
  Serial.println(umidade_solo );
  delay(100);
}

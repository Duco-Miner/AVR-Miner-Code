
/*
  DoinoCoin_Arduino_Slave.ino
  created 10 05 2021
  by Luiz H. Cassettari
*/

/* For microcontrollers with low memory change that to -Os in all files,
for default settings use -O0. -O may be a good tradeoff between both */
#pragma GCC optimize ("-Ofast")

void setup() {
  Serial.begin(115200);
  DuinoCoin_setup();
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
  if (DuinoCoin_loop())
  {
    Blink();
  }
}

void Blink()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(50);
  digitalWrite(LED_BUILTIN, LOW);
}

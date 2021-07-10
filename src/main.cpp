#include <Arduino.h>
#include <TensorFlowLite_ESP32.h>
#include <MicroSpeech.h>

void setup()
{
  Serial.begin(115200);

  delay(100);
  setup_microspeech();
}

void loop()
{
  loop_microspeech();
}
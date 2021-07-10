# MicroSpeech Example for Esp32 and Omnidirectional Microphones

Example for Platformio (https://platformio.org/), tested with VSCode.

The Omnidirectional Microphone is a microphone that can hear from all direction.
In this example is desined for board of the family NodeMCU 32S and based in the project
described in the book "TinyML: Machine Learning with TensorFlow on Arduino and Ultra-Low-Power Microcontrollers".

The TensorFlow Lite for ESP32 compiled by Tanakamasayuki (https://github.com/tanakamasayuki/Arduino_TensorFlowLite_ESP32) from TensorFlow 2.1.1.

## Usage

In the main function is calling the setup and loop function os the example.
```c++
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
```
### Command Respond

Add your own action in the `command_responder.cpp' inside the MicroSpeech Library.

```c++

// Score List Update
  uint8_t command = COMMAND_SILENCE;
  memset(scoreList, 0, sizeof(scoreList));
  if (strcmp(found_command, "silence") == 0) {
    command = COMMAND_SILENCE;
  } else   if (strcmp(found_command, "unknown") == 0) {
    command = COMMAND_UNKNOWN;
  } else   if (strcmp(found_command, "yes") == 0) {
    command = COMMAND_YES;
  } else   if (strcmp(found_command, "no") == 0) {
    command = COMMAND_NO;
  }
```
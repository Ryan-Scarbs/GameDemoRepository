#include <Adafruit_CircuitPlayground.h>

int modeControl = 0;
int buttonA = 4;
int buttonB = 5;
int buttonSwitch = 7;
volatile bool buttonAFlag = 0;
volatile bool buttonBFlag = 0;
volatile bool buttonSwitchFlag = 0;
volatile bool switchState = 0;

void setup() {
  // put your setup code here, to run once:
  CircuitPlayground.begin();

  pinMode(buttonA, INPUT_PULLDOWN);
  attachInterrupt(digitalPinToInterrupt(buttonA), buttonAPress, FALLING);

  pinMode(buttonB, INPUT_PULLDOWN);
  attachInterrupt(digitalPinToInterrupt(buttonB), buttonBPress, FALLING);

  pinMode(buttonSwitch, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(buttonSwitch), buttonSwitchFlip, CHANGE);

}

void loop() {
  // put your main code here, to run repeatedly:

}

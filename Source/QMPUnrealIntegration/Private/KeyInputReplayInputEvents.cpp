#include "KeyInputReplayInputEvents.h"

FKeyInputReplayInputEvents::FKeyInputReplayInputEvents() {
    this->bIsRepeat = false;
    this->UserIndex = 0;
    this->CharacterCode = 0;
    this->KeyCode = 0;
    this->AnalogValue = 0.00f;
    this->PointerIndex = 0;
    this->WheelDelta = 0.00f;
}


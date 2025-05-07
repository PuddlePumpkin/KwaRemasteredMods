#include "VGrabActionData.h"

FVGrabActionData::FVGrabActionData() {
    this->State = EVGrabState::None;
    this->bIsPulling = false;
    this->bIsPushing = false;
    this->GrabStateElapsedTime = 0.00f;
    this->MaxDuration = 0.00f;
}


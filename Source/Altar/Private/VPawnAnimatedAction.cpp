#include "VPawnAnimatedAction.h"

UVPawnAnimatedAction::UVPawnAnimatedAction() {
    this->Duration = 0.00f;
    this->AnimationIndex = 0;
    this->bActionFinished = false;
    this->Lifetime = 0.00f;
    this->StartTime = 0.00f;
    this->bLocksMovement = false;
    this->YawRotationSpeedMultiplier = 1.00f;
}

bool UVPawnAnimatedAction::IsValid() const {
    return false;
}



#include "VTurnInPlaceFPAnimInstance.h"

UVTurnInPlaceFPAnimInstance::UVTurnInPlaceFPAnimInstance() {
    this->TurnTimerResetTime = 1.00f;
    this->MinTurn = 0.90f;
    this->MaxTurn = 2.00f;
    this->TurnAlphaInterpSpeed = 10.00f;
    this->TurnAlpha = 0.00f;
    this->bIsSneaking = false;
    this->bIsSwimming = false;
    this->bIsTurning = false;
    this->bIsTurningLeft = false;
    this->bIsUsingTorch = false;
    this->bIsSwimmingWithShield = false;
}



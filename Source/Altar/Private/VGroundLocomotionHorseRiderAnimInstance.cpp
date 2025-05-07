#include "VGroundLocomotionHorseRiderAnimInstance.h"

UVGroundLocomotionHorseRiderAnimInstance::UVGroundLocomotionHorseRiderAnimInstance() {
    this->bCanLean = false;
    this->HorseGroundLocoAnimInstance = NULL;
    this->bIsInSpecialIdle = false;
    this->bCanPlaySpecialIdle = false;
    this->bIsInDialogue = false;
}

void UVGroundLocomotionHorseRiderAnimInstance::SetGroundLayerData(const FVHorseRiderLocomotionStanding& InGroundLayerData) {
}



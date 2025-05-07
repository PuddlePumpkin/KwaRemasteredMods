#include "VInAirLocomotionHorseRiderAnimInstance.h"

UVInAirLocomotionHorseRiderAnimInstance::UVInAirLocomotionHorseRiderAnimInstance() {
    this->bIsInCanter = false;
    this->bIsActingInPlace = false;
    this->bIsFalling = false;
    this->bIsLanding = false;
    this->bIsJumping = false;
    this->bIsRearing = false;
    this->JumpLoopUpSpeedRatio = 0.00f;
}

void UVInAirLocomotionHorseRiderAnimInstance::SetJumpLayerData(const FVHorseRiderLocomotionJump& InJumpLayerData) {
}



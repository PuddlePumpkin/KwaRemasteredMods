#include "VInAirLocomotionHorseAnimInstance.h"

UVInAirLocomotionHorseAnimInstance::UVInAirLocomotionHorseAnimInstance() {
    this->MaxCanterSpeedAlpha = 0.50f;
    this->bIsInCanter = false;
    this->bCanJump = false;
    this->bIsActingInPlace = false;
    this->ApexSpeedTriggerOffset = 50.00f;
    this->JumpLoopUpSpeedRatio = 0.00f;
}

void UVInAirLocomotionHorseAnimInstance::OnStartJumpEnd() {
}

void UVInAirLocomotionHorseAnimInstance::OnStartJump() {
}

bool UVInAirLocomotionHorseAnimInstance::IsRearing() const {
    return false;
}

bool UVInAirLocomotionHorseAnimInstance::IsLanding() const {
    return false;
}

bool UVInAirLocomotionHorseAnimInstance::IsJumping() const {
    return false;
}

bool UVInAirLocomotionHorseAnimInstance::IsFalling() const {
    return false;
}



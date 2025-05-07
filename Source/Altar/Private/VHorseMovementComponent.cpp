#include "VHorseMovementComponent.h"

UVHorseMovementComponent::UVHorseMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseAccelerationForPaths = true;
    this->bWantsToGallop = false;
    this->TurnMoveSpeedMultiplierCurve = NULL;
    this->TrotMultiplier = 4.20f;
    this->AccelerationCurve = NULL;
    this->DecelerationCurve = NULL;
}

float UVHorseMovementComponent::GetMaxGroundTrotSpeed() const {
    return 0.0f;
}



#include "VLocomotionStandTurnAnimInstance.h"

UVLocomotionStandTurnAnimInstance::UVLocomotionStandTurnAnimInstance() {
    this->TurnInPlaceLayer = NULL;
}

bool UVLocomotionStandTurnAnimInstance::IsTurningLeft() const {
    return false;
}

bool UVLocomotionStandTurnAnimInstance::IsTurning() const {
    return false;
}

bool UVLocomotionStandTurnAnimInstance::CanTurn() const {
    return false;
}



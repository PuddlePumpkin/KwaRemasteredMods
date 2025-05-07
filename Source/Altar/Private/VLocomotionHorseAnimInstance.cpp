#include "VLocomotionHorseAnimInstance.h"

UVLocomotionHorseAnimInstance::UVLocomotionHorseAnimInstance() {
    this->LeanHorizontal = 0.00f;
    this->MaxGallopSpeed = 0.00f;
    this->CanterSpeed = 0.00f;
    this->GallopForwardSpeedAlpha = 0.00f;
    this->bIsInGallop = false;
    this->bHasRider = false;
    this->bIsRiderNPC = false;
    this->Horse = NULL;
}

bool UVLocomotionHorseAnimInstance::IsWalking() const {
    return false;
}

bool UVLocomotionHorseAnimInstance::IsMovingForward() const {
    return false;
}

bool UVLocomotionHorseAnimInstance::IsMovingBackward() const {
    return false;
}

bool UVLocomotionHorseAnimInstance::IsInTrot() const {
    return false;
}



#include "VLocomotionHorseRiderAnimInstance.h"

UVLocomotionHorseRiderAnimInstance::UVLocomotionHorseRiderAnimInstance() {
    this->HorseLinkLayer = NULL;
    this->bIsHorseSwimming = false;
    this->VerticalRiderSpeed = 0.00f;
    this->SlopeAngle = 0.00f;
    this->bIsInTrot = false;
    this->bIsInGallop = false;
    this->bIsWalking = false;
    this->bIsMoving = false;
    this->bIsMovingBackward = false;
    this->bIsMovingForward = false;
    this->HorseLocoAnimInstance = NULL;
}



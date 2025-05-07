#include "VFeetIKCharacterAnimInstance.h"

UVFeetIKCharacterAnimInstance::UVFeetIKCharacterAnimInstance() {
    this->CharacterMoveComp = NULL;
    this->HorizontalSpeed = 0.00f;
    this->VerticalSpeed = 0.00f;
    this->bIsLayerActive = false;
    this->LayerActivationLerpSpeed = 5.00f;
    this->ControlRigAlpha = 1.00f;
    this->bIsMoving = false;
    this->Scale = 1.00f;
    this->Speed = 1.00f;
    this->WalkableFloorZ = 0.00f;
    this->SpeedRatio = 0.00f;
}

void UVFeetIKCharacterAnimInstance::UpdateSpeedRatio() {
}

bool UVFeetIKCharacterAnimInstance::IsSneaking() const {
    return false;
}

bool UVFeetIKCharacterAnimInstance::IsInAir() const {
    return false;
}



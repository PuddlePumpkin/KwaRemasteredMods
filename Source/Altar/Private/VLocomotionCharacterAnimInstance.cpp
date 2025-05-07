#include "VLocomotionCharacterAnimInstance.h"

UVLocomotionCharacterAnimInstance::UVLocomotionCharacterAnimInstance() {
    this->PairedPawnMoveComp = NULL;
    this->ForwardSpeed = 0.00f;
    this->LateralSpeed = 0.00f;
    this->LocomotionPlayRate = 0.00f;
}

void UVLocomotionCharacterAnimInstance::OnSpecialJumpStarted(FVector Velocity) {
}

bool UVLocomotionCharacterAnimInstance::IsSprinting() const {
    return false;
}

bool UVLocomotionCharacterAnimInstance::IsMoving() const {
    return false;
}

bool UVLocomotionCharacterAnimInstance::GetIsMovingBackward() const {
    return false;
}



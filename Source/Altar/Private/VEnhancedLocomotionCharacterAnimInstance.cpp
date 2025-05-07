#include "VEnhancedLocomotionCharacterAnimInstance.h"

UVEnhancedLocomotionCharacterAnimInstance::UVEnhancedLocomotionCharacterAnimInstance() {
    this->PassiveForwardAngle = 0.00f;
    this->PassiveBackwardAngle = 0.00f;
    this->CharacterMoveComp = NULL;
    this->LocomotionDirection = 0.00f;
    this->LocomotionSpeed = 0.00f;
    this->LocomotionPlayRate = 0.00f;
}

bool UVEnhancedLocomotionCharacterAnimInstance::IsWeaponDrawn() const {
    return false;
}

bool UVEnhancedLocomotionCharacterAnimInstance::IsSprinting() const {
    return false;
}



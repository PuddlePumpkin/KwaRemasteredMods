#include "VEnhancedInAirCharacterAnimInstance.h"

UVEnhancedInAirCharacterAnimInstance::UVEnhancedInAirCharacterAnimInstance() {
    this->MovingJumpVelocityThreshold = 100.00f;
    this->bIsLeftFootJump = false;
}

bool UVEnhancedInAirCharacterAnimInstance::IsTryingToMove() const {
    return false;
}

bool UVEnhancedInAirCharacterAnimInstance::IsSneaking() const {
    return false;
}

bool UVEnhancedInAirCharacterAnimInstance::IsLeftFootJump() const {
    return false;
}

bool UVEnhancedInAirCharacterAnimInstance::IsLanding() const {
    return false;
}

bool UVEnhancedInAirCharacterAnimInstance::IsJumping() const {
    return false;
}

bool UVEnhancedInAirCharacterAnimInstance::IsInAir() const {
    return false;
}

float UVEnhancedInAirCharacterAnimInstance::GetLandingAdditiveAlpha() const {
    return 0.0f;
}



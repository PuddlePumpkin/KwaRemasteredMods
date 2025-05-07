#include "VHumanoidLowerAndUpperCharacterAnimInstance.h"

UVHumanoidLowerAndUpperCharacterAnimInstance::UVHumanoidLowerAndUpperCharacterAnimInstance() {
    this->bIsMovingOrRecoiling = false;
    this->bHasDedicatedSneakAnim = false;
    this->bStaffAttacking = false;
}

bool UVHumanoidLowerAndUpperCharacterAnimInstance::IsUsingBow() const {
    return false;
}

bool UVHumanoidLowerAndUpperCharacterAnimInstance::IsSwimming() const {
    return false;
}

bool UVHumanoidLowerAndUpperCharacterAnimInstance::IsSneaking() const {
    return false;
}



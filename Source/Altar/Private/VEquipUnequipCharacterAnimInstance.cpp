#include "VEquipUnequipCharacterAnimInstance.h"

UVEquipUnequipCharacterAnimInstance::UVEquipUnequipCharacterAnimInstance() {
    this->bHasEquipRequest = false;
    this->bHasUnequipRequest = false;
}

bool UVEquipUnequipCharacterAnimInstance::IsStanding() const {
    return false;
}

bool UVEquipUnequipCharacterAnimInstance::IsSneaking() const {
    return false;
}



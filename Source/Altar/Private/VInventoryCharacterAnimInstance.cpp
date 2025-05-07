#include "VInventoryCharacterAnimInstance.h"

UVInventoryCharacterAnimInstance::UVInventoryCharacterAnimInstance() {
    this->LinkedAnimationPairingComponent = NULL;
    this->bTorchVisible = false;
    this->bShieldVisible = false;
    this->CombatPose = ECharacterCombatIdles::HAND_TO_HAND;
}

void UVInventoryCharacterAnimInstance::SetCombatPose() {
}

void UVInventoryCharacterAnimInstance::OnEquippedWeaponChanged(int32 WeaponType, bool bHasShield, bool bHasTorch) {
}



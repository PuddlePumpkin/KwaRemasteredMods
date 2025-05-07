#include "VOblivionCharacterAnimInstance.h"

UVOblivionCharacterAnimInstance::UVOblivionCharacterAnimInstance() {
    this->AttackChainingPeriod = 0.00f;
    this->LinkedAnimationPairingComponent = NULL;
    this->LinkedCombatPairingComponent = NULL;
    this->BackwardForwardMovementAxis = 0.00f;
    this->LeftRightMovementAxis = 0.00f;
    this->bIsRunning = false;
    this->bIsCrouching = false;
    this->CombatMoveset = EOblivionCombatMoveset::HAND_TO_HAND;
    this->ChainedAttackCount = 0;
    this->TimeSinceLastAttack = 0.00f;
    this->bIsBlocking = false;
    this->bPosePairingForced = false;
}

void UVOblivionCharacterAnimInstance::SetForcePosePairing(bool ForcePosePairing) {
}

void UVOblivionCharacterAnimInstance::SetCombatMoveset(EOblivionCombatMoveset Moveset) {
}








void UVOblivionCharacterAnimInstance::OnAttackStarted_Implementation() {
}

void UVOblivionCharacterAnimInstance::OnAnimationStateChange_Implementation(FOblivionSourcedCharacterAnimationState OldState, FOblivionSourcedCharacterAnimationState NewState) {
}



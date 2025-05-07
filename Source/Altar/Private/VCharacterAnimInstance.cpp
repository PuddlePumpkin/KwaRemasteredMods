#include "VCharacterAnimInstance.h"

UVCharacterAnimInstance::UVCharacterAnimInstance() {
    this->LinkedAnimationPairingComponent = NULL;
    this->LinkedCharacterStatePairingComponent = NULL;
    this->LinkedWeaponsPairingComponent = NULL;
    this->CharacterType = ECharacterType::HUMANOID;
    this->VerticalAxis = 0.00f;
    this->HorizontalAxis = 0.00f;
    this->TurningAxis = 0.00f;
    this->bIsReleaseBowShoot = false;
    this->bBowAttack = false;
    this->bBowAttackFollowUp = false;
    this->SequenceIdx = 0;
    this->bFreezeAttack = false;
    this->bOblivionFrameSkip = false;
    this->bIsPowerAttack = false;
    this->bIsOnDynamicIdle = false;
    this->bIsOnSpecialIdle = false;
    this->bShouldBeMoving = false;
    this->CurrentSpecialIdleBlendTime = 0.00f;
    this->bIsSpecialIdleBlend = false;
}

void UVCharacterAnimInstance::UpdateInternalStateMachine(FOblivionSourcedCharacterAnimationState OldState, FOblivionSourcedCharacterAnimationState NewState) {
}




void UVCharacterAnimInstance::OnSpecialIdleAnimation_WantToMove_Implementation(bool ShouldBeMoving) {
}
















float UVCharacterAnimInstance::GetBlendTimeFromSequence(UAnimationAsset* AnimSequence) {
    return 0.0f;
}



#include "VCharacterStatePairingComponent.h"

UVCharacterStatePairingComponent::UVCharacterStatePairingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LinkedAnimationPairingComponent = NULL;
    this->LinkedWeaponsPairingComponent = NULL;
    this->bIsRunning = false;
    this->bIsSwimming = false;
    this->bIsJumping = false;
    this->bIsFalling = false;
    this->bIsSneaking = false;
    this->bIsDodging = false;
    this->bIsBlocking = false;
    this->bIsStaggered = false;
    this->SpellCastType = EVCastType::Unknown;
    this->bHasTorchEquipped = false;
    this->bIsGhost = false;
}

void UVCharacterStatePairingComponent::UpdateInternalStateMachine(FOblivionSourcedCharacterAnimationState OldState, FOblivionSourcedCharacterAnimationState NewState) {
}

void UVCharacterStatePairingComponent::UpdateAnimationState(const AVWeapon* WeaponActor) {
}

bool UVCharacterStatePairingComponent::IsGhost() const {
    return false;
}



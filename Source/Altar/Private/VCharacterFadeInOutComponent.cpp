#include "VCharacterFadeInOutComponent.h"

UVCharacterFadeInOutComponent::UVCharacterFadeInOutComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsOwnerCamera = false;
    this->FadeState = ECharacterFadeState::FadeNone;
    this->CurrentActorBetweenCamAndPlayer = NULL;
}

void UVCharacterFadeInOutComponent::SetDitherOnCreatureVisibleComponents(AVPairedCreature* PairedCreature, bool bDoDither, float DitherScale) {
}

void UVCharacterFadeInOutComponent::SetDitherOnCharacterVisibleComponents(AVPairedCharacter* PairedCharacter, bool bDoDither, float DitherScale) {
}



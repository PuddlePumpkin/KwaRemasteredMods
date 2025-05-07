#include "VPawnSoundPairingComponent.h"

UVPawnSoundPairingComponent::UVPawnSoundPairingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DialogueComponent = NULL;
    this->HeadComponent = NULL;
    this->TorchEquipEvent = NULL;
    this->TorchHoldEvent = NULL;
    this->TorchUnequipEvent = NULL;
}

void UVPawnSoundPairingComponent::UnloadNonPlayingDialogues() {
}



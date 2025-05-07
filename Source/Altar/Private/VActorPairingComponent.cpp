#include "VActorPairingComponent.h"

UVActorPairingComponent::UVActorPairingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisableTickOptimization = false;
    this->bShouldReenableTickWhenUnfrozen = true;
    this->ObjectRefComponent = NULL;
    this->bIsFeaturePaired = false;
}

void UVActorPairingComponent::InitializeFeaturePairing() {
}



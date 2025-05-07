#include "VDockingPairingComponent.h"

UVDockingPairingComponent::UVDockingPairingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisplayDockingDebug = false;
    this->bDockToSleep = false;
    this->DockingSpecialIdle = NULL;
    this->UsedMarkerNumber = -1;
    this->UsedMarkerIndex = -1;
}

bool UVDockingPairingComponent::IsDocked() const {
    return false;
}

bool UVDockingPairingComponent::HasPendingDockingTransition() const {
    return false;
}

AActor* UVDockingPairingComponent::GetUsedDockActor() const {
    return NULL;
}

ESitSleepState UVDockingPairingComponent::GetSitSleepState() const {
    return ESitSleepState::NORMAL;
}



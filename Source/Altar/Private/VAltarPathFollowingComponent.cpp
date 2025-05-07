#include "VAltarPathFollowingComponent.h"

UVAltarPathFollowingComponent::UVAltarPathFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bStrafingAllowed = false;
    this->bDirectPawnTrackingAllowed = false;
    this->bInDebugMode = false;
}



#include "VOblivionGate.h"
#include "VDynamicNavAreaRebuilderComponent.h"

AVOblivionGate::AVOblivionGate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRefreshNavigationDataInBeginPlay = false;
    this->MinPlayerToOblivionGateDistance = 0.00f;
    this->MaxPlayerToOblivionGateDistance = 0.00f;
    this->DynamicNavAreaRebuilderComponent = CreateDefaultSubobject<UVDynamicNavAreaRebuilderComponent>(TEXT("Dynamic Nav Area Rebuilder Component"));
}

void AVOblivionGate::UnregisterFromPlayer() {
}

bool AVOblivionGate::ShouldComputeDistanceWithPlayer_Implementation() const {
    return false;
}

void AVOblivionGate::RegisterToPlayer() {
}





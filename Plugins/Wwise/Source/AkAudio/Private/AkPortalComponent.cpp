#include "AkPortalComponent.h"

UAkPortalComponent::UAkPortalComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDynamic = false;
    this->InitialState = AkAcousticPortalState::Open;
    this->InitialOcclusion = 0.00f;
    this->ObstructionRefreshInterval = 0.00f;
    this->ObstructionCollisionChannel = ECC_Visibility;
    this->FrontRoomText = NULL;
    this->BackRoomText = NULL;
}

void UAkPortalComponent::SetPortalOcclusion(float InPortalOcclusion) {
}

void UAkPortalComponent::SetDynamic(bool bInDynamic) {
}

bool UAkPortalComponent::PortalPlacementValid() const {
    return false;
}

UPrimitiveComponent* UAkPortalComponent::GetPrimitiveParent() const {
    return NULL;
}

float UAkPortalComponent::GetPortalOcclusion() const {
    return 0.0f;
}

AkAcousticPortalState UAkPortalComponent::GetCurrentState() const {
    return AkAcousticPortalState::Closed;
}

void UAkPortalComponent::EnablePortal() {
}

void UAkPortalComponent::DisablePortal() {
}



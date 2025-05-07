#include "AkRoomComponent.h"

UAkRoomComponent::UAkRoomComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseAttachParentBound = true;
    this->AkBeginOverlapAudioEvent = NULL;
    this->AkEndOverlapAudioEvent = NULL;
    this->bIgnoreVolumeExtensionCollisions = false;
    this->bEnable = true;
    this->bDynamic = false;
    this->Priority = 0.00f;
    this->WallOcclusion = 1.00f;
    this->AuxSendLevel = 0.00f;
    this->AutoPost = false;
    this->bEnableReverbZone = false;
    this->ParentRoomActor = NULL;
    this->ParentRoomName = TEXT("Outdoors");
    this->TransitionRegionWidth = 100.00f;
    this->GeometryComponent = NULL;
}

void UAkRoomComponent::UpdateTransitionRegionWidth(float InTransitionRegionWidth) {
}

void UAkRoomComponent::UpdateParentRoomActor(AActor* InParentRoomActor) {
}

void UAkRoomComponent::SetTransmissionLoss(float InTransmissionLoss) {
}

void UAkRoomComponent::SetReverbZone(const UAkRoomComponent* InParentRoom, float InTransitionRegionWidth) {
}

void UAkRoomComponent::SetGeometryComponent(UAkAcousticTextureSetComponent* textureSetComponent) {
}

void UAkRoomComponent::SetEnableReverbZone(bool bInEnableReverbZone) {
}

void UAkRoomComponent::SetEnable(bool bInEnable) {
}

void UAkRoomComponent::SetDynamic(bool bInDynamic) {
}

void UAkRoomComponent::SetAuxSendLevel(float InAuxSendLevel) {
}

void UAkRoomComponent::RemoveReverbZone() {
}

UPrimitiveComponent* UAkRoomComponent::GetPrimitiveParent() const {
    return NULL;
}



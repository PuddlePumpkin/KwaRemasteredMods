#include "VAnimationObjectPairingComponent.h"

UVAnimationObjectPairingComponent::UVAnimationObjectPairingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIgnoreUnsupportedAnimationsSilently = false;
    this->OpenAnimationSequence = NULL;
    this->CloseAnimationSequence = NULL;
    this->bForceOptimizations = false;
}

void UVAnimationObjectPairingComponent::SetAnimActivable(USkeletalMeshComponent* SkeletalMeshComponent, const FString& AnimationName, float PosRatio, bool bPlayAnimation) {
}

void UVAnimationObjectPairingComponent::PlayAnimActivable(USkeletalMeshComponent* SkeletalMeshComponent, const FString& AnimationName) {
}



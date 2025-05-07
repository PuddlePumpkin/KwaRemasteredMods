#include "VTransformPairingComponent.h"

UVTransformPairingComponent::UVTransformPairingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSnapOwnerToLatestTransform = true;
}

FTransform UVTransformPairingComponent::GetLatestPairedTransform() const {
    return FTransform{};
}



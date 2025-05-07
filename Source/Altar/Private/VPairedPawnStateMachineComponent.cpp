#include "VPairedPawnStateMachineComponent.h"

UVPairedPawnStateMachineComponent::UVPairedPawnStateMachineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActionStatePresetsDataTable = NULL;
}

FGameplayTag UVPairedPawnStateMachineComponent::GetLocomotionStateTag() const {
    return FGameplayTag{};
}

FGameplayTag UVPairedPawnStateMachineComponent::GetActionStateTag() const {
    return FGameplayTag{};
}

float UVPairedPawnStateMachineComponent::GetActionStateDuration() const {
    return 0.0f;
}

FString UVPairedPawnStateMachineComponent::GetActionState() const {
    return TEXT("");
}



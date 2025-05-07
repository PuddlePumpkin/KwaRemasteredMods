#include "VStateMachineComponent.h"
#include "Net/UnrealNetwork.h"

UVStateMachineComponent::UVStateMachineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPrintCurrentStatesDebug = false;
    this->bLocalOnlyDebug = false;
    this->bAuthorityOnlyDebug = false;
    this->bStartStateMachineOnBeginPlay = true;
    this->StateMachineClass = NULL;
    this->StateMachineInstance = NULL;
}

void UVStateMachineComponent::SendStateChangeToServer_Implementation(FGameplayTagContainer CurrentStatesTagContainer) {
}

void UVStateMachineComponent::SendStateChangeListToServer_Implementation(const TArray<FGameplayTag>& StateChangeList) {
}

void UVStateMachineComponent::Reset() {
}

void UVStateMachineComponent::RegisterStateChange(FGameplayTag NewState) {
}

void UVStateMachineComponent::OnServerCurrentTagsChange() {
}

UVStateBase* UVStateMachineComponent::GetStateFromTag(FGameplayTag StateTag) const {
    return NULL;
}

void UVStateMachineComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UVStateMachineComponent, ServerCurrentTags);
}



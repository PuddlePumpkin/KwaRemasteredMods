#include "VStateBase.h"

UVStateBase::UVStateBase() {
    this->ParentStateMachineComponent = NULL;
    this->ParentStateMachine = NULL;
    this->ThisStateTimer = 0.00f;
}

void UVStateBase::Reset_Implementation() {
}

void UVStateBase::PostInit_Implementation() {
}

void UVStateBase::OnExited_Implementation() {
}

void UVStateBase::OnEntered_Implementation() {
}

bool UVStateBase::IsCurrentlyActive() const {
    return false;
}

UVStateMachineComponent* UVStateBase::GetOwningStateMachineComponent() const {
    return NULL;
}

void UVStateBase::GetCurrentStatesTags(FGameplayTagContainer& CurrentStatesTags) {
}



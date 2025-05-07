#include "VActorBehaviorBase.h"

UVActorBehaviorBase::UVActorBehaviorBase() {
}

void UVActorBehaviorBase::OnUpdate_Implementation(float DeltaTime) {
}

void UVActorBehaviorBase::OnInit_Implementation() {
}

void UVActorBehaviorBase::OnEnd_Implementation(bool bInterrupted) {
}

void UVActorBehaviorBase::Interrupt() {
}

bool UVActorBehaviorBase::HasEnded() const {
    return false;
}

EVActorBehaviorState UVActorBehaviorBase::GetState() const {
    return EVActorBehaviorState::WAITING;
}

UVAltarActionState* UVActorBehaviorBase::GetOuterState() const {
    return NULL;
}

float UVActorBehaviorBase::GetElapsedTime() const {
    return 0.0f;
}

AVPairedPawn* UVActorBehaviorBase::GetControlledPawn() const { return NULL;}

void UVActorBehaviorBase::EndBehavior() {
}



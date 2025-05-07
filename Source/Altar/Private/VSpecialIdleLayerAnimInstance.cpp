#include "VSpecialIdleLayerAnimInstance.h"

UVSpecialIdleLayerAnimInstance::UVSpecialIdleLayerAnimInstance() {
    this->IsPlayingSpecialIdle = false;
    this->IsInDynamicIdle = false;
    this->WasInSpecialIdle = false;
    this->IsDynamicIdleChanged = false;
    this->DynamicIdleBlendTime = 0.00f;
    this->SpecialIdleSequence = NULL;
    this->OldSpecialIdleSequence = NULL;
    this->SpecialIdleMontage = NULL;
    this->DynamicIdleSequence = NULL;
    this->OldDynamicIdleSequence = NULL;
    this->MontageSlotName = TEXT("FullBody");
}

void UVSpecialIdleLayerAnimInstance::StopSpecialIdle() {
}

void UVSpecialIdleLayerAnimInstance::StartSpecialIdle() {
}

bool UVSpecialIdleLayerAnimInstance::ShouldStopSpecialIdle() {
    return false;
}



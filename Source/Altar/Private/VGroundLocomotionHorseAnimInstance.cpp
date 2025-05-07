#include "VGroundLocomotionHorseAnimInstance.h"

UVGroundLocomotionHorseAnimInstance::UVGroundLocomotionHorseAnimInstance() {
    this->bIsInSpecialIdle = false;
    this->HalfFloorRaycastNum = 3;
    this->BodyRadius = 90.00f;
    this->CapsuleHalfHeight = 88.00f;
    this->RaycastLength = 200.00f;
    this->SlopeNormalInterpSpeed = 500.00f;
    this->DefaultIdle = NULL;
    this->CurrentSpecialIdle = NULL;
    this->MinIdleTime = 2.00f;
    this->MaxIdleTime = 8.00f;
    this->MaxDistance = 700.00f;
    this->MaxAttempts = 20;
    this->SlowestHorseAnimationSpeed = 100.00f;
    this->FastestHorseAnimationSpeed = 100.00f;
    this->BackwardHorseAnimationSpeed = 100.00f;
}

void UVGroundLocomotionHorseAnimInstance::ProcessSpecialIdleTransitionLogic(float DeltaTime) {
}

void UVGroundLocomotionHorseAnimInstance::ProcessIdleTransitionLogic(float DeltaTime) {
}

void UVGroundLocomotionHorseAnimInstance::OnUpdateIdleState(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}

void UVGroundLocomotionHorseAnimInstance::OnSpecialIdleExit(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}

float UVGroundLocomotionHorseAnimInstance::GetLocomotionPlayRate() const {
    return 0.0f;
}

int32 UVGroundLocomotionHorseAnimInstance::GetCurrentSpecialIdleIndex() const {
    return 0;
}

bool UVGroundLocomotionHorseAnimInstance::CanPlaySpecialIdle() const {
    return false;
}



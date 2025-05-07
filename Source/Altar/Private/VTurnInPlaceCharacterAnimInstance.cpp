#include "VTurnInPlaceCharacterAnimInstance.h"

UVTurnInPlaceCharacterAnimInstance::UVTurnInPlaceCharacterAnimInstance() {
    this->CharacterMoveComp = NULL;
    this->bIsLayerActive = false;
    this->bEnabled = false;
    this->TurnPlayRate = 1.00f;
    this->RootYawOffset = 0.00f;
    this->TurnAngle = 0.00f;
    this->MinTurnAngle = 0.00f;
    this->bIsSneaking = false;
    this->bIsTurning = false;
    this->bIsAiming = false;
    this->bStartTurn = false;
    this->bReadyForNextTurn = false;
    this->AimBlendSpace = NULL;
    this->bCanAimOffset = false;
    this->YawAimOffset = 0.00f;
    this->PitchAimOffset = 0.00f;
}

bool UVTurnInPlaceCharacterAnimInstance::UpdateTurnSystem() {
    return false;
}

void UVTurnInPlaceCharacterAnimInstance::UpdateOffsets() {
}

void UVTurnInPlaceCharacterAnimInstance::UpdateAnimStatus() {
}

void UVTurnInPlaceCharacterAnimInstance::UpdateAimingOffset() {
}

void UVTurnInPlaceCharacterAnimInstance::TriggerTurnInPlace(float InTurnAngle) {
}

void UVTurnInPlaceCharacterAnimInstance::TriggerStartTurn() {
}

void UVTurnInPlaceCharacterAnimInstance::TriggerLastTurn() {
}

void UVTurnInPlaceCharacterAnimInstance::SafeUpdateTurnValues() {
}

void UVTurnInPlaceCharacterAnimInstance::SafeUpdatePawnStates() {
}

void UVTurnInPlaceCharacterAnimInstance::OnStartTurnTransitionStateEntry(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}

void UVTurnInPlaceCharacterAnimInstance::OnIdleStateEntry(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}

bool UVTurnInPlaceCharacterAnimInstance::NeedsTurnInPlace() const {
    return false;
}

bool UVTurnInPlaceCharacterAnimInstance::IsTurnTooSmall(float Angle) const {
    return false;
}

void UVTurnInPlaceCharacterAnimInstance::IsOnHorse() {
}

bool UVTurnInPlaceCharacterAnimInstance::HasPawnHasTag(FGameplayTag Tag) const {
    return false;
}

float UVTurnInPlaceCharacterAnimInstance::GetTurningYawAimOffset() const {
    return 0.0f;
}

bool UVTurnInPlaceCharacterAnimInstance::GetStopState() const {
    return false;
}

float UVTurnInPlaceCharacterAnimInstance::GetRootOffset() const {
    return 0.0f;
}

bool UVTurnInPlaceCharacterAnimInstance::GetInterruptionState() const {
    return false;
}

float UVTurnInPlaceCharacterAnimInstance::GetAnimYawRotation() const {
    return 0.0f;
}

float UVTurnInPlaceCharacterAnimInstance::GetAnimRotationRatio() const {
    return 0.0f;
}

float UVTurnInPlaceCharacterAnimInstance::GetActorOffset() const {
    return 0.0f;
}



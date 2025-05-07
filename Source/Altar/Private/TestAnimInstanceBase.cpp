#include "TestAnimInstanceBase.h"

UTestAnimInstanceBase::UTestAnimInstanceBase() {
    this->FullJogSpeed = 0.00f;
    this->JumpAnimation = NULL;
    this->HitReactionPhysicsBlendDuration = 0.00f;
    this->HitReactionPhysicsImpulseMagnitude = 0.00f;
    this->IsFalling = false;
}

void UTestAnimInstanceBase::StartPhysicsBlendFromBone(FName BoneName, float Duration, FVector StartImpulse) {
}

void UTestAnimInstanceBase::SignalFallStarted_Implementation() {
}

void UTestAnimInstanceBase::SignalFallEnded_Implementation() {
}

void UTestAnimInstanceBase::SetTargetRightSpeed(float TargetSpeed) {
}

void UTestAnimInstanceBase::SetTargetForwardSpeed(float TargetSpeed) {
}

void UTestAnimInstanceBase::ResetAttackChain() {
}

void UTestAnimInstanceBase::ProcessDamageReaction_Implementation(float Damage, const FMeleeAttackDamageEvent& DamageEvent) {
}

void UTestAnimInstanceBase::PlayJumpAnimation() {
}

void UTestAnimInstanceBase::DisallowNextAttack() {
}

TArray<FAttackMovesetItem> UTestAnimInstanceBase::ChooseNextAttackMoveset_Implementation(EAttackActionType AttackActionType, FAnimCharacterAttackStartInfo AttackStartInfo) {
    return TArray<FAttackMovesetItem>();
}

bool UTestAnimInstanceBase::AttemptAttackAnimation(EAttackActionType AttackActionType, FAnimCharacterAttackStartInfo AttackStartInfo) {
    return false;
}

void UTestAnimInstanceBase::AllowNextAttack() {
}



#include "TestAnimCharacterBase.h"
#include "Components/SceneComponent.h"

ATestAnimCharacterBase::ATestAnimCharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttackRaycastStart = CreateDefaultSubobject<USceneComponent>(TEXT("Attack Raycast Start"));
    this->AnimInstance = NULL;
    this->AttackRange = 0.00f;
    this->TurnTowardsMovement = false;
    this->HasWeaponDrawn = false;
    this->IsInDamageSection = false;
    this->AttackRaycastStart->SetupAttachment(RootComponent);
}

void ATestAnimCharacterBase::SetAimPosition(FVector AimPosition) {
}

void ATestAnimCharacterBase::ScanHit() {
}

void ATestAnimCharacterBase::OnHitImpact_Implementation(FVector ImpactPoint, UPrimitiveComponent* HitComponent) {
}

void ATestAnimCharacterBase::OnAnimJumpStarted() {
}

void ATestAnimCharacterBase::OnAnimDamageSectionStart() {
}

void ATestAnimCharacterBase::OnAnimDamageSectionEnd() {
}

void ATestAnimCharacterBase::MoveTowardsFromControlRotation(FVector2D Direction, bool Run) {
}

FHitResult ATestAnimCharacterBase::MeleeAttackRaycast() {
    return FHitResult{};
}

void ATestAnimCharacterBase::LeaveCombatMode() {
}

void ATestAnimCharacterBase::EnterCombatMode() {
}

void ATestAnimCharacterBase::AttemptStartAttack(EAttackActionType AttackType) {
}



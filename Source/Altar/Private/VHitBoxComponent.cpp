#include "VHitBoxComponent.h"

UVHitBoxComponent::UVHitBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TriggerFlags = 3;
    this->HitSourceMaterial = EVHitSourceMaterial::Metal;
    this->HitSourceWeaponType = EVHitSourceWeaponType::Other;
    this->MinDurationBetweenImpacts = -1.00f;
    this->GameplayBehaviour = EVGameplayHitboxBehaviour::Default;
    this->EnvironmentImpactHitForceMultiplier = 1.00f;
    this->bIsCloudTrap = false;
    this->bIsPhantom = false;
    this->bIsContinuous = false;
    this->VelocityScale = 1.00f;
    this->bOnlyTriggerAgainstPawns = false;
    this->AttackerActor = NULL;
}

void UVHitBoxComponent::UnpauseHit() {
}

void UVHitBoxComponent::TriggerTrapEnd(UPrimitiveComponent* SourceComp, AActor* TargetActor, UPrimitiveComponent* TargetComp, int32 UnusedOtherBox) {
}

void UVHitBoxComponent::TriggerTrapBegin(UPrimitiveComponent* SourceComp, AActor* TargetActor, UPrimitiveComponent* TargetComp, int32 UnusedOtherBox, bool UnusedSweep, const FHitResult& EmptyHitResult) {
}

bool UVHitBoxComponent::TriggerImpactSystemFromRow(const FImpactSystemRowBase& ChosenRow, const FVector& ImpactPoint, const FVector& ImpactNormal) {
    return false;
}

bool UVHitBoxComponent::TriggerImpactSystemFromHitResult(const FHitResult& MaterialHitResult, const FHitResult& LocationHitResult, FVProjectilePenetrationSettings& OutProjectilePenetrationSettings) {
    return false;
}

bool UVHitBoxComponent::TriggerImpactSystem(const UPhysicalMaterial* PhysicalMaterial, const FVector& ImpactPoint, const FVector& ImpactNormal) {
    return false;
}

void UVHitBoxComponent::StopHit() {
}

void UVHitBoxComponent::StartHit(EVHitSourceType HitSourceTypeParam, AActor* Attacker, TSoftClassPtr<AVImpactSystemVFXBlueprint> BlueprintClass, float Duration, bool bUseOverlaps) {
}

void UVHitBoxComponent::RemoveTriggerTarget(UPrimitiveComponent* SourceComp, AActor* TargetActor, UPrimitiveComponent* TargetComp, int32 UnusedOtherBox) {
}

void UVHitBoxComponent::PauseHit() {
}

void UVHitBoxComponent::OnOverlapTriggered(UPrimitiveComponent* SourceComp, AActor* TargetActor, UPrimitiveComponent* TargetComp, int32 UnusedOtherBox, bool UnusedSweep, const FHitResult& OverlapHitResult) {
}

void UVHitBoxComponent::AddTriggerTarget(UPrimitiveComponent* SourceComp, AActor* TargetActor, UPrimitiveComponent* TargetComp, int32 UnusedOtherBox, bool UnusedSweep, const FHitResult& EmptyHitResult) {
}

void UVHitBoxComponent::ActivateTriggers() {
}



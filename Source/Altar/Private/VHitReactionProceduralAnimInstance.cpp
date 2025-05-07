#include "VHitReactionProceduralAnimInstance.h"

UVHitReactionProceduralAnimInstance::UVHitReactionProceduralAnimInstance() {
    this->HitReactProfileName = TEXT("Alive");
    this->SpreadPhysicsBlend = 0.20f;
    this->ReactionPhysicsBlend = 0.90f;
    this->RecoveryCurve = NULL;
}

void UVHitReactionProceduralAnimInstance::OnPawnPhysicsSimulationStop() {
}

void UVHitReactionProceduralAnimInstance::OnPawnPhysicsSimulationStart() {
}

void UVHitReactionProceduralAnimInstance::OnHitReaction(const FVHitReactEvent& HitReactEvent) {
}

void UVHitReactionProceduralAnimInstance::InitHitReaction(const FName HitBoneName, const FVector HitDirection, bool bIsArrow, bool bIsPowerAttack, bool bIsSpell) {
}



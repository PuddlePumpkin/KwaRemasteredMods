#include "VFacialCharacterAnimInstance.h"

UVFacialCharacterAnimInstance::UVFacialCharacterAnimInstance() {
    this->bShouldDisableIdleFacialPose = false;
    this->bIsIdling = false;
    this->bIsFleeing = false;
    this->bShouldBlendFacialPose = false;
    this->bShouldUseAttackPose = false;
    this->bShouldUseHitReactionPose = false;
    this->BlendWeight = 1.00f;
    this->InterpSpeed = 2.00f;
    this->FacialBoneName = TEXT("Skin_Head_master_jnt");
    this->TongueBoneName = TEXT("Tongue01_M");
    this->PassiveIdlePose = TEXT("Passive_Idle");
    this->CombatIdlePose = TEXT("Combat_Idle");
    this->FleePose = TEXT("Flee");
    this->AttackPose = TEXT("Attack");
    this->HitReactionIdlePose = TEXT("HitReaction");
    this->HitReactionAnimInstanceClass = NULL;
}

bool UVFacialCharacterAnimInstance::IsUsingHitPose() const {
    return false;
}

bool UVFacialCharacterAnimInstance::IsUsingAttackPose() const {
    return false;
}



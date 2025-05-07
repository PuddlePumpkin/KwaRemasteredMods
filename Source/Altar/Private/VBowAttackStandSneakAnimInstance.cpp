#include "VBowAttackStandSneakAnimInstance.h"

UVBowAttackStandSneakAnimInstance::UVBowAttackStandSneakAnimInstance() {
    this->StartAnim = NULL;
    this->LoopAnim = NULL;
    this->ReleaseAnim = NULL;
}

void UVBowAttackStandSneakAnimInstance::OnStartEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}

void UVBowAttackStandSneakAnimInstance::OnReleaseEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}

bool UVBowAttackStandSneakAnimInstance::IsStanding() const {
    return false;
}

bool UVBowAttackStandSneakAnimInstance::IsSneaking() const {
    return false;
}



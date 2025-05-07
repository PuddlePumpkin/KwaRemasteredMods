#include "VLRPrepareAttackAnimInstance.h"

UVLRPrepareAttackAnimInstance::UVLRPrepareAttackAnimInstance() {
    this->PrepareAttackAnim = NULL;
    this->AttackLeftAnim = NULL;
    this->AttackRightAnim = NULL;
}

void UVLRPrepareAttackAnimInstance::OnPrepareAttackEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}



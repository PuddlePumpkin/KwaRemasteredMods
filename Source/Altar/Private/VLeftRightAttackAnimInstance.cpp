#include "VLeftRightAttackAnimInstance.h"

UVLeftRightAttackAnimInstance::UVLeftRightAttackAnimInstance() {
    this->bShouldEnterLightAttackRight = false;
    this->bShouldEnterLightAttackLeft = false;
    this->bShouldEnterPrepareAttack = false;
}

void UVLeftRightAttackAnimInstance::OnAttackRightEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}

void UVLeftRightAttackAnimInstance::OnAttackLeftEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}



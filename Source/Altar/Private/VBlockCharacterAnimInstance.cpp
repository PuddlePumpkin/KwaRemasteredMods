#include "VBlockCharacterAnimInstance.h"

UVBlockCharacterAnimInstance::UVBlockCharacterAnimInstance() {
    this->bIsPlayingBlockHit = false;
    this->bShouldEnterBlockState = false;
}

void UVBlockCharacterAnimInstance::OnBlockHitEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}

void UVBlockCharacterAnimInstance::OnBlockHitEnd(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}

bool UVBlockCharacterAnimInstance::IsBlockingHit() const {
    return false;
}

bool UVBlockCharacterAnimInstance::GetShouldEnterBlockState() const {
    return false;
}



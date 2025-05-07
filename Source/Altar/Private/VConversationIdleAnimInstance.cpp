#include "VConversationIdleAnimInstance.h"

UVConversationIdleAnimInstance::UVConversationIdleAnimInstance() {
    this->CurrentAnimation = NULL;
    this->CanPlayAnimation = false;
    this->PlayRate = 0.00f;
}

bool UVConversationIdleAnimInstance::IsInDialogue() const {
    return false;
}



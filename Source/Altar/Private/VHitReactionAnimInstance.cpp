#include "VHitReactionAnimInstance.h"

UVHitReactionAnimInstance::UVHitReactionAnimInstance() {
    this->HitReactionState = EHitReactionState::Default;
    this->bUseDirectionSnapping = true;
    this->ForwardDeadZone = 0.20f;
}



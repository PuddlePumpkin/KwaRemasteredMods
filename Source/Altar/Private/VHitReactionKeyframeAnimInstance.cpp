#include "VHitReactionKeyframeAnimInstance.h"

UVHitReactionKeyframeAnimInstance::UVHitReactionKeyframeAnimInstance() {
    this->CurrentBlendSpace = NULL;
    this->CurrentAlpha = 0.00f;
    this->AlphaVariance = 0.00f;
}

bool UVHitReactionKeyframeAnimInstance::ShouldPlayHitReaction() const {
    return false;
}



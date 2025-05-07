#include "VLookAtAnimInstance.h"

UVLookAtAnimInstance::UVLookAtAnimInstance() {
    this->CommandEffectName = TEXT("effectCommand");
    this->bCanLookAt = false;
}

bool UVLookAtAnimInstance::IsSitting() const {
    return false;
}



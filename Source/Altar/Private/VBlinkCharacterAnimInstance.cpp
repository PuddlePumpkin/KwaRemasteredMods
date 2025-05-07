#include "VBlinkCharacterAnimInstance.h"

UVBlinkCharacterAnimInstance::UVBlinkCharacterAnimInstance() {
}

bool UVBlinkCharacterAnimInstance::IsSleeping() const {
    return false;
}

bool UVBlinkCharacterAnimInstance::IsDead() const {
    return false;
}

bool UVBlinkCharacterAnimInstance::IsBlinking() const {
    return false;
}

float UVBlinkCharacterAnimInstance::GetBlinkProgress() const {
    return 0.0f;
}



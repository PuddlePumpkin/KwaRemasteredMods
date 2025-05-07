#include "VHumanoidHeadCharacterAnimInstance.h"

UVHumanoidHeadCharacterAnimInstance::UVHumanoidHeadCharacterAnimInstance() {
    this->EyeBoneName_L = TEXT("FACIAL_L_Eye");
    this->EyeBoneName_R = TEXT("FACIAL_R_Eye");
    this->EyesPitchRangeInDegree = 30.00f;
    this->EyesHeadingRangeInDegree = 60.00f;
    this->EmotionBlendSpeed = 2.00f;
    this->EyeHeadingMultiplier = 1.00f;
    this->EyeHeadingBias = 0.00f;
}

bool UVHumanoidHeadCharacterAnimInstance::IsSurprised() const {
    return false;
}

bool UVHumanoidHeadCharacterAnimInstance::IsSad() const {
    return false;
}

bool UVHumanoidHeadCharacterAnimInstance::IsNeutral() const {
    return false;
}

bool UVHumanoidHeadCharacterAnimInstance::IsHappy() const {
    return false;
}

bool UVHumanoidHeadCharacterAnimInstance::IsFearful() const {
    return false;
}

bool UVHumanoidHeadCharacterAnimInstance::IsDisgusted() const {
    return false;
}

bool UVHumanoidHeadCharacterAnimInstance::IsConscious() const {
    return false;
}

bool UVHumanoidHeadCharacterAnimInstance::IsAngry() const {
    return false;
}

float UVHumanoidHeadCharacterAnimInstance::GetEyePitchValue() const {
    return 0.0f;
}

float UVHumanoidHeadCharacterAnimInstance::GetEyeHeadingValue() const {
    return 0.0f;
}

float UVHumanoidHeadCharacterAnimInstance::GetEmotionBlendValue() const {
    return 0.0f;
}



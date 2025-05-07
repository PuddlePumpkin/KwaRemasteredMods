#include "VHUDBreathViewModel.h"

UVHUDBreathViewModel::UVHUDBreathViewModel() {
    this->BreathPercentage = 0.00f;
    this->bIsBreathBarBlinking = false;
}

void UVHUDBreathViewModel::SetBreathPercentage(const float& NewBreathPercentage) {
}

bool UVHUDBreathViewModel::GetIsBreathBarBlinking() const {
    return false;
}

float UVHUDBreathViewModel::GetBreathPercentage() const {
    return 0.0f;
}



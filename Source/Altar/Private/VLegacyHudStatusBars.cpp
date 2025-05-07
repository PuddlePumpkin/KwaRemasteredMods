#include "VLegacyHudStatusBars.h"

UVLegacyHudStatusBars::UVLegacyHudStatusBars() {
    this->HealthProgress = 1.00f;
    this->MagickaProgress = 1.00f;
    this->FatigueProgress = 1.00f;
}

void UVLegacyHudStatusBars::SetMagickaProgress(float Value) {
}

void UVLegacyHudStatusBars::SetHealthProgress(float Value) {
}

void UVLegacyHudStatusBars::SetFatigueProgress(float Value) {
}




float UVLegacyHudStatusBars::GetMagickaProgress() const {
    return 0.0f;
}

float UVLegacyHudStatusBars::GetHealthProgress() const {
    return 0.0f;
}

float UVLegacyHudStatusBars::GetFatigueProgress() const {
    return 0.0f;
}



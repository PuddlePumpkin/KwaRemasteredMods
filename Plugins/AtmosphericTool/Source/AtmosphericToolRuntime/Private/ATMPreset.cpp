#include "ATMPreset.h"

UATMPreset::UATMPreset() {
    this->ShouldActivate = false;
    this->PresetSequence = NULL;
    this->PresetSequenceHalfBlend = NULL;
    this->Priority = 100.00f;
}

TArray<UATMPreset*> UATMPreset::GetExistingPresets() {
    return TArray<UATMPreset*>();
}



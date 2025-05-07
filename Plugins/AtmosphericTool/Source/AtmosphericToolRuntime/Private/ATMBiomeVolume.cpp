#include "ATMBiomeVolume.h"

AATMBiomeVolume::AATMBiomeVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectDistance = 1000.00f;
    this->Preset = NULL;
    this->CachedWeight = 0.00f;
}



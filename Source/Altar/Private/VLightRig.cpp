#include "VLightRig.h"

AVLightRig::AVLightRig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OffsetTimeBeforeDelete = 3.00f;
    this->TimeToReachIntensity = 3.00f;
    this->MinIntensityPercentage = 0.00f;
    this->FallOffIntensityFactor = 1.30f;
    this->bLightIntensityBasedOnExposure = false;
}



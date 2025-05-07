#include "VBuoyancySettings.h"

FVBuoyancySettings::FVBuoyancySettings() {
    this->bDoesGeneratePontoonsAtRuntime = false;
    this->bNeedsOrientationAdjustment = false;
    this->GeneratedPontoonSizeScale = 0.00f;
    this->BuoyancyCoefficient = 0.00f;
}


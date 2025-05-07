#include "AnimationPresetData.h"

FAnimationPresetData::FAnimationPresetData() {
    this->Animation = NULL;
    this->bUseActionStateDuration = false;
    this->bUseCustomAnimationDuration = false;
    this->CustomAnimationDuration = 0.00f;
    this->AnimationWeight = 0;
}


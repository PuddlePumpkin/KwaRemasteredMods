#include "ActorBlinkSettings.h"

FActorBlinkSettings::FActorBlinkSettings() {
    this->bUseSecondaryEyelids = false;
    this->PrimaryBlinkCurve = NULL;
    this->SecondaryBlinkCurve = NULL;
    this->UnconsciousAnimSequence = NULL;
}


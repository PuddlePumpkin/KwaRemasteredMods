#include "VProjectilePenetrationSettings.h"

FVProjectilePenetrationSettings::FVProjectilePenetrationSettings() {
    this->bIsPenetrationAllowed = false;
    this->MinPenetrationDepth = 0.00f;
    this->MaxPenetrationDepth = 0.00f;
    this->MinVelocityThreshold = 0.00f;
    this->MaxVelocityThreshold = 0.00f;
}


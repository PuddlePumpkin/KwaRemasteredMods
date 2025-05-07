#include "NiPSysGravityModifier.h"

UNiPSysGravityModifier::UNiPSysGravityModifier() {
    this->GravityObject = NULL;
    this->Decay = 0.00f;
    this->Strength = 0.00f;
    this->ForceType = EForceType::FORCE_PLANAR;
    this->Turbulence = 0.00f;
    this->TurbulenceScale = 0.00f;
    this->WorldAligned = false;
}



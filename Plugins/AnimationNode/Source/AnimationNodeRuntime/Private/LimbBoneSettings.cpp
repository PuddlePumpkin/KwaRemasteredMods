#include "LimbBoneSettings.h"

FLimbBoneSettings::FLimbBoneSettings() {
    this->PositionStiffness = 0.00f;
    this->RotationStiffness = 0.00f;
    this->XRotationType = EPBIKLimitType::Free;
    this->YRotationType = EPBIKLimitType::Free;
    this->ZRotationType = EPBIKLimitType::Free;
    this->bUsePreferredAngles = false;
}


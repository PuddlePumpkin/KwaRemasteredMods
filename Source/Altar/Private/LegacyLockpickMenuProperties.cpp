#include "LegacyLockpickMenuProperties.h"

FLegacyLockpickMenuProperties::FLegacyLockpickMenuProperties() {
    this->Difficulty = ELegacyLockpickMenuDifficulty::VeryEasy;
    this->NumLockpicks = 0;
    this->HasSkeletonKey = false;
    this->SecurityLevel = 0;
}


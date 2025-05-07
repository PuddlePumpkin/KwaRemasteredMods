#include "VModernLockpickMenu.h"

UVModernLockpickMenu::UVModernLockpickMenu() {
    this->DifficultyCurveTable = NULL;
}

void UVModernLockpickMenu::SetDifficultyCurve(ELegacyLockpickMenuDifficulty Difficulty) {
}


void UVModernLockpickMenu::InitialiseTumblerMovement(int32 TumblerIndex, const FLegacyLockpickMenuTumblerDefaultProperties& TumblerDefaultProperties, const FLegacyLockpickMenuProperties& MenuProperties) {
}

int32 UVModernLockpickMenu::GetTumblersToReset(int32 SecuritySkillLevel) {
    return 0;
}



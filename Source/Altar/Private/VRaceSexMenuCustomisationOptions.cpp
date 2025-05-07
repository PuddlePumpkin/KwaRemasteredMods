#include "VRaceSexMenuCustomisationOptions.h"

FVRaceSexMenuCustomisationOptions::FVRaceSexMenuCustomisationOptions() {
    this->Type = ELegacyRaceSexMenuToggleType::EyeColour;
    this->GenderRequirement = EModernCharacterCreationGenderRequirement::BodyA;
    this->bAllowInRandomization = false;
}


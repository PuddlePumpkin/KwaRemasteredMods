#include "VCharacterSkinParameter.h"

FVCharacterSkinParameter::FVCharacterSkinParameter() {
    this->PrimitiveSlot = 0;
    this->ParameterType = EVCharacterParameterType::Simple;
    this->DefaultValue = 0.00f;
    this->NumberOfSucessiveSlots = 0;
}


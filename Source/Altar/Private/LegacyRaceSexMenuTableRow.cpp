#include "LegacyRaceSexMenuTableRow.h"

FLegacyRaceSexMenuTableRow::FLegacyRaceSexMenuTableRow() {
    this->Type = ELegacyRaceSexMenuWidgetType::Button;
    this->Page = EModernRaceSexPage::Shape;
    this->bShouldDisplayWidgetLabel = false;
    this->GenderRequirement = EModernCharacterCreationGenderRequirement::BodyA;
}


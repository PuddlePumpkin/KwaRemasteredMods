#include "LegacyMagicMenuItemProperties.h"

FLegacyMagicMenuItemProperties::FLegacyMagicMenuItemProperties() {
    this->Property = 0.00f;
    this->Icon = NULL;
    this->Category = ELegacyMagicMenuItemCategory::None;
    this->Type = ELegacyMagicMenuItemType::None;
    this->IsEquiped = false;
    this->InventoryIndex = 0;
    this->School = EModernMagicMenuItemSchool::Alteration;
    this->EffectValue = EModernMagicMenuActiveEffectValue::Positive;
    this->bIsImmuneToSilence = false;
    this->Count = 0;
    this->bIsFavorite = false;
}


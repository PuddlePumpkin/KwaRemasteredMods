#include "LegacySpellPurchaseMenuItemProperties.h"

FLegacySpellPurchaseMenuItemProperties::FLegacySpellPurchaseMenuItemProperties() {
    this->Costs = 0;
    this->Icon = NULL;
    this->GoldCost = 0;
    this->Category = ELegacySpellPurchaseMenuItemCategory::None;
    this->Type = ELegacySpellPurchaseMenuItemType::None;
    this->School = ELegacySpellPurchaseMenuSpellSchool::Alteration;
    this->bIsImmuneToSilence = false;
    this->SpellId = 0;
}


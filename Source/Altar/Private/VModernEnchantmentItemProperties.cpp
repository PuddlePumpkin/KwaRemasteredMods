#include "VModernEnchantmentItemProperties.h"

FVModernEnchantmentItemProperties::FVModernEnchantmentItemProperties() {
    this->Index = 0;
    this->Icon = NULL;
    this->Health = 0;
    this->StatusFlags = 0;
    this->bIsAdded = false;
    this->Type = EModernEnchantmentMenuItemType::Gear;
    this->bIsSelected = false;
}


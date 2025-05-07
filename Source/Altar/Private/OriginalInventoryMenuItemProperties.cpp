#include "OriginalInventoryMenuItemProperties.h"

FOriginalInventoryMenuItemProperties::FOriginalInventoryMenuItemProperties() {
    this->Price = 0.00f;
    this->Weight = 0.00f;
    this->WeaponDamage = 0.00f;
    this->ArmorRating = 0.00f;
    this->Health = 0.00f;
    this->Count = 0;
    this->Icon = NULL;
    this->Type = ELegacyInventoryMenuItemType::Weapons;
    this->bIsEquiped = false;
    this->bIsFavorite = false;
    this->InventoryIndex = 0;
    this->form = NULL;
    this->StatusFlags = 0;
    this->bIsInventoryItem = false;
    this->bIsInContainerMenu = false;
}


#include "ModernEffectItemData.h"

FModernEffectItemData::FModernEffectItemData() {
    this->Index = 0;
    this->EffectID = 0;
    this->Range = EModernEffectItemRange::Self;
    this->MagickaCost = 0;
    this->Magnitude = 0;
    this->MagnitudeType = EModernMagnitudeType::Percent;
    this->AreaOfEffect = 0;
    this->Duration = 0;
    this->Image = NULL;
    this->MagicType = EModernSpellType::Spell;
    this->bIsActiveEffect = false;
}


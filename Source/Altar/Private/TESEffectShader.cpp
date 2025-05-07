#include "TESEffectShader.h"

UTESEffectShader::UTESEffectShader() {
    this->StatusEffectVFXBlueprintClass = NULL;
    this->DefaultVFXColors.AddDefaulted(3);
    this->ColorUsages.AddDefaulted(3);
    this->bCanSwitchMaterial = false;
    this->PriorityTypeOnPawn = EVPriorityTypeOnPawn::NotAPawnEffect;
    this->HighPriorityValue = 0;
    this->bIsPresentOnWeapons = false;
}



#include "VStatusEffectOnPawn.h"

UVStatusEffectOnPawn::UVStatusEffectOnPawn() {
    this->StatusEffectForm = NULL;
    this->StatusEffectVFXBlueprint = NULL;
    this->StatusEffectValue = 0.00f;
    this->ExcessInstancesCount = 0;
    this->bIsPresentOnWeapons = 0;
    this->ValueModifierEffectIndex = -1;
}



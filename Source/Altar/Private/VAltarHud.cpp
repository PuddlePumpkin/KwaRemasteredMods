#include "VAltarHud.h"

AVAltarHud::AVAltarHud(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->bOblivionDebugTextIsVisible = false;
}

UVPrimaryGameLayout* AVAltarHud::GetPrimaryGameLayout() const {
    return NULL;
}



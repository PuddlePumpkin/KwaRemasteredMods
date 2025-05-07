#include "VAltarNavigableInputKeySelector.h"

UVAltarNavigableInputKeySelector::UVAltarNavigableInputKeySelector() {
    this->SelectorIndex = 0;
    this->DefaultBackgroundOverlay = NULL;
}






FText UVAltarNavigableInputKeySelector::GetHintKeyText(FKey InKey) {
    return FText::GetEmpty();
}

void UVAltarNavigableInputKeySelector::AddNewlyReboundKeyToInputSystem(const FKey& NewlyReboundKey) {
}



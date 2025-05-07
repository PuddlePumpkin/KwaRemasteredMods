#include "VAltarMenu.h"

UVAltarMenu::UVAltarMenu() {
    this->FocusDefaultWidgetXbox = true;
}

void UVAltarMenu::SetWidgetToFocusOnControllerDesactivate(const TScriptInterface<IVEnhancedInputNavigable>& Value) {
}



void UVAltarMenu::OnInputMethodChanged() {
}

TScriptInterface<IVEnhancedInputNavigable> UVAltarMenu::GetWidgetToFocusOnControllerDesactivate() const {
    return NULL;
}

void UVAltarMenu::ForceSynchronizeProperties() {
}




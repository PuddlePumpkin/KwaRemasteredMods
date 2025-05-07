#include "VAltarButton.h"

UVAltarButton::UVAltarButton() {
    this->ControllerActive = false;
}

void UVAltarButton::SetControllerActive(const bool Value) {
}

void UVAltarButton::SetButtonText(const FText& Value) {
}




float UVAltarButton::GetControllerButtonIconCropX() const {
    return 0.0f;
}

bool UVAltarButton::GetControllerActive() const {
    return false;
}

FText UVAltarButton::GetButtonText() const {
    return FText::GetEmpty();
}

void UVAltarButton::ForceSynchronizeProperties() {
}

void UVAltarButton::ChangeInputMethod(ECommonInputType InputType) {
}



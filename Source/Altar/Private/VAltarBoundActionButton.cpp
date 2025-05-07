#include "VAltarBoundActionButton.h"

UVAltarBoundActionButton::UVAltarBoundActionButton() {
    this->KeyboardMat = NULL;
    this->HoldTreshold = 0.00f;
    this->BoundInputAction = NULL;
    this->MappingContext = NULL;
}

void UVAltarBoundActionButton::SetInputAction(UInputAction* NewBinding, FText OverrideActionText, UInputMappingContext* NewMappingContext) {
}

void UVAltarBoundActionButton::SetDescriptionText(const FText& NewText) {
}



UCommonTextBlock* UVAltarBoundActionButton::GetText() const {
    return NULL;
}

FText UVAltarBoundActionButton::GetInputActionKeyText(UInputAction* InInputAction, UInputMappingContext* InInputMappingContext) {
    return FText::GetEmpty();
}

float UVAltarBoundActionButton::GetHoldTreshold() const {
    return 0.0f;
}

FText UVAltarBoundActionButton::GetHintKeyText(FKey InKey) {
    return FText::GetEmpty();
}

UInputAction* UVAltarBoundActionButton::GetBoundInputAction() const {
    return NULL;
}



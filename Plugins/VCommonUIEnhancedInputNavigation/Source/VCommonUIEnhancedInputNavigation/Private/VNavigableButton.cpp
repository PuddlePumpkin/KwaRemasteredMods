#include "VNavigableButton.h"

UVNavigableButton::UVNavigableButton() {
    this->NavigableParent = NULL;
    this->HasControllerSpecificBehavior = false;
    this->ShouldFocusOnHover = false;
    this->ShouldApplyFocusEffectOnHover = false;
    this->IsFocused = false;
    this->IsControllerActive = false;
}

void UVNavigableButton::SetShouldApplyFocusEffectOnHover(bool NewValue) {
}

void UVNavigableButton::SetIsFocused(const bool Value) {
}

void UVNavigableButton::SetIsControllerActive(const bool Value) {
}

void UVNavigableButton::SetButtonText(const FText& Value) {
}




bool UVNavigableButton::GetShouldApplyFocusEffectOnHover() const {
    return false;
}

bool UVNavigableButton::GetIsFocused() const {
    return false;
}

bool UVNavigableButton::GetIsControllerActive() const {
    return false;
}

bool UVNavigableButton::GetHasControllerSpecificBehavior() const {
    return false;
}

FText UVNavigableButton::GetButtonText() const {
    return FText::GetEmpty();
}








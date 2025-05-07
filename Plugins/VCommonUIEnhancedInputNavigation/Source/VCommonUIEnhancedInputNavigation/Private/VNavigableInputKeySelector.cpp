#include "VNavigableInputKeySelector.h"

UVNavigableInputKeySelector::UVNavigableInputKeySelector() {
    this->BindingType = ECommonInputType::MouseAndKeyboard;
}

void UVNavigableInputKeySelector::UpdateSelectedKey(const FInputChord& InSelectedKey) {
}

void UVNavigableInputKeySelector::SetIsListening(bool NewState) {
}

void UVNavigableInputKeySelector::SetCurrentKey(const FInputChord& Value) {
}

void UVNavigableInputKeySelector::OnKeySelected(const FInputChord& NewInputChord) {
}

void UVNavigableInputKeySelector::OnKeyChanged() {
}

void UVNavigableInputKeySelector::OnInputMethodChanged(ECommonInputType NewInputType) {
}

bool UVNavigableInputKeySelector::IsCorrectInputType() const {
    return false;
}

bool UVNavigableInputKeySelector::GetIsListening() const {
    return false;
}

FInputChord UVNavigableInputKeySelector::GetCurrentKey() const {
    return FInputChord{};
}




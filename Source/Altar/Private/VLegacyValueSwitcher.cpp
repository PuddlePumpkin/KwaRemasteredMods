#include "VLegacyValueSwitcher.h"

UVLegacyValueSwitcher::UVLegacyValueSwitcher() {
    this->SelectedIndex = 0;
}

void UVLegacyValueSwitcher::SwitchToPreviousOption() {
}

void UVLegacyValueSwitcher::SwitchToNextOption() {
}

void UVLegacyValueSwitcher::SetSelectedIndex(const int32 Value) {
}

void UVLegacyValueSwitcher::SetOptions(const TArray<FText>& Value) {
}


FText UVLegacyValueSwitcher::GetSelectedValue() {
    return FText::GetEmpty();
}

int32 UVLegacyValueSwitcher::GetSelectedIndex() {
    return 0;
}

TArray<FText> UVLegacyValueSwitcher::GetOptions() {
    return TArray<FText>();
}



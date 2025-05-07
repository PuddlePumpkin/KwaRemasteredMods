#include "VLegacyScrollbar.h"

UVLegacyScrollbar::UVLegacyScrollbar() {
    this->CurrentValue = 0.00f;
    this->SliderLength = 0.00f;
    this->FocusBackgroundEnabled = true;
}

void UVLegacyScrollbar::UpdateValueFromSlider(float Value) {
}

void UVLegacyScrollbar::SetValueProperties(const FLegacyScrollbarValueProperties& Value) {
}

void UVLegacyScrollbar::SetValue(float Value) {
}

void UVLegacyScrollbar::SetTextProperties(const FLegacyScrollbarTextProperties& Value) {
}

void UVLegacyScrollbar::SetSliderLength(float Value) {
}

void UVLegacyScrollbar::SetFocusBackgroundEnabled(const bool Value) {
}



FLegacyScrollbarValueProperties UVLegacyScrollbar::GetValueProperties() const {
    return FLegacyScrollbarValueProperties{};
}

float UVLegacyScrollbar::GetValueAsPercentage() const {
    return 0.0f;
}

float UVLegacyScrollbar::GetValue() const {
    return 0.0f;
}

FLegacyScrollbarTextProperties UVLegacyScrollbar::GetTextProperties() const {
    return FLegacyScrollbarTextProperties{};
}

float UVLegacyScrollbar::GetSliderLength() const {
    return 0.0f;
}

bool UVLegacyScrollbar::GetFocusBackgroundEnabled() const {
    return false;
}



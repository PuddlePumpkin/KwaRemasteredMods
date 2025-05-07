#include "VLegacyXboxFloatingHint.h"

UVLegacyXboxFloatingHint::UVLegacyXboxFloatingHint() {
    this->ButtonIcon = ELegacyXboxFloatingHintButton::None;
    this->Text = FText::FromString(TEXT("{Text}"));
}

void UVLegacyXboxFloatingHint::UpdateVisibility(const ECommonInputType InputType) {
}

void UVLegacyXboxFloatingHint::SetText(const FText& Value) {
}

void UVLegacyXboxFloatingHint::SetButtonIcon(const ELegacyXboxFloatingHintButton Value) {
}

FText UVLegacyXboxFloatingHint::GetText() const {
    return FText::GetEmpty();
}

float UVLegacyXboxFloatingHint::GetCropForIcon() const {
    return 0.0f;
}

ELegacyXboxFloatingHintButton UVLegacyXboxFloatingHint::GetButtonIcon() const {
    return ELegacyXboxFloatingHintButton::Start;
}



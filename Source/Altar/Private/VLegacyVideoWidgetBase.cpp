#include "VLegacyVideoWidgetBase.h"

UVLegacyVideoWidgetBase::UVLegacyVideoWidgetBase() {
    this->SettingName = FLegacyVideoSettingsEnum::Resolution;
}

void UVLegacyVideoWidgetBase::TriggerOnUintUpdated(FLegacyVideoSettingsEnum Setting, uint8 Value) {
}

void UVLegacyVideoWidgetBase::TriggerOnFloatUpdated(FLegacyVideoSettingsEnum Setting, float Value) {
}

void UVLegacyVideoWidgetBase::SetUintValue(const uint8 Value) {
}

void UVLegacyVideoWidgetBase::SetSettingName(const FLegacyVideoSettingsEnum Value) {
}

void UVLegacyVideoWidgetBase::SetOptions(const TArray<FText>& Value) {
}

void UVLegacyVideoWidgetBase::SetLabel(const FText& Value) {
}

void UVLegacyVideoWidgetBase::SetFloatValue(const float Value) {
}





FLegacyVideoSettingsEnum UVLegacyVideoWidgetBase::GetSettingName() {
    return FLegacyVideoSettingsEnum::Resolution;
}

TArray<FText> UVLegacyVideoWidgetBase::GetOptions() {
    return TArray<FText>();
}

FText UVLegacyVideoWidgetBase::GetLabel() const {
    return FText::GetEmpty();
}



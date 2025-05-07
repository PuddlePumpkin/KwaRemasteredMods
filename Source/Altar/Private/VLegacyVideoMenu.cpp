#include "VLegacyVideoMenu.h"

UVLegacyVideoMenu::UVLegacyVideoMenu() {
}

void UVLegacyVideoMenu::SetUintSetting(const FLegacyVideoSettingsEnum SettingName, uint8 Value) {
}

void UVLegacyVideoMenu::SetSettings(const FLegacyVideoSettings& Value) {
}

void UVLegacyVideoMenu::SetSettingOptions(const FLegacyVideoTextSettingValues& Value) {
}

void UVLegacyVideoMenu::SetFloatSetting(const FLegacyVideoSettingsEnum SettingName, float Value) {
}



bool UVLegacyVideoMenu::IsResolutionWidescreen() const {
    return false;
}

uint8 UVLegacyVideoMenu::GetUintSetting(const FLegacyVideoSettingsEnum SettingName) const {
    return 0;
}

FLegacyVideoSettings UVLegacyVideoMenu::GetSettings() const {
    return FLegacyVideoSettings{};
}

TArray<FText> UVLegacyVideoMenu::GetSettingOptionsFromType(const ELegacyVideoMenuOptionType OptionType) const {
    return TArray<FText>();
}

FLegacyVideoTextSettingValues UVLegacyVideoMenu::GetSettingOptions() const {
    return FLegacyVideoTextSettingValues{};
}

float UVLegacyVideoMenu::GetFloatSetting(const FLegacyVideoSettingsEnum SettingName) const {
    return 0.0f;
}



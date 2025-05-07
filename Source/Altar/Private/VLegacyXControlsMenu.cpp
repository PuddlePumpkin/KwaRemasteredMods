#include "VLegacyXControlsMenu.h"

UVLegacyXControlsMenu::UVLegacyXControlsMenu() {
}

void UVLegacyXControlsMenu::SetVibration(const bool Value) {
}

void UVLegacyXControlsMenu::SetVerticalSensitivity(const float Value) {
}

void UVLegacyXControlsMenu::SetSettings(const FLegacyXControllerSettings& Value) {
}

void UVLegacyXControlsMenu::SetMapping(const FLegacyControlsInputMapping& Value) {
}

void UVLegacyXControlsMenu::SetInvertY(const bool Value) {
}

void UVLegacyXControlsMenu::SetHorizontalSensitivity(const float Value) {
}

void UVLegacyXControlsMenu::SetControllerMappings(const TArray<FLegacyControlsInputMapping>& Value) {
}



FLegacyXControllerSettings UVLegacyXControlsMenu::GetSettings() const {
    return FLegacyXControllerSettings{};
}

TArray<FLegacyControlsInputMapping> UVLegacyXControlsMenu::GetControllerMappings() const {
    return TArray<FLegacyControlsInputMapping>();
}



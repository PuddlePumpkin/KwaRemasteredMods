#include "VLegacyControlsMenu.h"

UVLegacyControlsMenu::UVLegacyControlsMenu() {
    this->IsJoystickDetected = false;
}

void UVLegacyControlsMenu::SetSwapStickControlsInternal(bool Value) {
}

void UVLegacyControlsMenu::SetSettings(const FLegacyControlsSettings& Value) {
}

void UVLegacyControlsMenu::SetMouseSensitivityInternal(float Value) {
}

void UVLegacyControlsMenu::SetIsJoystickDetected(bool Value) {
}

void UVLegacyControlsMenu::SetInvertYInternal(bool Value) {
}

void UVLegacyControlsMenu::SetDeviceMappings(const TArray<FLegacyControlsInputMapping>& Value) {
}

void UVLegacyControlsMenu::SetDeviceMapping(const FLegacyControlsInputMapping& Value) {
}




FLegacyControlsSettings UVLegacyControlsMenu::GetSettings() const {
    return FLegacyControlsSettings{};
}

bool UVLegacyControlsMenu::GetIsJoystickDetected() const {
    return false;
}

TArray<FLegacyControlsInputMapping> UVLegacyControlsMenu::GetDeviceMappings() const {
    return TArray<FLegacyControlsInputMapping>();
}



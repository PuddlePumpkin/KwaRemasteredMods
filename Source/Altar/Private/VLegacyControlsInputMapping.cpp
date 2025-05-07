#include "VLegacyControlsInputMapping.h"

UVLegacyControlsInputMapping::UVLegacyControlsInputMapping() {
}

void UVLegacyControlsInputMapping::SetMapping(const FKey& Value) {
}

void UVLegacyControlsInputMapping::Set(const FLegacyControlsInputMapping& Value, FLegacyControlsDevice InDevice) {
}

FKey UVLegacyControlsInputMapping::GetMapping() const {
    return FKey{};
}

FLegacyControlsDevice UVLegacyControlsInputMapping::GetDevice() const {
    return FLegacyControlsDevice::Keyboard;
}

FText UVLegacyControlsInputMapping::GetAction() const {
    return FText::GetEmpty();
}



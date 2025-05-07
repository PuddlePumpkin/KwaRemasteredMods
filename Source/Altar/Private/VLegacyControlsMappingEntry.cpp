#include "VLegacyControlsMappingEntry.h"

UVLegacyControlsMappingEntry::UVLegacyControlsMappingEntry() {
    this->Label = FText::FromString(TEXT("{Label}"));
    this->Device = FLegacyControlsDevice::Keyboard;
    this->IsEntryEnabled = true;
}

void UVLegacyControlsMappingEntry::SetMapping(const FKey& Value) {
}

void UVLegacyControlsMappingEntry::SetLabel(const FText& Value) {
}

void UVLegacyControlsMappingEntry::SetEntryEnabled(const bool Value) {
}

void UVLegacyControlsMappingEntry::SetDevice(const FLegacyControlsDevice Value) {
}





FKey UVLegacyControlsMappingEntry::GetMapping() const {
    return FKey{};
}

FText UVLegacyControlsMappingEntry::GetLabel() const {
    return FText::GetEmpty();
}

bool UVLegacyControlsMappingEntry::GetEntryEnabled() const {
    return false;
}

FLegacyControlsDevice UVLegacyControlsMappingEntry::GetDevice() const {
    return FLegacyControlsDevice::Keyboard;
}

void UVLegacyControlsMappingEntry::CaptureInput() {
}



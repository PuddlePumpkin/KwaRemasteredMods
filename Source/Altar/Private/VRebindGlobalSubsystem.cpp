#include "VRebindGlobalSubsystem.h"

UVRebindGlobalSubsystem::UVRebindGlobalSubsystem() {
}

void UVRebindGlobalSubsystem::UnregisterRebindWidget(UVModernRebindSettingWidget* OwnerItem) {
}

void UVRebindGlobalSubsystem::UnregisterListeningWidget(UVModernRebindSettingWidget* RebindWidget, UVNavigableInputKeySelector* Target) {
}

void UVRebindGlobalSubsystem::UnregisterKeySelector(UVAltarNavigableInputKeySelector* Selector) {
}

void UVRebindGlobalSubsystem::StopAllSelectorListenning(const UVAltarNavigableInputKeySelector* Exeption) {
}

void UVRebindGlobalSubsystem::RequestWidgetsRefresh() {
}

void UVRebindGlobalSubsystem::RequestBroadcastOnSettingsChanged(UVModernRebindSettingWidget* ChangedRebind) {
}

void UVRebindGlobalSubsystem::RegisterRebindWidget(UVModernRebindSettingWidget* OwnerItem, EVModernRebindType Type, const FModernRebindData& RebindData, const FModernPairedRebindData& PairedRebindData) {
}

void UVRebindGlobalSubsystem::RegisterListeningWidget(UVModernRebindSettingWidget* RebindWidget, UVNavigableInputKeySelector* Target) {
}

void UVRebindGlobalSubsystem::RegisterKeySelector(UVAltarNavigableInputKeySelector* Selector) {
}

void UVRebindGlobalSubsystem::NotifyRebindHasBeenChanged(bool bListenState) {
}

bool UVRebindGlobalSubsystem::DoesHaveAEmptyPrimaryBindingForType(EVModernRebindType ComparedType) const {
    return false;
}

bool UVRebindGlobalSubsystem::DoesHaveAEmptyPrimaryBinding() const {
    return false;
}



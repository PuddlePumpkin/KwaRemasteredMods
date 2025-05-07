#include "VModernSettingWidget.h"

UVModernSettingWidget::UVModernSettingWidget() {
}

void UVModernSettingWidget::UpdateStepCommand(const int32 StepIndex, const FModernSettingCommand& NewCommand) {
}

void UVModernSettingWidget::UpdateLockState(bool bNewLockState) {
}

void UVModernSettingWidget::SetSettingRow(const FModernSettingTableRow& NewSettingRow) {
}

void UVModernSettingWidget::SetCurrentWidgetValue(float NewValue) {
}

void UVModernSettingWidget::SaveSetting() {
}

void UVModernSettingWidget::RevertSettingToSavedState() {
}

void UVModernSettingWidget::RevertSettingToLastChange() {
}

void UVModernSettingWidget::RevertSettingToDefault() {
}

void UVModernSettingWidget::RequestChangeParentScrollState(bool bNewState) {
}


void UVModernSettingWidget::OnUserInputDeviceConnectionChange(EInputDeviceConnectionState NewConnectionState, FPlatformUserId PlatformUserId, FInputDeviceId InputDeviceId) {
}






void UVModernSettingWidget::OnReceiveBroadcastFromSettingSubsystem(const FString& NewCommand) {
}



bool UVModernSettingWidget::IsLocked() const {
    return false;
}

FModernSettingTableRow UVModernSettingWidget::GetSettingRow() {
    return FModernSettingTableRow{};
}

bool UVModernSettingWidget::GetIsPainted() {
    return false;
}

float UVModernSettingWidget::GetCurrentWidgetValue() const {
    return 0.0f;
}

void UVModernSettingWidget::ApplyNewValue(float WidgetValue, bool bDoesTriggerAutoRevert, bool bIsInit) {
}



#include "VModernRebindSettingWidget.h"

UVModernRebindSettingWidget::UVModernRebindSettingWidget() {
    this->LastFocussedWidget = NULL;
}

void UVModernRebindSettingWidget::SetRebindData(const FModernRebindSettingTableRow& Value) {
}

void UVModernRebindSettingWidget::SetNavigationIndex(int32 Value) {
}

void UVModernRebindSettingWidget::SetCurrentWidgetIndex(int32 NewValue) {
}

void UVModernRebindSettingWidget::SaveRebind() {
}

void UVModernRebindSettingWidget::RevertBindingToDefault(bool bSpreadChange) {
}

void UVModernRebindSettingWidget::RevertBindingSavedState() {
}

void UVModernRebindSettingWidget::OnUpdateWidgetBinding(const FKey& NewPrimaryKeyboard, const FKey& NewSecondaryKeyboard, const FKey& NewPrimaryGamepad) {
}

void UVModernRebindSettingWidget::OnSelectorListenStateChanged(UVNavigableInputKeySelector* Target, bool NewState) {
}

void UVModernRebindSettingWidget::OnSelectorFocussed(UVNavigableInputKeySelector* FocussedSelector, int32 SelectorIndex) {
}

void UVModernRebindSettingWidget::OnRefreshWidgetRequested() {
}

void UVModernRebindSettingWidget::Init(const FModernRebindSettingTableRow& Value) {
}

FModernRebindSettingTableRow UVModernRebindSettingWidget::GetRebindData() const {
    return FModernRebindSettingTableRow{};
}

int32 UVModernRebindSettingWidget::GetNavigationIndex() const {
    return 0;
}

int32 UVModernRebindSettingWidget::GetCurrentWidgetIndex() const {
    return 0;
}

TArray<UVAltarNavigableInputKeySelector*> UVModernRebindSettingWidget::GetAllSelector() {
    return TArray<UVAltarNavigableInputKeySelector*>();
}

bool UVModernRebindSettingWidget::DoesHaveAEmptyPrimaryBinding() const {
    return false;
}

void UVModernRebindSettingWidget::Deinitialize() {
}




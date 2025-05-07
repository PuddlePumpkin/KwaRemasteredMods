#include "VEffectSettingsMenuViewModel.h"

UVEffectSettingsMenuViewModel::UVEffectSettingsMenuViewModel() {
    this->bIsEnchantmentMenu = false;
    this->FirstButtonType = ELegacyEffectEntryType::None;
    this->bIsDeleteVisible = false;
    this->bIsRangeVisible = false;
    this->bIsMagnitudeVisible = false;
    this->bIsAreaVisible = false;
    this->bIsDurationVisible = false;
    this->bIsLockLevelVisible = false;
    this->MagnitudeSelectedValue = -1.00f;
    this->AreaSelectedValue = -1.00f;
    this->DurationSelectedValue = -1.00f;
    this->Locklevel = EMordernLockLevel::VeryEasy;
}

void UVEffectSettingsMenuViewModel::SetRangeText(const FText& NewValue) {
}

void UVEffectSettingsMenuViewModel::SetMagnitudeSelectedValue(float NewSelectedValue) {
}

void UVEffectSettingsMenuViewModel::SetMagnitudeScrollbarProperties(const FLegacyScrollbarValueProperties& NewScrollbarProperties) {
}

void UVEffectSettingsMenuViewModel::SetLocklevel(const EMordernLockLevel& NewLockValue) {
}

void UVEffectSettingsMenuViewModel::SetIsRangeVisible(bool bNewValue) {
}

void UVEffectSettingsMenuViewModel::SetIsMagnitudeVisible(bool bNewValue) {
}

void UVEffectSettingsMenuViewModel::SetIsLockLevelVisible(bool bNewValue) {
}

void UVEffectSettingsMenuViewModel::SetIsEnchantmentMenu(bool bNewValue) {
}

void UVEffectSettingsMenuViewModel::SetIsDurationVisible(bool bNewValue) {
}

void UVEffectSettingsMenuViewModel::SetIsDeleteVisible(bool bNewValue) {
}

void UVEffectSettingsMenuViewModel::SetIsAreaVisible(bool bNewValue) {
}

void UVEffectSettingsMenuViewModel::SetFirstButtonType(ELegacyEffectEntryType NewValue) {
}

void UVEffectSettingsMenuViewModel::SetFirstButtonText(const FText& NewValue) {
}

void UVEffectSettingsMenuViewModel::SetEffectProperties(const FLegacyEffectProperties& NewProperties) {
}

void UVEffectSettingsMenuViewModel::SetEffectCost(const FLegacyEffectCost& NewCost) {
}

void UVEffectSettingsMenuViewModel::SetDurationSelectedValue(float NewSelectedValue) {
}

void UVEffectSettingsMenuViewModel::SetDurationScrollbarProperties(const FLegacyScrollbarValueProperties& NewScrollbarProperties) {
}

void UVEffectSettingsMenuViewModel::SetAreaSelectedValue(float NewSelectedValue) {
}

void UVEffectSettingsMenuViewModel::SetAreaScrollbarProperties(const FLegacyScrollbarValueProperties& NewScrollbarProperties) {
}

void UVEffectSettingsMenuViewModel::RegisterSendClickedSkill() {
}

void UVEffectSettingsMenuViewModel::RegisterSendClickedScrollbar(float NewValue, ELegacyEffectEntryType NewScrollbarType) {
}

void UVEffectSettingsMenuViewModel::RegisterSendClickedRange() {
}

void UVEffectSettingsMenuViewModel::RegisterSendClickedOk() {
}

void UVEffectSettingsMenuViewModel::RegisterSendClickedLockLevel() {
}

void UVEffectSettingsMenuViewModel::RegisterSendClickedDelete() {
}

void UVEffectSettingsMenuViewModel::RegisterSendClickedCancel() {
}

void UVEffectSettingsMenuViewModel::RegisterSendClickedAttribute() {
}

FText UVEffectSettingsMenuViewModel::GetRangeText() const {
    return FText::GetEmpty();
}

float UVEffectSettingsMenuViewModel::GetMagnitudeSelectedValue() const {
    return 0.0f;
}

FLegacyScrollbarValueProperties UVEffectSettingsMenuViewModel::GetMagnitudeScrollbarProperties() const {
    return FLegacyScrollbarValueProperties{};
}

EMordernLockLevel UVEffectSettingsMenuViewModel::GetLocklevel() const {
    return EMordernLockLevel::VeryEasy;
}

bool UVEffectSettingsMenuViewModel::GetIsRangeVisible() const {
    return false;
}

bool UVEffectSettingsMenuViewModel::GetIsMagnitudeVisible() const {
    return false;
}

bool UVEffectSettingsMenuViewModel::GetIsLockLevelVisible() const {
    return false;
}

bool UVEffectSettingsMenuViewModel::GetIsEnchantmentMenu() const {
    return false;
}

bool UVEffectSettingsMenuViewModel::GetIsDurationVisible() const {
    return false;
}

bool UVEffectSettingsMenuViewModel::GetIsDeleteVisible() const {
    return false;
}

bool UVEffectSettingsMenuViewModel::GetIsAreaVisible() const {
    return false;
}

ELegacyEffectEntryType UVEffectSettingsMenuViewModel::GetFirstButtonType() const {
    return ELegacyEffectEntryType::Magnitude;
}

FText UVEffectSettingsMenuViewModel::GetFirstButtonText() const {
    return FText::GetEmpty();
}

FLegacyEffectProperties UVEffectSettingsMenuViewModel::GetEffectProperties() const {
    return FLegacyEffectProperties{};
}

FLegacyEffectCost UVEffectSettingsMenuViewModel::GetEffectCost() const {
    return FLegacyEffectCost{};
}

float UVEffectSettingsMenuViewModel::GetDurationSelectedValue() const {
    return 0.0f;
}

FLegacyScrollbarValueProperties UVEffectSettingsMenuViewModel::GetDurationScrollbarProperties() const {
    return FLegacyScrollbarValueProperties{};
}

float UVEffectSettingsMenuViewModel::GetAreaSelectedValue() const {
    return 0.0f;
}

FLegacyScrollbarValueProperties UVEffectSettingsMenuViewModel::GetAreaScrollbarProperties() const {
    return FLegacyScrollbarValueProperties{};
}



#include "VSleepWaitMenuViewModel.h"

UVSleepWaitMenuViewModel::UVSleepWaitMenuViewModel() {
    this->TimeToWait = 0.00f;
    this->bVisible = false;
    this->bIsSleep = false;
    this->bIsWaitingInProgress = false;
    this->bShouldFadeOut = false;
}

void UVSleepWaitMenuViewModel::SetVisibility(bool bNewVisibility) {
}

void UVSleepWaitMenuViewModel::SetTimeToWait(float NewTimeToWait) {
}

void UVSleepWaitMenuViewModel::SetSleepWaitGameInfo(const FLegacySleepWaitMenuGameInfo& NewSleepWaitGameInfo) {
}

void UVSleepWaitMenuViewModel::SetShouldFadeOut(bool bInShouldFadeOut) {
}

void UVSleepWaitMenuViewModel::SetScrollbarProperties(const FLegacyScrollbarValueProperties& NewScrollbarProperties) {
}

void UVSleepWaitMenuViewModel::SetIsWaitingInProgress(bool bNewIsWaitingInProgress) {
}

void UVSleepWaitMenuViewModel::RegisterSendTimeToWait(float NewTimeToWait) {
}

void UVSleepWaitMenuViewModel::RegisterSendClickedOnWait() {
}

void UVSleepWaitMenuViewModel::RegisterSendClickedOnCancel() {
}

bool UVSleepWaitMenuViewModel::IsVisible() const {
    return false;
}

float UVSleepWaitMenuViewModel::GetTimeToWait() const {
    return 0.0f;
}

FLegacySleepWaitMenuGameInfo UVSleepWaitMenuViewModel::GetSleepWaitGameInfo() const {
    return FLegacySleepWaitMenuGameInfo{};
}

bool UVSleepWaitMenuViewModel::GetShouldFadeOut() const {
    return false;
}

FLegacyScrollbarValueProperties UVSleepWaitMenuViewModel::GetScrollbarProperties() const {
    return FLegacyScrollbarValueProperties{};
}

bool UVSleepWaitMenuViewModel::GetIsWaitingInProgress() const {
    return false;
}

bool UVSleepWaitMenuViewModel::GetIsSleep() const {
    return false;
}



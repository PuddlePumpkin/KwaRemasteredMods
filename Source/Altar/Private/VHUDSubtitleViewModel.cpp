#include "VHUDSubtitleViewModel.h"

UVHUDSubtitleViewModel::UVHUDSubtitleViewModel() {
    this->bSubtitleVisibility = false;
    this->bNotificationVisibility = true;
}

void UVHUDSubtitleViewModel::UpdateNotificationQueue() {
}

void UVHUDSubtitleViewModel::SetSubtitleVisibility(bool bNewVisibility) {
}

void UVHUDSubtitleViewModel::SetSubtitle(const FText& NewText) {
}

void UVHUDSubtitleViewModel::SetNotificationVisibility(bool bNewVisibility) {
}

void UVHUDSubtitleViewModel::SetNotification(const FLegacyNotificationProperties& NewProperties) {
}

void UVHUDSubtitleViewModel::ResumeNotificationQueue() {
}

bool UVHUDSubtitleViewModel::GetSubtitleVisibility() const {
    return false;
}

FText UVHUDSubtitleViewModel::GetSubtitle() const {
    return FText::GetEmpty();
}

bool UVHUDSubtitleViewModel::GetNotificationVisibility() const {
    return false;
}

FLegacyNotificationProperties UVHUDSubtitleViewModel::GetNotification() const {
    return FLegacyNotificationProperties{};
}

void UVHUDSubtitleViewModel::ConsumeNotification() {
}

void UVHUDSubtitleViewModel::AddNotification(const FLegacyNotificationProperties& Properties) {
}



#include "VHUDInfoViewModel.h"

UVHUDInfoViewModel::UVHUDInfoViewModel() {
    this->bIsTelekinesisActive = false;
    this->bIsEmptyContainer = false;
}

void UVHUDInfoViewModel::SetTargetedItemName(const FText& NewName) {
}

void UVHUDInfoViewModel::SetTargetedDoorDestinationName(const FText& NewName) {
}

void UVHUDInfoViewModel::SetLastIconModifiedProperties(const FLegacyIconProperties& NewProperties) {
}

void UVHUDInfoViewModel::SetIsTelekinesisActive(bool bNewValue) {
}

void UVHUDInfoViewModel::SetIsEmptyContainer(const bool bIsEmpty) {
}

void UVHUDInfoViewModel::SetIconsProperties(const TMap<ELegacyHudInfoIcon, FLegacyIconProperties>& NewProperties) {
}

void UVHUDInfoViewModel::SetActionProperties(const FLegacyActionProperties& NewProperties) {
}

bool UVHUDInfoViewModel::HasContent() const {
    return false;
}

FText UVHUDInfoViewModel::GetTargetedItemName() const {
    return FText::GetEmpty();
}

FText UVHUDInfoViewModel::GetTargetedDoorDestinationName() const {
    return FText::GetEmpty();
}

FLegacyIconProperties UVHUDInfoViewModel::GetLastIconModifiedProperties() const {
    return FLegacyIconProperties{};
}

bool UVHUDInfoViewModel::GetIsTelekinesisActive() const {
    return false;
}

bool UVHUDInfoViewModel::GetIsEmptyContainer() const {
    return false;
}

TMap<ELegacyHudInfoIcon, FLegacyIconProperties> UVHUDInfoViewModel::GetIconsProperties() const {
    return TMap<ELegacyHudInfoIcon, FLegacyIconProperties>();
}

FLegacyActionProperties UVHUDInfoViewModel::GetActionProperties() const {
    return FLegacyActionProperties{};
}



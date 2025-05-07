#include "VLegacyPageTab.h"

UVLegacyPageTab::UVLegacyPageTab() {
    this->IsSelected = false;
}

void UVLegacyPageTab::TriggerTabClicked() {
}

void UVLegacyPageTab::SetIsSelected(const bool Value) {
}

void UVLegacyPageTab::SetIconBrush(const FSlateBrush& Value) {
}



bool UVLegacyPageTab::GetIsSelected() const {
    return false;
}

FSlateBrush UVLegacyPageTab::GetIconBrush() const {
    return FSlateBrush{};
}



#include "VLegacyHudMagicIcon.h"

UVLegacyHudMagicIcon::UVLegacyHudMagicIcon() {
    this->CanCast = true;
}

void UVLegacyHudMagicIcon::SetMagicTexture(UTexture2D* Value) {
}

void UVLegacyHudMagicIcon::SetMagicBrush(const FSlateBrush& Value) {
}

void UVLegacyHudMagicIcon::SetCanCast(bool Value) {
}



FSlateBrush UVLegacyHudMagicIcon::GetMagicBrush() const {
    return FSlateBrush{};
}

bool UVLegacyHudMagicIcon::GetCanCast() const {
    return false;
}



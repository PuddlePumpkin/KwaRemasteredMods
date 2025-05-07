#include "VLegacyImageTile.h"

UVLegacyImageTile::UVLegacyImageTile() : UUserWidget(FObjectInitializer::Get()) {
    this->StretchImage = false;
}

void UVLegacyImageTile::SetStretchImage(bool Value) {
}

void UVLegacyImageTile::SetCrop(FVector2D Value) {
}

void UVLegacyImageTile::SetBrush(const FSlateBrush& Value) {
}





bool UVLegacyImageTile::GetStretchImage() const {
    return false;
}

FVector2D UVLegacyImageTile::GetCrop() const {
    return FVector2D{};
}

FSlateBrush UVLegacyImageTile::GetBrush() const {
    return FSlateBrush{};
}



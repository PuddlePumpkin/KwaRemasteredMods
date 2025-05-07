#include "VOriginalImageTile.h"

UVOriginalImageTile::UVOriginalImageTile() : UUserWidget(FObjectInitializer::Get()) {
    this->bFixPowerOfTwoOffsets = true;
    this->bDoesHandledMouseEvent = true;
}

void UVOriginalImageTile::SetOriginalImageSize(const FVector2D& Value) {
}

void UVOriginalImageTile::SetFixPowerOfTwoOffsets(bool Value) {
}

void UVOriginalImageTile::SetCorrectionData(const FImageCorrectionData& Value) {
}

void UVOriginalImageTile::SetBrush(const FSlateBrush& Value) {
}






FVector2D UVOriginalImageTile::GetFixedOffsetPowerOfTwo(const FImageCorrectionData& Data) {
    return FVector2D{};
}

FImageCorrectionData UVOriginalImageTile::GetCorrectionData() const {
    return FImageCorrectionData{};
}

int32 UVOriginalImageTile::GetCeilPowerOfTwo(int32 Value) {
    return 0;
}



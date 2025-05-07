#include "TESLandscape.h"

UTESLandscape::UTESLandscape() {
    this->ParentCell = NULL;
    this->TESOriginHeight = -2048.00f;
    this->TESMinHeight = -2048.00f;
    this->TESMaxHeight = -2048.00f;
    this->TESLandBaseTexture = NULL;
}

UTESLandTexture* UTESLandscape::GetLandBaseTexture() {
    return NULL;
}

UTexture2D* UTESLandscape::GetHeightmapTexture(bool bFlipYAxis) {
    return NULL;
}

bool UTESLandscape::CreateHeightmapData(bool bFlipYAxis, bool bKeepSouthWestVertices, float ZScaleMinHeight, float ZScaleMaxHeight, float WorldSpaceOffsetY) {
    return false;
}



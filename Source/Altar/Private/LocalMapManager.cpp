#include "LocalMapManager.h"

ULocalMapManager::ULocalMapManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LocalMapDepthCaptureComponent = NULL;
    this->LocalMapBaseColorCaptureComponent = NULL;
    this->CutMaterial = NULL;
    this->LocalMapDepthCaptureOrthoWidth = 30000.00f;
}

FVector ULocalMapManager::LocalMapToUnrealWorld(const FVector2D& LocalMapPosition, const FVector2D& MapSize) const {
    return FVector{};
}

FVector2D ULocalMapManager::GetLocalMapCoordinates(FVector WorldPosition) const {
    return FVector2D{};
}



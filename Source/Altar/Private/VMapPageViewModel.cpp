#include "VMapPageViewModel.h"

UVMapPageViewModel::UVMapPageViewModel() {
    this->Zoom = 1.00f;
    this->MinZoomValue = 0.50f;
    this->MaxZoomValue = 1.50f;
    this->bHasTriedFastTravel = false;
    this->bLockingUpdatesDuringDelayedFastTravel = false;
}

void UVMapPageViewModel::SetZoom(float NewZoom) {
}

void UVMapPageViewModel::SetWorldMapProperties(const FLegacyMapMenuWorldMapProperties& NewMapProperties) {
}

void UVMapPageViewModel::SetRenderTargetTextureFog(UTextureRenderTarget2D* RenderTarget) {
}

void UVMapPageViewModel::SetPlayerMarkerPosition(const FVector2D& NewMapPosition) {
}

void UVMapPageViewModel::SetMinZoomValue(float NewMinZoomValue) {
}

void UVMapPageViewModel::SetMaxZoomValue(float NewMaxZoomValue) {
}

void UVMapPageViewModel::SetMapPosition(const FVector2D& NewMapPosition) {
}

void UVMapPageViewModel::SetMapIcons(const TArray<FLegacyMapMenuIconProperties>& NewIcons) {
}

void UVMapPageViewModel::SetLockingUpdatesDuringDelayedFastTravel(bool InLockMapUpdates) {
}

void UVMapPageViewModel::SetLocalMapProperties(const FLegacyMapMenuLocalMapProperties& NewMapProperties) {
}

void UVMapPageViewModel::SetHasTriedFastTravel(bool bNewValue) {
}

void UVMapPageViewModel::RegisterSendWorldMapIconClickedHandlerName(const FName& Key) {
}

void UVMapPageViewModel::RegisterSendWorldMapIconClickedHandlerAddress(const FString& Address) {
}

void UVMapPageViewModel::RegisterSendShowSleepWaitMenu() {
}

void UVMapPageViewModel::RegisterSendCreatePlayerMarkerHandler(bool IsWorldMap, FVector2D MarkerPos, FVector2D OblivionWorldMarkerPos) {
}

float UVMapPageViewModel::GetZoom() const {
    return 0.0f;
}

FLegacyMapMenuWorldMapProperties UVMapPageViewModel::GetWorldMapProperties() const {
    return FLegacyMapMenuWorldMapProperties{};
}

FVector2D UVMapPageViewModel::GetPlayerMarkerPosition() const {
    return FVector2D{};
}

float UVMapPageViewModel::GetMinZoomValue() const {
    return 0.0f;
}

float UVMapPageViewModel::GetMaxZoomValue() const {
    return 0.0f;
}

FVector2D UVMapPageViewModel::GetMapPosition() const {
    return FVector2D{};
}

TArray<FLegacyMapMenuIconProperties> UVMapPageViewModel::GetMapIcons() const {
    return TArray<FLegacyMapMenuIconProperties>();
}

bool UVMapPageViewModel::GetLockingUpdatesDuringDelayedFastTravel() const {
    return false;
}

FLegacyMapMenuLocalMapProperties UVMapPageViewModel::GetLocalMapProperties() const {
    return FLegacyMapMenuLocalMapProperties{};
}

bool UVMapPageViewModel::GetHasTriedFastTravel() const {
    return false;
}

void UVMapPageViewModel::ForceSetMapPosition(const FVector2D& NewMapPosition) {
}

void UVMapPageViewModel::CenterMapOnPlayer() {
}



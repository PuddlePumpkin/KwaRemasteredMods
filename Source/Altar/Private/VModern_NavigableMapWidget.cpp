#include "VModern_NavigableMapWidget.h"

UVModern_NavigableMapWidget::UVModern_NavigableMapWidget() {
    this->MapContainer = NULL;
    this->MapIconFilter = NULL;
    this->MapCursor = NULL;
    this->MapIconClass = NULL;
    this->IsShiftPlayerMarkerModifier = true;
    this->IsCtrlPlayerMarkerModifier = false;
    this->IsAltPlayerMarkerModifier = false;
    this->NavigationToMovementRatio = 25.00f;
    this->NavigationToZoomRatio = 0.10f;
    this->PanningMaxSpeed = 25.00f;
    this->UsePanningCurve = false;
    this->MouseDragRigidity = 40.00f;
    this->CursorRadius = 10.00f;
    this->WantedZoomLevel = 2;
    this->MapZoomCurve = NULL;
    this->IconsZoomCurve = NULL;
    this->PanningCurve = NULL;
    this->HoveredMapIcon = NULL;
    this->CachedMapSlot = NULL;
    this->CachedViewSlot = NULL;
    this->CachedCursorSlot = NULL;
    this->PlayerMarker = NULL;
    this->ZoomMinClamp = 0.50f;
    this->ZoomMaxClamp = 1.50f;
    this->LocalMapMaterialDynamic = NULL;
}

FVector2D UVModern_NavigableMapWidget::ViewSpaceToMapSpace(const FVector2D& ViewSpace) const {
    return FVector2D{};
}

FVector2D UVModern_NavigableMapWidget::ViewSpaceToAbsoluteSpace(const FVector2D& ViewSpace) const {
    return FVector2D{};
}

void UVModern_NavigableMapWidget::UpdatePlayerMarkerPosition(const FVector2D& NewPosition) {
}

void UVModern_NavigableMapWidget::UpdateOrCreateMapIcons(const TArray<FLegacyMapMenuIconProperties>& IconsData, const bool bIsLocalMap) {
}

void UVModern_NavigableMapWidget::UpdateOrCreateMapIcon(const FLegacyMapMenuIconProperties& IconData, const bool bIsLocalMap) {
}

void UVModern_NavigableMapWidget::UpdateMapIconPosition(UCommonUserWidget* MapIcon, const FVector2D& NewPosition) {
}

void UVModern_NavigableMapWidget::UpdateIconsSizeSmoothly(const bool bSmooth) {
}

void UVModern_NavigableMapWidget::UpdateIconsSizeOnMapSwitch(const bool bIsWorldMap) {
}

void UVModern_NavigableMapWidget::UpdateIconsSizeOnMapSetup(const bool bIsWorldMap) {
}

void UVModern_NavigableMapWidget::UnloadSecondPassRenderTarget() {
}

void UVModern_NavigableMapWidget::UnloadSceneDepthRenderTarget() {
}

void UVModern_NavigableMapWidget::UnloadLocalMapSobelMaterial() {
}

void UVModern_NavigableMapWidget::UnloadLocalMapMaterial() {
}

void UVModern_NavigableMapWidget::UnloadFogRenderTarget() {
}

void UVModern_NavigableMapWidget::UnloadFogMaterial() {
}

void UVModern_NavigableMapWidget::UnloadBaseColorRenderTarget() {
}

void UVModern_NavigableMapWidget::TranslateMap(const FVector2D& DirectionVector) {
}

void UVModern_NavigableMapWidget::TranslateCursor(const FVector2D& DirectionVector) {
}

void UVModern_NavigableMapWidget::StopMouseDrag() {
}

void UVModern_NavigableMapWidget::StartMouseDrag(const FVector2D& MousePosition) {
}

void UVModern_NavigableMapWidget::SetMapZoomSmooth(float InNewZoomValue) {
}

void UVModern_NavigableMapWidget::SetMapZoom(float ZoomValue, bool bIsZoomingOnMouse) {
}

void UVModern_NavigableMapWidget::SetMapPosition(const FVector2D& NewPositionVector) {
}

void UVModern_NavigableMapWidget::SetMapPivotToViewCenter() {
}

void UVModern_NavigableMapWidget::SetMapPivot(const FVector2D& PivotValue) {
}

void UVModern_NavigableMapWidget::SetCursorPosition(const FVector2D& NewPosition) {
}

void UVModern_NavigableMapWidget::RequestMapPositionUpdateWithGeometryValidation(const FVector2D& NewPositionVector) {
}

FVector2D UVModern_NavigableMapWidget::RemapCircleToSquare(const FVector2D& DirectionalVector) {
    return FVector2D{};
}

FVector2D UVModern_NavigableMapWidget::OTAMapCoord(const FVector2D& OMapCoord) const {
    return FVector2D{};
}



void UVModern_NavigableMapWidget::OnSwitchInputMode(ECommonInputType InputType) {
}











void UVModern_NavigableMapWidget::MouseDrag(const FVector2D& MousePosition) {
}

void UVModern_NavigableMapWidget::MapZoomSmoothInternal(float InNewZoomValue) {
}

FVector3f UVModern_NavigableMapWidget::LocalMapToOblivionWorld(const FVector2D& IconPosition) const {
    return FVector3f{};
}

UTextureRenderTarget2D* UVModern_NavigableMapWidget::LoadSecondPassRenderTarget() {
    return NULL;
}

UTextureRenderTarget2D* UVModern_NavigableMapWidget::LoadSceneDepthRenderTarget() {
    return NULL;
}

UMaterial* UVModern_NavigableMapWidget::LoadLocalMapSobelMaterial() {
    return NULL;
}

UMaterialInterface* UVModern_NavigableMapWidget::LoadLocalMapMaterial() {
    return NULL;
}

UTextureRenderTarget2D* UVModern_NavigableMapWidget::LoadFogRenderTarget() {
    return NULL;
}

UMaterial* UVModern_NavigableMapWidget::LoadFogMaterial() {
    return NULL;
}

UTextureRenderTarget2D* UVModern_NavigableMapWidget::LoadBaseColorRenderTarget() {
    return NULL;
}

bool UVModern_NavigableMapWidget::IsIconInLeftHalfOfView(const FVector2D& IconPosition) const {
    return false;
}

bool UVModern_NavigableMapWidget::IsAskingForPlayerMarker() const {
    return false;
}

void UVModern_NavigableMapWidget::InitializeMapWidget_WorldMap(const FLegacyMapMenuWorldMapProperties& WorldMapData) {
}

void UVModern_NavigableMapWidget::InitializeMapWidget_LocalMap(const FLegacyMapMenuLocalMapProperties& LocalMapData) {
}

void UVModern_NavigableMapWidget::HandleMouseMove(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) {
}

FVector2D UVModern_NavigableMapWidget::GetZoomedMapSize() const {
    return FVector2D{};
}

FVector2D UVModern_NavigableMapWidget::GetViewSize() const {
    return FVector2D{};
}

float UVModern_NavigableMapWidget::GetSmallestPossibleZoomValue() const {
    return 0.0f;
}

UTextureRenderTarget2D* UVModern_NavigableMapWidget::GetSecondPassRenderTarget() const {
    return NULL;
}

UTextureRenderTarget2D* UVModern_NavigableMapWidget::GetSceneDepthRenderTarget() const {
    return NULL;
}

FVector2D UVModern_NavigableMapWidget::GetResolution() const {
    return FVector2D{};
}

FVector2D UVModern_NavigableMapWidget::GetPlayerPosition() const {
    return FVector2D{};
}

FVector2D UVModern_NavigableMapWidget::GetOriginalMapSize() const {
    return FVector2D{};
}

UMaterial* UVModern_NavigableMapWidget::GetLocalMapSobelMaterial() const {
    return NULL;
}

UMaterialInterface* UVModern_NavigableMapWidget::GetLocalMapMaterial() const {
    return NULL;
}

bool UVModern_NavigableMapWidget::GetIsPaintSpaceGeometryValid() const {
    return false;
}

UTextureRenderTarget2D* UVModern_NavigableMapWidget::GetFogRenderTarget() const {
    return NULL;
}

UMaterial* UVModern_NavigableMapWidget::GetFogMaterial() const {
    return NULL;
}

float UVModern_NavigableMapWidget::GetDPIScaling() const {
    return 0.0f;
}

float UVModern_NavigableMapWidget::GetCurrentZoomValue() const {
    return 0.0f;
}

UTextureRenderTarget2D* UVModern_NavigableMapWidget::GetBaseColorRenderTarget() const {
    return NULL;
}

void UVModern_NavigableMapWidget::ClearAllMapIcons() {
}

float UVModern_NavigableMapWidget::ClampZoomValue(float NewZoomValue) const {
    return 0.0f;
}

void UVModern_NavigableMapWidget::AddMapZoom(float ZoomDelta) {
}

FVector2D UVModern_NavigableMapWidget::AbsoluteSpaceToMapSpace(const FVector2D& AbsoluteSpace) const {
    return FVector2D{};
}



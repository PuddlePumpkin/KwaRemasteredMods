#pragma once
#include "CoreMinimal.h"
#include "CommonInputTypeEnum.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Widgets/Layout/Anchors.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "LegacyMapMenuIconProperties.h"
#include "LegacyMapMenuLocalMapProperties.h"
#include "LegacyMapMenuWorldMapProperties.h"
#include "Templates/SubclassOf.h"
#include "VAltarWidget.h"
#include "VModern_NavigableMapWidget.generated.h"

class UCanvasPanel;
class UCanvasPanelSlot;
class UCommonUserWidget;
class UCurveFloat;
class UMaterial;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UObject;
class UTextureRenderTarget2D;
class UVModern_MapIconCommonUserWidget;
class UVModern_MapIconFilter;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVModern_NavigableMapWidget : public UVAltarWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* MapContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVModern_MapIconFilter* MapIconFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* MapCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVModern_MapIconCommonUserWidget> MapIconClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsShiftPlayerMarkerModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCtrlPlayerMarkerModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAltPlayerMarkerModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavigationToMovementRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavigationToZoomRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PanningMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsePanningCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseDragRigidity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnchors CursorMapMovementThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CursorRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MouseCursorOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WantedZoomLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D AdditionalDragOffset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MapZoomCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* IconsZoomCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PanningCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonUserWidget* HoveredMapIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* CachedMapSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* CachedViewSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* CachedCursorSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonUserWidget* PlayerMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomMinClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomMaxClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTextureRenderTarget2D> FogOfWarRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTextureRenderTarget2D> SceneDepthRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTextureRenderTarget2D> SecondPassRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTextureRenderTarget2D> BaseColorRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterial> FogOfWarMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterial> LocalMapMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* LocalMapMaterialDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterial> LocalMapSobelMaterial;
    
public:
    UVModern_NavigableMapWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D ViewSpaceToMapSpace(const FVector2D& ViewSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D ViewSpaceToAbsoluteSpace(const FVector2D& ViewSpace) const;
    
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerMarkerPosition(const FVector2D& NewPosition);
    
    UFUNCTION(BlueprintCallable)
    void UpdateOrCreateMapIcons(const TArray<FLegacyMapMenuIconProperties>& IconsData, const bool bIsLocalMap);
    
    UFUNCTION(BlueprintCallable)
    void UpdateOrCreateMapIcon(const FLegacyMapMenuIconProperties& IconData, const bool bIsLocalMap);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMapIconPosition(UCommonUserWidget* MapIcon, const FVector2D& NewPosition);
    
    UFUNCTION(BlueprintCallable)
    void UpdateIconsSizeSmoothly(const bool bSmooth);
    
    UFUNCTION(BlueprintCallable)
    void UpdateIconsSizeOnMapSwitch(const bool bIsWorldMap);
    
    UFUNCTION(BlueprintCallable)
    void UpdateIconsSizeOnMapSetup(const bool bIsWorldMap);
    
    UFUNCTION(BlueprintCallable)
    void UnloadSecondPassRenderTarget();
    
    UFUNCTION(BlueprintCallable)
    void UnloadSceneDepthRenderTarget();
    
    UFUNCTION(BlueprintCallable)
    void UnloadLocalMapSobelMaterial();
    
    UFUNCTION(BlueprintCallable)
    void UnloadLocalMapMaterial();
    
    UFUNCTION(BlueprintCallable)
    void UnloadFogRenderTarget();
    
    UFUNCTION(BlueprintCallable)
    void UnloadFogMaterial();
    
    UFUNCTION(BlueprintCallable)
    void UnloadBaseColorRenderTarget();
    
    UFUNCTION(BlueprintCallable)
    void TranslateMap(const FVector2D& DirectionVector);
    
    UFUNCTION(BlueprintCallable)
    void TranslateCursor(const FVector2D& DirectionVector);
    
    UFUNCTION(BlueprintCallable)
    void StopMouseDrag();
    
    UFUNCTION(BlueprintCallable)
    void StartMouseDrag(const FVector2D& MousePosition);
    
    UFUNCTION(BlueprintCallable)
    void SetMapZoomSmooth(float InNewZoomValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMapZoom(float ZoomValue, bool bIsZoomingOnMouse);
    
    UFUNCTION(BlueprintCallable)
    void SetMapPosition(const FVector2D& NewPositionVector);
    
    UFUNCTION(BlueprintCallable)
    void SetMapPivotToViewCenter();
    
    UFUNCTION(BlueprintCallable)
    void SetMapPivot(const FVector2D& PivotValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCursorPosition(const FVector2D& NewPosition);
    
    UFUNCTION(BlueprintCallable)
    void RequestMapPositionUpdateWithGeometryValidation(const FVector2D& NewPositionVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D RemapCircleToSquare(const FVector2D& DirectionalVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D OTAMapCoord(const FVector2D& OMapCoord) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnZoomChanged(float NewZoom);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSyncMouseWithCursorRequested();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSwitchInputMode(ECommonInputType InputType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerMarkerRequested();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMouseDrag(const FVector2D& DragDelta);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMapSetup(const UObject* MapBrushObject, const FVector2D& OriginalMapSize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMapPositionChanged(const FVector2D& NewPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMapPivotChanged(const FVector2D& NewPivot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMapInputMethodChanged(ECommonInputType NewInputType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIconCreated(UCommonUserWidget* NewMapIcon, const FLegacyMapMenuIconProperties& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCursorUnhoverIcon(UCommonUserWidget* UnhoveredIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCursorPositionChanged(const FVector2D& NewPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCursorHoverIcon(UCommonUserWidget* HoveredIcon);
    
protected:
    UFUNCTION(BlueprintCallable)
    void MouseDrag(const FVector2D& MousePosition);
    
    UFUNCTION(BlueprintCallable)
    void MapZoomSmoothInternal(float InNewZoomValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector3f LocalMapToOblivionWorld(const FVector2D& IconPosition) const;
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* LoadSecondPassRenderTarget();
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* LoadSceneDepthRenderTarget();
    
    UFUNCTION(BlueprintCallable)
    UMaterial* LoadLocalMapSobelMaterial();
    
    UFUNCTION(BlueprintCallable)
    UMaterialInterface* LoadLocalMapMaterial();
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* LoadFogRenderTarget();
    
    UFUNCTION(BlueprintCallable)
    UMaterial* LoadFogMaterial();
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* LoadBaseColorRenderTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIconInLeftHalfOfView(const FVector2D& IconPosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAskingForPlayerMarker() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeMapWidget_WorldMap(const FLegacyMapMenuWorldMapProperties& WorldMapData);
    
    UFUNCTION(BlueprintCallable)
    void InitializeMapWidget_LocalMap(const FLegacyMapMenuLocalMapProperties& LocalMapData);
    
    UFUNCTION(BlueprintCallable)
    void HandleMouseMove(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetZoomedMapSize() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetViewSize() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSmallestPossibleZoomValue() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTextureRenderTarget2D* GetSecondPassRenderTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTextureRenderTarget2D* GetSceneDepthRenderTarget() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetResolution() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetPlayerPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetOriginalMapSize() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterial* GetLocalMapSobelMaterial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetLocalMapMaterial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPaintSpaceGeometryValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTextureRenderTarget2D* GetFogRenderTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterial* GetFogMaterial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDPIScaling() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentZoomValue() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTextureRenderTarget2D* GetBaseColorRenderTarget() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearAllMapIcons();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ClampZoomValue(float NewZoomValue) const;
    
    UFUNCTION(BlueprintCallable)
    void AddMapZoom(float ZoomDelta);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D AbsoluteSpaceToMapSpace(const FVector2D& AbsoluteSpace) const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LegacyMapMenuIconProperties.h"
#include "LegacyMapMenuLocalMapProperties.h"
#include "LegacyMapMenuWorldMapProperties.h"
#include "VViewModelBase.h"
#include "VMapPageViewModel.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class ALTAR_API UVMapPageViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> FogDatas;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyMapMenuWorldMapProperties WorldMapProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyMapMenuLocalMapProperties LocalMapProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLegacyMapMenuIconProperties> MapIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MapPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D PlayerMarkerPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Zoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinZoomValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxZoomValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasTriedFastTravel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockingUpdatesDuringDelayedFastTravel;
    
public:
    UVMapPageViewModel();

    UFUNCTION(BlueprintCallable)
    void SetZoom(float NewZoom);
    
    UFUNCTION(BlueprintCallable)
    void SetWorldMapProperties(const FLegacyMapMenuWorldMapProperties& NewMapProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderTargetTextureFog(UTextureRenderTarget2D* RenderTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerMarkerPosition(const FVector2D& NewMapPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetMinZoomValue(float NewMinZoomValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxZoomValue(float NewMaxZoomValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMapPosition(const FVector2D& NewMapPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetMapIcons(const TArray<FLegacyMapMenuIconProperties>& NewIcons);
    
    UFUNCTION(BlueprintCallable)
    void SetLockingUpdatesDuringDelayedFastTravel(bool InLockMapUpdates);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalMapProperties(const FLegacyMapMenuLocalMapProperties& NewMapProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetHasTriedFastTravel(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendWorldMapIconClickedHandlerName(const FName& Key);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendWorldMapIconClickedHandlerAddress(const FString& Address);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendShowSleepWaitMenu();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendCreatePlayerMarkerHandler(bool IsWorldMap, FVector2D MarkerPos, FVector2D OblivionWorldMarkerPos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetZoom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyMapMenuWorldMapProperties GetWorldMapProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetPlayerMarkerPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinZoomValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxZoomValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMapPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLegacyMapMenuIconProperties> GetMapIcons() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLockingUpdatesDuringDelayedFastTravel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyMapMenuLocalMapProperties GetLocalMapProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasTriedFastTravel() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceSetMapPosition(const FVector2D& NewMapPosition);
    
    UFUNCTION(BlueprintCallable)
    void CenterMapOnPlayer();
    
};


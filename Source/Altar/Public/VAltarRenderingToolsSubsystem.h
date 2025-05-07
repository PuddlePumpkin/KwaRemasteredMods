#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Engine/HitResult.h"
#include "Camera/CameraTypes.h"
#include "VAltarRenderingToolsSubsystem.generated.h"

class UObject;
class USceneComponent;

UCLASS(Blueprintable)
class UVAltarRenderingToolsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UVAltarRenderingToolsSubsystem();

    UFUNCTION(BlueprintCallable)
    void SSScateringSetWorldUnitGlobalScale(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SSScateringSetForegroundWorldUnitGlobalScale(float Scale);
    
    UFUNCTION(BlueprintPure)
    FVector ScaleInDepth(const FVector& WorldPosition, double Scale, const FMatrix& CameraViewProjection, const FMatrix& CameraInverseViewProjection) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector HomogeneousToCartesianCoordinates(const FVector4& HomogeneousCoordinates) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false, meta=(WorldContext="WorldContextObject"))
    double FirstPersonClippingFixGetWeightFromCamera(const UObject* WorldContextObject, const FVector& WorldPosition, bool bAutoEstimatePlayerOwnership, const FMinimalViewInfo& InViewInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false, meta=(WorldContext="WorldContextObject"))
    double FirstPersonClippingFixGetWeight(const UObject* WorldContextObject, const FVector& WorldPosition, bool bAutoEstimatePlayerOwnership) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false, meta=(WorldContext="WorldContextObject"))
    FVector FirstPersonClippingFixGetOffsetFromCamera(const UObject* WorldContextObject, const FVector& WorldPosition, bool bAutoEstimatePlayerOwnership, const FMinimalViewInfo& InViewInfo, double& Weight, FVector& NewWorldPosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false, meta=(WorldContext="WorldContextObject"))
    FVector FirstPersonClippingFixGetOffset(const UObject* WorldContextObject, const FVector& WorldPosition, bool bAutoEstimatePlayerOwnership, double& Weight, FVector& NewWorldPosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false, meta=(WorldContext="WorldContextObject"))
    double FirstPersonClippingFixApplyOnActorComponent(const UObject* WorldContextObject, USceneComponent* TargetComponent, const FVector& RelativeLocation, bool bAutoEstimatePlayerOwnership, bool bSweep, bool bTeleport, FHitResult& SweepHitResult) const;
    
};


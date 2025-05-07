#include "VAltarRenderingToolsSubsystem.h"

UVAltarRenderingToolsSubsystem::UVAltarRenderingToolsSubsystem() {
}

void UVAltarRenderingToolsSubsystem::SSScateringSetWorldUnitGlobalScale(float Scale) {
}

void UVAltarRenderingToolsSubsystem::SSScateringSetForegroundWorldUnitGlobalScale(float Scale) {
}

FVector UVAltarRenderingToolsSubsystem::ScaleInDepth(const FVector& WorldPosition, double Scale, const FMatrix& CameraViewProjection, const FMatrix& CameraInverseViewProjection) const {
    return FVector{};
}

FVector UVAltarRenderingToolsSubsystem::HomogeneousToCartesianCoordinates(const FVector4& HomogeneousCoordinates) const {
    return FVector{};
}

double UVAltarRenderingToolsSubsystem::FirstPersonClippingFixGetWeightFromCamera(const UObject* WorldContextObject, const FVector& WorldPosition, bool bAutoEstimatePlayerOwnership, const FMinimalViewInfo& InViewInfo) const {
    return 0.0;
}

double UVAltarRenderingToolsSubsystem::FirstPersonClippingFixGetWeight(const UObject* WorldContextObject, const FVector& WorldPosition, bool bAutoEstimatePlayerOwnership) const {
    return 0.0;
}

FVector UVAltarRenderingToolsSubsystem::FirstPersonClippingFixGetOffsetFromCamera(const UObject* WorldContextObject, const FVector& WorldPosition, bool bAutoEstimatePlayerOwnership, const FMinimalViewInfo& InViewInfo, double& Weight, FVector& NewWorldPosition) const {
    return FVector{};
}

FVector UVAltarRenderingToolsSubsystem::FirstPersonClippingFixGetOffset(const UObject* WorldContextObject, const FVector& WorldPosition, bool bAutoEstimatePlayerOwnership, double& Weight, FVector& NewWorldPosition) const {
    return FVector{};
}

double UVAltarRenderingToolsSubsystem::FirstPersonClippingFixApplyOnActorComponent(const UObject* WorldContextObject, USceneComponent* TargetComponent, const FVector& RelativeLocation, bool bAutoEstimatePlayerOwnership, bool bSweep, bool bTeleport, FHitResult& SweepHitResult) const {
    return 0.0;
}



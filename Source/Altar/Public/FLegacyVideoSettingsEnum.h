#pragma once
#include "CoreMinimal.h"
#include "FLegacyVideoSettingsEnum.generated.h"

UENUM(BlueprintType)
enum class FLegacyVideoSettingsEnum : uint8 {
    Resolution,
    TextureSize,
    ShadowFiltering,
    WaterDetail,
    BloodDecal,
    AntiAliasing,
    LandLODActive,
    BuildingLODActive,
    TreeLODActive,
    SelfShadows,
    GrassShadows,
    TreeShadows,
    HDRLighting,
    BloomLighting,
    WaterReflections,
    WaterDisplacement,
    WindowReflections,
    HairDetail,
    Gamma,
    TreeLOD,
    ActorLOD,
    ItemLOD,
    ObjectLOD,
    GrassLOD,
    ViewLOD,
    InternalShadows,
    ExternalShadows,
    SpecularLighting,
};


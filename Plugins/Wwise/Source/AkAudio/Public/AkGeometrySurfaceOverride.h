#pragma once
#include "CoreMinimal.h"
#include "AkGeometrySurfaceOverride.generated.h"

class UAkAcousticTexture;

USTRUCT(BlueprintType)
struct FAkGeometrySurfaceOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAcousticTexture* AcousticTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableOcclusionOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OcclusionValue;
    
private:
    UPROPERTY()
    float SurfaceArea;
    
public:
    AKAUDIO_API FAkGeometrySurfaceOverride();
};


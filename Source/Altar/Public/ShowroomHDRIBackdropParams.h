#pragma once
#include "CoreMinimal.h"
#include "ShowroomHDRIBackdropParams.generated.h"

class UTextureCube;

USTRUCT(BlueprintType)
struct ALTAR_API FShowroomHDRIBackdropParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureCube* HDRITexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkylightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HDRIRotation;
    
    FShowroomHDRIBackdropParams();
};


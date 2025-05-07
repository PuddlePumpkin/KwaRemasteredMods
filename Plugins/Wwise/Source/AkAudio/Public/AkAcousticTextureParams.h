#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AkAcousticTextureParams.generated.h"

USTRUCT(BlueprintType)
struct FAkAcousticTextureParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector4 AbsorptionValues;
    
    AKAUDIO_API FAkAcousticTextureParams();
};


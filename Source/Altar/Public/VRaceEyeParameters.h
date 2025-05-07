#pragma once
#include "CoreMinimal.h"
#include "VRaceEyeParameterPair.h"
#include "VRaceEyeParameters.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FVRaceEyeParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> OverrideMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVRaceEyeParameterPair> EyeParameters;
    
    ALTAR_API FVRaceEyeParameters();
};


#pragma once
#include "CoreMinimal.h"
#include "VRaceEyeParameterPair.generated.h"

USTRUCT(BlueprintType)
struct FVRaceEyeParameterPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    ALTAR_API FVRaceEyeParameterPair();
};


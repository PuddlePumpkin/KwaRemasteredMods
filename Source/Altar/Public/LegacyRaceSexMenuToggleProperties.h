#pragma once
#include "CoreMinimal.h"
#include "ELegacyRaceSexMenuToggleType.h"
#include "VRaceSexMenuCustomisationOptions.h"
#include "LegacyRaceSexMenuToggleProperties.generated.h"

USTRUCT(BlueprintType)
struct FLegacyRaceSexMenuToggleProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacyRaceSexMenuToggleType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OptionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVRaceSexMenuCustomisationOptions> Options;
    
    ALTAR_API FLegacyRaceSexMenuToggleProperties();
};


#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "LegacyControlsInputMapping.generated.h"

USTRUCT(BlueprintType)
struct FLegacyControlsInputMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Mapping;
    
    ALTAR_API FLegacyControlsInputMapping();
};


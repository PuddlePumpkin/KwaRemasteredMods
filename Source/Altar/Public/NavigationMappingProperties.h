#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "NavigationMappingProperties.generated.h"

USTRUCT(BlueprintType)
struct FNavigationMappingProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Mapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ConsumeInputEvent;
    
    ALTAR_API FNavigationMappingProperties();
};


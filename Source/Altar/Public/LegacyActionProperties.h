#pragma once
#include "CoreMinimal.h"
#include "ELegacyXboxFloatingHintButton.h"
#include "LegacyActionProperties.generated.h"

USTRUCT(BlueprintType)
struct FLegacyActionProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacyXboxFloatingHintButton ButtonIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    ALTAR_API FLegacyActionProperties();
};


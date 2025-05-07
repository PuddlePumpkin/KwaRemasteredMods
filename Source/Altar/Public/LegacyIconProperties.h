#pragma once
#include "CoreMinimal.h"
#include "ELegacyHudInfoIcon.h"
#include "LegacyIconProperties.generated.h"

USTRUCT(BlueprintType)
struct FLegacyIconProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacyHudInfoIcon Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVisible;
    
    ALTAR_API FLegacyIconProperties();
};


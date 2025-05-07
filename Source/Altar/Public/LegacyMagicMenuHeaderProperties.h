#pragma once
#include "CoreMinimal.h"
#include "ELegacyMagicMenuItemType.h"
#include "LegacyMagicMenuHeaderProperties.generated.h"

USTRUCT(BlueprintType)
struct FLegacyMagicMenuHeaderProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacyMagicMenuItemType Type;
    
    ALTAR_API FLegacyMagicMenuHeaderProperties();
};


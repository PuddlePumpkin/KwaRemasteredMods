#pragma once
#include "CoreMinimal.h"
#include "LegacyTextEditMenuProperties.generated.h"

USTRUCT(BlueprintType)
struct FLegacyTextEditMenuProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Prompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultText;
    
    ALTAR_API FLegacyTextEditMenuProperties();
};


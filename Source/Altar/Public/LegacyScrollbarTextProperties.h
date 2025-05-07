#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LegacyScrollbarTextProperties.generated.h"

USTRUCT(BlueprintType)
struct FLegacyScrollbarTextProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TextEnabled;
    
    ALTAR_API FLegacyScrollbarTextProperties();
};


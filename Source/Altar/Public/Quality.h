#pragma once
#include "CoreMinimal.h"
#include "ESPDataProperty.h"
#include "Quality.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FQuality : public FESPDataProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Quality;
    
    FQuality();
};


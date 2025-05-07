#pragma once
#include "CoreMinimal.h"
#include "ESPDataProperty.h"
#include "Health.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FHealth : public FESPDataProperty {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Health;
    
    FHealth();
};


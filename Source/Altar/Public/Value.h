#pragma once
#include "CoreMinimal.h"
#include "ESPDataProperty.h"
#include "Value.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FValue : public FESPDataProperty {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Value;
    
    FValue();
};


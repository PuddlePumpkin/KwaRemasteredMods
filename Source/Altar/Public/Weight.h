#pragma once
#include "CoreMinimal.h"
#include "ESPDataProperty.h"
#include "Weight.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FWeight : public FESPDataProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FWeight();
};


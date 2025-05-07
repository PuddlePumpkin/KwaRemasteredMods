#pragma once
#include "CoreMinimal.h"
#include "ESPDataProperty.h"
#include "Uses.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FUses : public FESPDataProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Uses;
    
    FUses();
};


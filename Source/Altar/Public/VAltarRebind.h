#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "VAltarRebind.generated.h"

USTRUCT(BlueprintType)
struct FVAltarRebind {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> Slots;
    
    ALTAR_API FVAltarRebind();
};


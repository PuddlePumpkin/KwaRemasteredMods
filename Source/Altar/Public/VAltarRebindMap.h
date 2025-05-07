#pragma once
#include "CoreMinimal.h"
#include "VAltarRebind.h"
#include "VAltarRebindMap.generated.h"

USTRUCT(BlueprintType)
struct FVAltarRebindMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FVAltarRebind> AltarRebindMap;
    
    ALTAR_API FVAltarRebindMap();
};


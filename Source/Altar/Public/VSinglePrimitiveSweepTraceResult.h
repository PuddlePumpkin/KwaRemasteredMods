#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "VSinglePrimitiveSweepTraceResult.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FVSinglePrimitiveSweepTraceResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> PrimitiveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult HitResult;
    
    ALTAR_API FVSinglePrimitiveSweepTraceResult();
};


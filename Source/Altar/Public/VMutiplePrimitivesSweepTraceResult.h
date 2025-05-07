#pragma once
#include "CoreMinimal.h"
#include "VSinglePrimitiveSweepTraceResult.h"
#include "VMutiplePrimitivesSweepTraceResult.generated.h"

USTRUCT(BlueprintType)
struct FVMutiplePrimitivesSweepTraceResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVSinglePrimitiveSweepTraceResult> PrimitiveSweepResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClosestHitIndex;
    
    ALTAR_API FVMutiplePrimitivesSweepTraceResult();
};


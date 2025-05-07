#pragma once
#include "CoreMinimal.h"
#include "ProceduralInstance.h"
#include "SpawnedInstanceArray.generated.h"

USTRUCT(BlueprintType)
struct FSpawnedInstanceArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProceduralInstance> Instances;
    
    PROCEDURALINTERIORDRESSINGTOOLRUNTIME_API FSpawnedInstanceArray();
};


#pragma once
#include "CoreMinimal.h"
#include "NavMeshLandmark.h"
#include "NavMeshLandmarkMetaCluster.generated.h"

USTRUCT(BlueprintType)
struct FNavMeshLandmarkMetaCluster {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNavMeshLandmark> NavMeshLandmarks;
    
    ALTAR_API FNavMeshLandmarkMetaCluster();
};


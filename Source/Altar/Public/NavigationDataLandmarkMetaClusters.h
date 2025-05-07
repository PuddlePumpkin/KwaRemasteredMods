#pragma once
#include "CoreMinimal.h"
#include "NavMeshLandmark.h"
#include "NavMeshLandmarkMetaCluster.h"
#include "NavigationDataLandmarkMetaClusters.generated.h"

class ARecastNavMesh;

USTRUCT(BlueprintType)
struct FNavigationDataLandmarkMetaClusters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARecastNavMesh* RecastNavMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNavMeshLandmarkMetaCluster> LandmarkMetaClusters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNavMeshLandmark> PendingNavMeshLandmarks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValid;
    
    ALTAR_API FNavigationDataLandmarkMetaClusters();
};


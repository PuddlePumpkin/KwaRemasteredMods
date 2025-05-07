#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "NavMeshLandmarkType.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FNavMeshLandmarkType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorClass;
    
    ALTAR_API FNavMeshLandmarkType();
};


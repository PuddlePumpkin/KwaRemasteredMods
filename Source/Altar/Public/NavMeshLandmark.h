#pragma once
#include "CoreMinimal.h"
#include "NavMeshLandmark.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FNavMeshLandmark {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    ALTAR_API FNavMeshLandmark();
};


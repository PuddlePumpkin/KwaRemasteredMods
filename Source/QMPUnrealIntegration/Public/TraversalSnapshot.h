#pragma once
#include "CoreMinimal.h"
#include "TraversalSnapshot.generated.h"

USTRUCT(BlueprintType)
struct FTraversalSnapshot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InteractCount;
    
    QMPUNREALINTEGRATION_API FTraversalSnapshot();
};


#pragma once
#include "CoreMinimal.h"
#include "VFreezeLayer.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FVFreezeLayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SparedActorList;
    
    ALTAR_API FVFreezeLayer();
};


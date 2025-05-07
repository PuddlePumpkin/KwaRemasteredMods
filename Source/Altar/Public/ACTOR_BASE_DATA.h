#pragma once
#include "CoreMinimal.h"
#include "ACTOR_BASE_DATA.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FACTOR_BASE_DATA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActorBaseFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    FACTOR_BASE_DATA();
};


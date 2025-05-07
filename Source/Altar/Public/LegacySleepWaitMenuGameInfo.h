#pragma once
#include "CoreMinimal.h"
#include "LegacySleepWaitMenuGameInfo.generated.h"

USTRUCT(BlueprintType)
struct FLegacySleepWaitMenuGameInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GameInfo1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GameInfo2;
    
    ALTAR_API FLegacySleepWaitMenuGameInfo();
};


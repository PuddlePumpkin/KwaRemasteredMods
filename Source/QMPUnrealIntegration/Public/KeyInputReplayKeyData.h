#pragma once
#include "CoreMinimal.h"
#include "EKeyInputReplayInputType.h"
#include "KeyInputReplayInputEvents.h"
#include "KeyInputReplayKeyData.generated.h"

USTRUCT(BlueprintType)
struct QMPUNREALINTEGRATION_API FKeyInputReplayKeyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKeyInputReplayInputType InputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKeyInputReplayInputEvents InputEvents;
    
    FKeyInputReplayKeyData();
};


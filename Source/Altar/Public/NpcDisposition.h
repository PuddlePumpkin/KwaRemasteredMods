#pragma once
#include "CoreMinimal.h"
#include "NpcDisposition.generated.h"

USTRUCT(BlueprintType)
struct FNpcDisposition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DispositionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTimerUpdate;
    
    ALTAR_API FNpcDisposition();
};


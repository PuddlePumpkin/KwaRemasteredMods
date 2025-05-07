#pragma once
#include "CoreMinimal.h"
#include "RecordEventInfo.generated.h"

USTRUCT(BlueprintType)
struct FRecordEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    QMPUNREALINTEGRATION_API FRecordEventInfo();
};


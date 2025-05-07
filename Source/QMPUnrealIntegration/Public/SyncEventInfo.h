#pragma once
#include "CoreMinimal.h"
#include "RecordEventInfo.h"
#include "SyncEventInfo.generated.h"

USTRUCT(BlueprintType)
struct FSyncEventInfo : public FRecordEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    QMPUNREALINTEGRATION_API FSyncEventInfo();
};


#pragma once
#include "CoreMinimal.h"
#include "RecordEventInfo.h"
#include "ActorEventInfo.generated.h"

USTRUCT(BlueprintType)
struct FActorEventInfo : public FRecordEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActorEquivalentID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EventType;
    
    QMPUNREALINTEGRATION_API FActorEventInfo();
};


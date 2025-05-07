#pragma once
#include "CoreMinimal.h"
#include "ActorEventInfo.h"
#include "KeyInputReplayRecorder.h"
#include "SyncEventInfo.h"
#include "RecordTraversal.generated.h"

UCLASS(Blueprintable)
class QMPUNREALINTEGRATION_API ARecordTraversal : public AKeyInputReplayRecorder {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSyncEventInfo> RecordedInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorEventInfo> ActorInfo;
    
public:
    ARecordTraversal(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "RecordData.h"
#include "SyncEventInfo.h"
#include "UIEvent.h"
#include "UIPhase.generated.h"

UCLASS(Blueprintable)
class UUIPhase : public URecordData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIEvent> UIEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSyncEventInfo TriggerEvent;
    
    UUIPhase();

};


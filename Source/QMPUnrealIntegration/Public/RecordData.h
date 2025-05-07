#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KeyInputReplayKeyData.h"
#include "SyncEventInfo.h"
#include "RecordData.generated.h"

UCLASS(Blueprintable)
class URecordData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyInputReplayKeyData> KeyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSyncEventInfo> SyncEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KeyDataIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    URecordData();

};


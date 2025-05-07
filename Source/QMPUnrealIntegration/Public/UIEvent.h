#pragma once
#include "CoreMinimal.h"
#include "EUIEventType.h"
#include "RecordEventInfo.h"
#include "UIEvent.generated.h"

USTRUCT(BlueprintType)
struct FUIEvent : public FRecordEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PrimaryID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SecondID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIEventType EventType;
    
    QMPUNREALINTEGRATION_API FUIEvent();
};


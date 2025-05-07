#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Animation/AnimTypes.h"
#include "AnimNotifyActionEventInfo.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UAnimNotifyActionEventInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimNotifyEvent AnimNotifyEvent;
    
    UAnimNotifyActionEventInfo();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNotifyDuration();
    
};


#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "VAnimNotifyState_ChangePlayRate.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ALTAR_API UVAnimNotifyState_ChangePlayRate : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
public:
    UVAnimNotifyState_ChangePlayRate();

};


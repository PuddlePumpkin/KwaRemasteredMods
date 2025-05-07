#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "VAnimNotify_ActionNotify.generated.h"

class AVPairedPawn;
class UVPawnAnimatedAction;

UCLASS(Blueprintable, CollapseCategories)
class ALTAR_API UVAnimNotify_ActionNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActionEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActiveWhenOwnerInvisible;
    
    UVAnimNotify_ActionNotify();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerEventOnAnimatedAction(AVPairedPawn* PairedPawn, UVPawnAnimatedAction* AnimatedAction) const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GameplayTagContainer.h"
#include "OnStateBehaviorEndedDelegateDelegate.h"
#include "ActionStateStartBehavior.generated.h"

class UActionStateStartBehavior;
class UVActorBehaviorBase;
class UVAltarActionState;

UCLASS(Blueprintable)
class UActionStateStartBehavior : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateBehaviorEndedDelegate OnEnded;
    
    UActionStateStartBehavior();

    UFUNCTION(BlueprintCallable)
    static UActionStateStartBehavior* StartBehaviorFromTemplate(UVActorBehaviorBase* BehaviorTemplate, UVActorBehaviorBase*& StartedBehavior, UVAltarActionState* OuterState);
    
    UFUNCTION(BlueprintCallable)
    static UActionStateStartBehavior* StartBehaviorFromTag(FGameplayTag BehaviorTag, UVActorBehaviorBase*& StartedBehavior, UVAltarActionState* OuterState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnBehaviorEnded(bool bIsCanceled);
    
};


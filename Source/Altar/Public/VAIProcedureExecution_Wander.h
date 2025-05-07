#pragma once
#include "CoreMinimal.h"
#include "VAIProcedureExecution_Base.h"
#include "VAIProcedureExecution_Wander.generated.h"

class UAnimSequenceBase;
class UVAIProcedureExecution_TRAVEL;

UCLASS(Blueprintable)
class ALTAR_API UVAIProcedureExecution_Wander : public UVAIProcedureExecution_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVAIProcedureExecution_TRAVEL* InternalTravelProcedure;
    
public:
    UVAIProcedureExecution_Wander();

private:
    UFUNCTION(BlueprintCallable)
    void OnSpecialIdleAnimationStopped();
    
    UFUNCTION(BlueprintCallable)
    void OnSpecialIdleAnimationStarted(UAnimSequenceBase* AnimAsset);
    
};


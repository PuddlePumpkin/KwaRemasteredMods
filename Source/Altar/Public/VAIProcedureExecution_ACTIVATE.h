#pragma once
#include "CoreMinimal.h"
#include "VAIProcedureExecution_Base.h"
#include "VAIProcedureExecution_ACTIVATE.generated.h"

class AActor;
class UVAIProcedureExecution_TRAVEL;

UCLASS(Blueprintable)
class ALTAR_API UVAIProcedureExecution_ACTIVATE : public UVAIProcedureExecution_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVAIProcedureExecution_TRAVEL* InternalTravelProcedure;
    
public:
    UVAIProcedureExecution_ACTIVATE();

private:
    UFUNCTION(BlueprintCallable)
    void OnSpecialIdleEnded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTargetActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActivationRadius() const;
    
};


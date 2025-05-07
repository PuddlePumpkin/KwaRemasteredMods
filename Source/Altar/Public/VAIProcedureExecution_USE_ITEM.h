#pragma once
#include "CoreMinimal.h"
#include "VAIProcedureExecution_Base.h"
#include "VAIProcedureExecution_USE_ITEM.generated.h"

class AActor;
class UVAIProcedureExecution_ACTIVATE;

UCLASS(Blueprintable)
class ALTAR_API UVAIProcedureExecution_USE_ITEM : public UVAIProcedureExecution_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVAIProcedureExecution_ACTIVATE* InternalActivateProcedure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
public:
    UVAIProcedureExecution_USE_ITEM();

    UFUNCTION(BlueprintCallable)
    void SetUsedObjectFormId(int32 iUsedObjectFormId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSpecialIdleEnded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUsageRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUsageCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTarget() const;
    
};


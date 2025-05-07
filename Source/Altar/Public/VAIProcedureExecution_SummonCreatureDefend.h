#pragma once
#include "CoreMinimal.h"
#include "VAIProcedureExecution_Base.h"
#include "VAIProcedureExecution_SummonCreatureDefend.generated.h"

class UVAIProcedureExecution_ACCOMPANY;
class UVAIProcedureExecution_FOLLOW;

UCLASS(Blueprintable)
class ALTAR_API UVAIProcedureExecution_SummonCreatureDefend : public UVAIProcedureExecution_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVAIProcedureExecution_FOLLOW* InternalFollowProcedure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVAIProcedureExecution_ACCOMPANY* InternalAccompanyProcedure;
    
public:
    UVAIProcedureExecution_SummonCreatureDefend();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVAIProcedureExecution_FOLLOW* GetFollowProcedure() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVAIProcedureExecution_ACCOMPANY* GetAccompanyProcedure() const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "VAIProcedureExecution_Base.h"
#include "VAIProcedureExecution_Pursue.generated.h"

class UVAIProcedureExecution_FOLLOW;

UCLASS(Blueprintable)
class ALTAR_API UVAIProcedureExecution_Pursue : public UVAIProcedureExecution_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVAIProcedureExecution_FOLLOW* InternalFollowProcedure;
    
public:
    UVAIProcedureExecution_Pursue();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVAIProcedureExecution_FOLLOW* GetFollowProcedure() const;
    
};


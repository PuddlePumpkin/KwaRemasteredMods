#pragma once
#include "CoreMinimal.h"
#include "VAIProcedureExecution_Base.h"
#include "VAIProcedureExecution_Acquire.generated.h"

class UVAIProcedureExecution_ACTIVATE;

UCLASS(Blueprintable)
class ALTAR_API UVAIProcedureExecution_Acquire : public UVAIProcedureExecution_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVAIProcedureExecution_ACTIVATE* InternalActivateProcedure;
    
public:
    UVAIProcedureExecution_Acquire();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVAIProcedureExecution_ACTIVATE* GetInternalActivateProcedure() const;
    
};


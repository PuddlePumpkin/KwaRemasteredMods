#pragma once
#include "CoreMinimal.h"
#include "VAIProcedureExecution_Base.h"
#include "VAIProcedureExecution_Eat.generated.h"

class UVAIProcedureExecution_ACTIVATE;
class UVAIProcedureExecution_Acquire;

UCLASS(Blueprintable)
class ALTAR_API UVAIProcedureExecution_Eat : public UVAIProcedureExecution_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVAIProcedureExecution_Acquire* InternalAcquireProcedure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVAIProcedureExecution_ACTIVATE* InternalActivateProcedure;
    
public:
    UVAIProcedureExecution_Eat();

};


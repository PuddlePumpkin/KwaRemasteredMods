#pragma once
#include "CoreMinimal.h"
#include "VAIProcedureExecution_Base.h"
#include "VAIProcedureExecution_ESCORT.generated.h"

class UVAIProcedureExecution_TRAVEL;

UCLASS(Blueprintable)
class ALTAR_API UVAIProcedureExecution_ESCORT : public UVAIProcedureExecution_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVAIProcedureExecution_TRAVEL* InternalTravelProcedure;
    
public:
    UVAIProcedureExecution_ESCORT();

};


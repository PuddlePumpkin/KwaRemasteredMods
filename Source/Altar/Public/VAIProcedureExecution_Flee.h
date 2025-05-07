#pragma once
#include "CoreMinimal.h"
#include "VAIProcedureExecution_Base.h"
#include "VAIProcedureExecution_Flee.generated.h"

class UVAIProcedureExecution_TRAVEL;

UCLASS(Blueprintable)
class ALTAR_API UVAIProcedureExecution_Flee : public UVAIProcedureExecution_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVAIProcedureExecution_TRAVEL* InternalTravelProcedure;
    
public:
    UVAIProcedureExecution_Flee();

};


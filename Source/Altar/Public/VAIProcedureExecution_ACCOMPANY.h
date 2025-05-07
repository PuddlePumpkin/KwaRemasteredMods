#pragma once
#include "CoreMinimal.h"
#include "VAIProcedureExecution_Base.h"
#include "VAIProcedureExecution_ACCOMPANY.generated.h"

class UVAIProcedureExecution_FOLLOW;

UCLASS(Blueprintable)
class ALTAR_API UVAIProcedureExecution_ACCOMPANY : public UVAIProcedureExecution_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVAIProcedureExecution_FOLLOW* InternalFollowProcedure;
    
public:
    UVAIProcedureExecution_ACCOMPANY();

};


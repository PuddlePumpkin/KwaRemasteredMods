#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VAIProcedureExecution_Base.generated.h"

class AVPairedPawnAIController;

UCLASS(Abstract, Blueprintable)
class ALTAR_API UVAIProcedureExecution_Base : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVPairedPawnAIController* AIController;
    
public:
    UVAIProcedureExecution_Base();

};


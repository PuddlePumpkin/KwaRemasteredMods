#pragma once
#include "CoreMinimal.h"
#include "VAIProcedureExecution_Base.h"
#include "VAIProcedureExecution_TRAVEL.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVAIProcedureExecution_TRAVEL : public UVAIProcedureExecution_Base {
    GENERATED_BODY()
public:
    UVAIProcedureExecution_TRAVEL();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAcceptanceRadius() const;
    
};


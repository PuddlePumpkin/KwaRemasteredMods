#pragma once
#include "CoreMinimal.h"
#include "VAIProcedureExecution_Base.h"
#include "VAIProcedureExecution_DoNothing.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVAIProcedureExecution_DoNothing : public UVAIProcedureExecution_Base {
    GENERATED_BODY()
public:
    UVAIProcedureExecution_DoNothing();

};


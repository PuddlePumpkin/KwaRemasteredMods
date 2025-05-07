#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VAIProcedureExecution_Base.h"
#include "VAICombatMovement_ACTOR.generated.h"

class UNavigationQueryFilter;

UCLASS(Blueprintable)
class ALTAR_API UVAICombatMovement_ACTOR : public UVAIProcedureExecution_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> ActiveFilterClass;
    
public:
    UVAICombatMovement_ACTOR();

};


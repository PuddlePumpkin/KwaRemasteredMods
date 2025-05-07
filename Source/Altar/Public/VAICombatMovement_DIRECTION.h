#pragma once
#include "CoreMinimal.h"
#include "VAIProcedureExecution_Base.h"
#include "VAICombatMovement_DIRECTION.generated.h"

class USteeringBehavior_Direction;

UCLASS(Blueprintable)
class ALTAR_API UVAICombatMovement_DIRECTION : public UVAIProcedureExecution_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USteeringBehavior_Direction* DirectionSteeringBehavior;
    
public:
    UVAICombatMovement_DIRECTION();

};


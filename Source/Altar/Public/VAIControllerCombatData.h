#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EVOblivionCombatState.h"
#include "EVOblivionManeuver.h"
#include "EVOblivionStrategy.h"
#include "VAIControllerCombatData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FVAIControllerCombatData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fAcceptanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVOblivionStrategy Strategy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVOblivionManeuver Maneuver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVOblivionCombatState CombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DirectionalMovementVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PositionMovementDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanReachTarget;
    
    ALTAR_API FVAIControllerCombatData();
};


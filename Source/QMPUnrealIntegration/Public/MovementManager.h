#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "UObject/NoExportTypes.h"
#include "KeyInputReplayActorData.h"
#include "PlaybackManager.h"
#include "MovementManager.generated.h"

class AAIController;

UCLASS(Blueprintable)
class QMPUNREALINTEGRATION_API UMovementManager : public UPlaybackManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIController* PlayerAIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyInputReplayActorData> ActorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> LastPlayerPositions;
    
public:
    UMovementManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnAIMoveCompleted(FAIRequestID Request, TEnumAsByte<EPathFollowingResult::Type> Result);
    
};


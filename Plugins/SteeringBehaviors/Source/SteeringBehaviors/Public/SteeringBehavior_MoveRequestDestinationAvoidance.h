#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SteeringBehavior.h"
#include "SteeringBehavior_MoveRequestDestinationAvoidance.generated.h"

class AActor;
class APawn;
class UMoveRequestDestinationSpatialIndexSubsystem;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STEERINGBEHAVIORS_API USteeringBehavior_MoveRequestDestinationAvoidance : public USteeringBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double QueryRadius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SpacingDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinInterest;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxInterest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMoveRequestDestinationSpatialIndexSubsystem* MoveRequestDestinationSpatialIndexSubsystem;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<APawn*> IgnoredPawns;
    
public:
    USteeringBehavior_MoveRequestDestinationAvoidance();

    UFUNCTION(BlueprintCallable)
    void SetPawnIgnored(const APawn* Pawn, const bool bIgnored);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnIgnoredActorEndPlay(const AActor* Actor, const TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};


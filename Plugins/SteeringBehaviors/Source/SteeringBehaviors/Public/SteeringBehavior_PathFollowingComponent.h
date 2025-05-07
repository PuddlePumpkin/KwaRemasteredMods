#pragma once
#include "CoreMinimal.h"
#include "PawnAvoidanceBox.h"
#include "PawnAvoidancePersistence.h"
#include "SkipPathSegmentAreaConfiguration.h"
#include "SteeringBehavior.h"
#include "SteeringBehavior_PathFollowingComponent.generated.h"

class APawn;
class UCharacterMovementComponent;
class UPathFollowingComponent;
class UPawnSpatialIndexSubsystem;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STEERINGBEHAVIORS_API USteeringBehavior_PathFollowingComponent : public USteeringBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinInterest;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DefaultLookAheadDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLookAheadLocationCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LookAheadMaxTrajectoryAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FurthestLookAheadLocationInterest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopAtDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCalculateTurnRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AvoidanceDetectionDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AvoidanceTimeDifferentVelocities;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AvoidanceTimeSimilarVelocities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAvoidanceIgnoreBlockingPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanGiveWay;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double GiveWayDuration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double GiveWayPathLength2D;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double StopGiveWayPathLength2D;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BacktrackPathLength2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkipPathSegmentAreaConfiguration> SkipPathSegmentAreaConfigurations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCharacterMovementComponent* CharacterMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPathFollowingComponent> PathFollowingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPawnSpatialIndexSubsystem* PawnSpatialIndexSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APawn*> PawnsDetected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPawnAvoidanceBox> PawnAvoidanceBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<APawn*, FPawnAvoidancePersistence> PawnsAvoidancePersistence;
    
public:
    USteeringBehavior_PathFollowingComponent();

};


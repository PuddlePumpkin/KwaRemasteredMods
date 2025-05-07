#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SteeringBehavior.h"
#include "SteeringBehavior_NavAgentAvoidance.generated.h"

class APawn;
class UCharacterMovementComponent;
class UCurveFloat;
class UPawnSpatialIndexSubsystem;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STEERINGBEHAVIORS_API USteeringBehavior_NavAgentAvoidance : public USteeringBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DetectionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DistanceToDangerCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DistanceToDangerGreaterAvoidanceWeightCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double IgnorePawnDotProductThreshold;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SpacingDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinSpeedNormalized;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinCollisionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBrake;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval RepulsionDistanceInterval;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval RepulsionInterestInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPawnSpatialIndexSubsystem* PawnSpatialIndexSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCharacterMovementComponent* CharacterMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APawn*> PawnsDetected;
    
public:
    USteeringBehavior_NavAgentAvoidance();

};


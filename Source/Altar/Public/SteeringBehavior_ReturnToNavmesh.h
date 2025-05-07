#pragma once
#include "CoreMinimal.h"
#include "SteeringBehavior.h"
#include "SteeringBehavior_ReturnToNavmesh.generated.h"

class ARecastNavMesh;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ALTAR_API USteeringBehavior_ReturnToNavmesh : public USteeringBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinInterest;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxInterest;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinTimeOutsideNavmeshToEnableBehavior;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AdditionalDurationPerPoly;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxDistanceToReturnToNavmesh;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxSpeedOutsideNavmesh;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxDownStepHeightOutsideNavmesh;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DisableDurationOnBecomeIrrelevant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ObstacleDetectionCollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxReachabilityChecksPerFrame;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LowPriorityHeightDeltaThreshold;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double NavMeshDistanceTolerance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARecastNavMesh* NavigationData;
    
public:
    USteeringBehavior_ReturnToNavmesh();

};


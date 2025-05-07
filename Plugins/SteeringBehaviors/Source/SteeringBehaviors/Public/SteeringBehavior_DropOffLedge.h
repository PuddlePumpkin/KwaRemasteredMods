#pragma once
#include "CoreMinimal.h"
#include "SteeringBehavior.h"
#include "SteeringBehavior_DropOffLedge.generated.h"

class ARecastNavMesh;
class UNavArea;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STEERINGBEHAVIORS_API USteeringBehavior_DropOffLedge : public USteeringBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinLedgeHeight;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxLedgeHeight;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxLedgeHeightIncrement;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxLedgeLength;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxPathSegmentDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxLedgeCrossingSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxLedgeCrossingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftClassPtr<UNavArea>> IgnoreMaxLedgeHeightNavAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LedgeObstacleDetectionCollisionProfile;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARecastNavMesh* NavigationData;
    
public:
    USteeringBehavior_DropOffLedge();

};


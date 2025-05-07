#pragma once
#include "CoreMinimal.h"
#include "SteeringBehavior.h"
#include "SteeringBehavior_NavMeshAvoidance.generated.h"

class ARecastNavMesh;
class UCharacterMovementComponent;
class UCurveFloat;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STEERINGBEHAVIORS_API USteeringBehavior_NavMeshAvoidance : public USteeringBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DetectionCollisionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DistanceToDangerCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCharacterMovementComponent* CharacterMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARecastNavMesh* NavigationData;
    
public:
    USteeringBehavior_NavMeshAvoidance();

};


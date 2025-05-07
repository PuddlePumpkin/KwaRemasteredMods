#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "SteeringBehaviorsPathFollowingComponent.generated.h"

class USteeringBehaviorsComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STEERINGBEHAVIORS_API USteeringBehaviorsPathFollowingComponent : public UPathFollowingComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRepathAutomatically;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepathRaycastCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USteeringBehaviorsComponent* SteeringBehaviorsComponent;
    
public:
    USteeringBehaviorsPathFollowingComponent(const FObjectInitializer& ObjectInitializer);

};


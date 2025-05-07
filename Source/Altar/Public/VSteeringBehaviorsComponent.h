#pragma once
#include "CoreMinimal.h"
#include "SteeringBehaviorsComponent.h"
#include "VSteeringBehaviorsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVSteeringBehaviorsComponent : public USteeringBehaviorsComponent {
    GENERATED_BODY()
public:
    UVSteeringBehaviorsComponent(const FObjectInitializer& ObjectInitializer);

};


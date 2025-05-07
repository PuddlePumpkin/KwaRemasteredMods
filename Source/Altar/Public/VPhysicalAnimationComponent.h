#pragma once
#include "CoreMinimal.h"
#include "PhysicsEngine/PhysicalAnimationComponent.h"
#include "VPhysicalAnimationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVPhysicalAnimationComponent : public UPhysicalAnimationComponent {
    GENERATED_BODY()
public:
    UVPhysicalAnimationComponent(const FObjectInitializer& ObjectInitializer);

};


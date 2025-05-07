#pragma once
#include "CoreMinimal.h"
#include "BuoyancyComponent.h"
#include "VBuoyancyComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVBuoyancyComponent : public UBuoyancyComponent {
    GENERATED_BODY()
public:
    UVBuoyancyComponent(const FObjectInitializer& ObjectInitializer);

};


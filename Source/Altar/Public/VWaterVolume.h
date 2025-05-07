#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PhysicsVolume.h"
#include "VWaterVolume.generated.h"

UCLASS(Blueprintable)
class ALTAR_API AVWaterVolume : public APhysicsVolume {
    GENERATED_BODY()
public:
    AVWaterVolume(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "EVSpawnedActorType.generated.h"

UENUM(BlueprintType)
enum class EVSpawnedActorType : uint8 {
    Unknown,
    Dropped,
    Equipped,
    Ammo,
};


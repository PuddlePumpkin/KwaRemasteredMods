#pragma once
#include "CoreMinimal.h"
#include "EPreviewDefaultObjectType.generated.h"

UENUM(BlueprintType)
enum class EPreviewDefaultObjectType : uint8 {
    ActorTypeClass,
    StaticMesh,
    SkeletalMesh,
    Count,
    Invalid = Count,
};


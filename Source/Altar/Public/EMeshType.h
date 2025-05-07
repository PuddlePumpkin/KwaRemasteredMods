#pragma once
#include "CoreMinimal.h"
#include "EMeshType.generated.h"

UENUM(BlueprintType)
enum class EMeshType : uint8 {
    StaticMesh,
    SkeletalMesh,
};


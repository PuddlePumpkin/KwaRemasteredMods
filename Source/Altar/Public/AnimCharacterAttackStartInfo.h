#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "AnimCharacterAttackStartInfo.generated.h"

USTRUCT(BlueprintType)
struct FAnimCharacterAttackStartInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult PreliminaryTargetRaycast;
    
    ALTAR_API FAnimCharacterAttackStartInfo();
};


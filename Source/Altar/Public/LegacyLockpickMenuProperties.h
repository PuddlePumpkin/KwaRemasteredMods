#pragma once
#include "CoreMinimal.h"
#include "ELegacyLockpickMenuDifficulty.h"
#include "LegacyLockpickMenuProperties.generated.h"

USTRUCT(BlueprintType)
struct FLegacyLockpickMenuProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacyLockpickMenuDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumLockpicks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasSkeletonKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SecurityLevel;
    
    ALTAR_API FLegacyLockpickMenuProperties();
};


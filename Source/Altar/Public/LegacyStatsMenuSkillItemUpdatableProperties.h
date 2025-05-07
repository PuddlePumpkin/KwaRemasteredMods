#pragma once
#include "CoreMinimal.h"
#include "LegacyStatsMenuSkillItemUpdatableProperties.generated.h"

USTRUCT(BlueprintType)
struct FLegacyStatsMenuSkillItemUpdatableProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkillBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMajorSkill;
    
    ALTAR_API FLegacyStatsMenuSkillItemUpdatableProperties();
};


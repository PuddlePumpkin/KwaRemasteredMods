#pragma once
#include "CoreMinimal.h"
#include "ESkillStat.h"
#include "VStatsDataStructure.h"
#include "VSkillStatDataStructure.generated.h"

USTRUCT(BlueprintType)
struct FVSkillStatDataStructure : public FVStatsDataStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkillStat Type;
    
    ALTAR_API FVSkillStatDataStructure();
};


#pragma once
#include "CoreMinimal.h"
#include "ESkillAndClassSpecialization.h"
#include "ESkillStat.h"
#include "SkillInformation.generated.h"

USTRUCT(BlueprintType)
struct FSkillInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkillAndClassSpecialization Specialization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkillStat SkillStatsEnum;
    
    ALTAR_API FSkillInformation();
};


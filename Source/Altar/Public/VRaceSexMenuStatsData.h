#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EStatGroupType.h"
#include "VAttributeStatDataStructure.h"
#include "VResistStatDataStructure.h"
#include "VSkillStatDataStructure.h"
#include "VRaceSexMenuStatsData.generated.h"

USTRUCT(BlueprintType)
struct FVRaceSexMenuStatsData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatGroupType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVAttributeStatDataStructure> Attributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVSkillStatDataStructure> Skills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVResistStatDataStructure> Resists;
    
    ALTAR_API FVRaceSexMenuStatsData();
};


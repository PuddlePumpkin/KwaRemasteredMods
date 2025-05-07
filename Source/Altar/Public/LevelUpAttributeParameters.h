#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LevelUpAttributeParameters.generated.h"

USTRUCT(BlueprintType)
struct FLevelUpAttributeParameters : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BonusCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBonus;
    
    ALTAR_API FLevelUpAttributeParameters();
};


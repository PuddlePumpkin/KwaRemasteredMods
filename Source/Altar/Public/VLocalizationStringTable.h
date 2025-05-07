#pragma once
#include "CoreMinimal.h"
#include "VLocalizationStringTable.generated.h"

USTRUCT(BlueprintType)
struct FVLocalizationStringTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString KeyPrefix;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TableName;
    
    ALTAR_API FVLocalizationStringTable();
};


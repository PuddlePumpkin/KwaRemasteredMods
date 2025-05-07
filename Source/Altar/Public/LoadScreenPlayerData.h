#pragma once
#include "CoreMinimal.h"
#include "LoadScreenPlayerData.generated.h"

USTRUCT(BlueprintType)
struct FLoadScreenPlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanLevelUp;
    
    ALTAR_API FLoadScreenPlayerData();
};


#pragma once
#include "CoreMinimal.h"
#include "LevelUpMenuAttributeData.h"
#include "LevelUpMenuInitializationData.generated.h"

USTRUCT(BlueprintType)
struct FLevelUpMenuInitializationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLevelUpMenuAttributeData> AttributesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelUpTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelUpText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartingCoinsNumber;
    
    ALTAR_API FLevelUpMenuInitializationData();
};


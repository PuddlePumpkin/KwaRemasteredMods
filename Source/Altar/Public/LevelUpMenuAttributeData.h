#pragma once
#include "CoreMinimal.h"
#include "EVAttribute.h"
#include "LevelUpMenuAttributeData.generated.h"

USTRUCT(BlueprintType)
struct FLevelUpMenuAttributeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseActorValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelUpBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVAttribute Attribute;
    
    ALTAR_API FLevelUpMenuAttributeData();
};


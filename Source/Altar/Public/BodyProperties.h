#pragma once
#include "CoreMinimal.h"
#include "BodyProperties.generated.h"

USTRUCT(BlueprintType)
struct FBodyProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FName, float> BoneScalingMap;
    
    ALTAR_API FBodyProperties();
};


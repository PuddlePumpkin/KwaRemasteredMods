#pragma once
#include "CoreMinimal.h"
#include "DeathAnimationData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FDeathAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Death;
    
    ALTAR_API FDeathAnimationData();
};


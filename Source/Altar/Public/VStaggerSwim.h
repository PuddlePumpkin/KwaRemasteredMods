#pragma once
#include "CoreMinimal.h"
#include "VStaggerSwim.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FVStaggerSwim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Stagger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Swim_Stagger;
    
    ALTAR_API FVStaggerSwim();
};


#pragma once
#include "CoreMinimal.h"
#include "VStagger.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FVStagger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Stagger;
    
    ALTAR_API FVStagger();
};


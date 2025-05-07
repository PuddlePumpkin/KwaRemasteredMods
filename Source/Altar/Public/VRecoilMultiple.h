#pragma once
#include "CoreMinimal.h"
#include "VRecoilMultiple.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FVRecoilMultiple {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> Recoil;
    
    ALTAR_API FVRecoilMultiple();
};


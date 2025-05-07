#pragma once
#include "CoreMinimal.h"
#include "VRecoil.generated.h"

class UAnimMontage;
class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FVRecoil {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Recoil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* IdleBlend;
    
    ALTAR_API FVRecoil();
};


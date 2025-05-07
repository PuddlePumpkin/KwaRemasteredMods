#pragma once
#include "CoreMinimal.h"
#include "EDodgeDirection.h"
#include "DodgeAnimationData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FDodgeAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDodgeDirection, UAnimMontage*> DodgeAnimations;
    
    ALTAR_API FDodgeAnimationData();
};


#pragma once
#include "CoreMinimal.h"
#include "GetUpAnimationData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FGetUpAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* GetUpFaceDownOrRightMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* GetUpFaceUpOrLeftMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLeftRight;
    
    ALTAR_API FGetUpAnimationData();
};


#pragma once
#include "CoreMinimal.h"
#include "WeaponChargeParams.generated.h"

USTRUCT(BlueprintType)
struct FWeaponChargeParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedInterpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fWeaponChargePercent;
    
    ALTAR_API FWeaponChargeParams();
};


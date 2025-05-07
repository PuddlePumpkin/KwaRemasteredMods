#pragma once
#include "CoreMinimal.h"
#include "EPathFlags.h"
#include "NiKeyBasedInterpolator.h"
#include "NiPathInterpolator.generated.h"

class UNiFloatData;
class UNiPosData;

UCLASS(Blueprintable)
class ALTAR_API UNiPathInterpolator : public UNiKeyBasedInterpolator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPathFlags Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BankDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBankAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Smoothing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FollowAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiPosData* PathData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiFloatData* PercentData;
    
    UNiPathInterpolator();

};


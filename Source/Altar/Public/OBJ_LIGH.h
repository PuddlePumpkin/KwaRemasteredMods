#pragma once
#include "CoreMinimal.h"
#include "OBJ_LIGH.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FOBJ_LIGH {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Time;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Radius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Color;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallOffExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOV;
    
    FOBJ_LIGH();
};


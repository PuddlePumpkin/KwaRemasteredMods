#pragma once
#include "CoreMinimal.h"
#include "Vector3s.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FVector3s {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Z;
    
    FVector3s();
};


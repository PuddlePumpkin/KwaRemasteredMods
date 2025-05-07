#pragma once
#include "CoreMinimal.h"
#include "HostileData.generated.h"

USTRUCT(BlueprintType)
struct FHostileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    ALTAR_API FHostileData();
};


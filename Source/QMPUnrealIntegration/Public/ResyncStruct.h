#pragma once
#include "CoreMinimal.h"
#include "ResyncStruct.generated.h"

USTRUCT(BlueprintType)
struct FResyncStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PositionDifMax;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationDifMax;
    
    QMPUNREALINTEGRATION_API FResyncStruct();
};


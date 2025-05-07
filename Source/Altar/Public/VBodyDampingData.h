#pragma once
#include "CoreMinimal.h"
#include "VBodyDampingData.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FVBodyDampingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngularDamping;
    
    FVBodyDampingData();
};


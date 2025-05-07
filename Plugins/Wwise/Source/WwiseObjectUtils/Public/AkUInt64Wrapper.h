#pragma once
#include "CoreMinimal.h"
#include "AkUInt64Wrapper.generated.h"

USTRUCT()
struct FAkUInt64Wrapper {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint64 UInt64Value;
    
    WWISEOBJECTUTILS_API FAkUInt64Wrapper();
};


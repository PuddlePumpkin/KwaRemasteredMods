#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SetCompassIconMarkersGameThreadTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FSetCompassIconMarkersGameThreadTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    ALTAR_API FSetCompassIconMarkersGameThreadTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSetCompassIconMarkersGameThreadTickFunction> : public TStructOpsTypeTraitsBase2<FSetCompassIconMarkersGameThreadTickFunction>
{
    enum
    {
        WithCopy = false
    };
};


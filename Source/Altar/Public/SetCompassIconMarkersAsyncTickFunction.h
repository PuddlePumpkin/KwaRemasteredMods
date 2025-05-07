#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SetCompassIconMarkersAsyncTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FSetCompassIconMarkersAsyncTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    ALTAR_API FSetCompassIconMarkersAsyncTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSetCompassIconMarkersAsyncTickFunction> : public TStructOpsTypeTraitsBase2<FSetCompassIconMarkersAsyncTickFunction>
{
    enum
    {
        WithCopy = false
    };
};


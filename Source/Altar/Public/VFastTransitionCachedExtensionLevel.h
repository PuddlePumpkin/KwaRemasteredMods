#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VFastTransitionCachedExtensionLevel.generated.h"

UCLASS(Blueprintable)
class UVFastTransitionCachedExtensionLevel : public UObject {
    GENERATED_BODY()
public:
    UVFastTransitionCachedExtensionLevel();

    UFUNCTION(BlueprintCallable)
    void OnLevelLoaded();
    
};


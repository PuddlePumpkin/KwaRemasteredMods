#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WorldSpaceConversionLibrary.generated.h"

UCLASS(Blueprintable)
class UWorldSpaceConversionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWorldSpaceConversionLibrary();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetUnrealWorldToTESWorldScale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTESWorldToUnrealWorldScale();
    
};


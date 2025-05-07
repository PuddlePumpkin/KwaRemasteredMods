#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VAltarEntitlementBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class UVAltarEntitlementBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVAltarEntitlementBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasDeluxeEntitlement();
    
};


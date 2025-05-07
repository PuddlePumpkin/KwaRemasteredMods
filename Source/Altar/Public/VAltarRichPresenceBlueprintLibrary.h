#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VAltarRichPresenceBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class UVAltarRichPresenceBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVAltarRichPresenceBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void UpdateRichPresence(const FString& PresenceData);
    
};


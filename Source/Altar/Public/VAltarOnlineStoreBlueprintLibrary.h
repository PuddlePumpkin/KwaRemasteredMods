#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VAltarOnlineStoreBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class UVAltarOnlineStoreBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVAltarOnlineStoreBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void OpenStoreForId(const FString& ProductId);
    
    UFUNCTION(BlueprintCallable)
    static void OpenStoreDeluxe();
    
    UFUNCTION(BlueprintCallable)
    static void OpenContentChangePopup();
    
    UFUNCTION(BlueprintCallable)
    static FString GetDeluxeStoreId();
    
};


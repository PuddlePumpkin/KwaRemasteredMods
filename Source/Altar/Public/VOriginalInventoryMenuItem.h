#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OriginalInventoryMenuItemProperties.h"
#include "VOriginalInventoryMenuItem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVOriginalInventoryMenuItem : public UObject {
    GENERATED_BODY()
public:
    UVOriginalInventoryMenuItem();

    UFUNCTION(BlueprintCallable)
    void SetProperties(const FOriginalInventoryMenuItemProperties& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOriginalInventoryMenuItemProperties GetProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInventoryIndex() const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LegacyRepairItemProperties.h"
#include "VLegacyRepairMenuItem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVLegacyRepairMenuItem : public UObject {
    GENERATED_BODY()
public:
    UVLegacyRepairMenuItem();

    UFUNCTION(BlueprintCallable)
    void SetProperties(const FLegacyRepairItemProperties& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyRepairItemProperties GetProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndex() const;
    
};


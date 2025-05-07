#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LegacyStatsMenuFactionProperties.h"
#include "VLegacyStatsMenuFaction.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVLegacyStatsMenuFaction : public UObject {
    GENERATED_BODY()
public:
    UVLegacyStatsMenuFaction();

    UFUNCTION(BlueprintCallable)
    void SetFaction(const FLegacyStatsMenuFactionProperties& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyStatsMenuFactionProperties GetFaction() const;
    
};


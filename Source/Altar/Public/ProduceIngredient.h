#pragma once
#include "CoreMinimal.h"
#include "ESPDataProperty.h"
#include "SeasonProduceChance.h"
#include "VFormPtr.h"
#include "ProduceIngredient.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FProduceIngredient : public FESPDataProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVFormPtr Ingredient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSeasonProduceChance ProduceChance;
    
    FProduceIngredient();
};


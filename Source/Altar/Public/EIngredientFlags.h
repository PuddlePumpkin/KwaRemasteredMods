#pragma once
#include "CoreMinimal.h"
#include "EIngredientFlags.generated.h"

UENUM()
enum class EIngredientFlags : uint8 {
    CostOverride = 1,
    FoodItem,
};


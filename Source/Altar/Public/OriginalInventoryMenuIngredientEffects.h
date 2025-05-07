#pragma once
#include "CoreMinimal.h"
#include "OriginalInventoryMenuIngredientEffects.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FOriginalInventoryMenuIngredientEffects {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUnknown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Effect;
    
    ALTAR_API FOriginalInventoryMenuIngredientEffects();
};


#pragma once
#include "CoreMinimal.h"
#include "OriginalInventoryMenuSigilstoneEffects.generated.h"

USTRUCT(BlueprintType)
struct FOriginalInventoryMenuSigilstoneEffects {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Effect;
    
    ALTAR_API FOriginalInventoryMenuSigilstoneEffects();
};


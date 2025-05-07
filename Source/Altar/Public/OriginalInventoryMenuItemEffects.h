#pragma once
#include "CoreMinimal.h"
#include "OriginalInventoryMenuItemEffects.generated.h"

USTRUCT(BlueprintType)
struct FOriginalInventoryMenuItemEffects {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPoison;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Effect;
    
    ALTAR_API FOriginalInventoryMenuItemEffects();
};


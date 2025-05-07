#pragma once
#include "CoreMinimal.h"
#include "EffectItemList.h"
#include "MagicItem.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FMagicItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEffectItemList EffectList;
    
    FMagicItem();
};


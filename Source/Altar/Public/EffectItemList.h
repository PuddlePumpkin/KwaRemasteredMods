#pragma once
#include "CoreMinimal.h"
#include "Effect.h"
#include "EffectItemList.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FEffectItemList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEffect> EffectList;
    
    FEffectItemList();
};

